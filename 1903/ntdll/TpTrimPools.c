/*
 * XREFs of TpTrimPools @ 0x1800607C0
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180060AE0 (RtlSleepConditionVariableSRW.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwWaitForMultipleObjects @ 0x18009D230 (ZwWaitForMultipleObjects.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // rbp
  _RTL_SRWLOCK *v3; // r15
  char v4; // r13
  NTSTATUS v5; // r9d
  unsigned __int64 v6; // r8
  NTSTATUS v7; // eax
  void **v8; // rsi
  char *Heap; // r12
  PVOID *v10; // r15
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  ULONG v17; // r10d
  PVOID *v18; // rbx
  void ***v19; // rdi
  void **v20; // rcx
  void **v21; // rax
  void ***v22; // rdi
  void **v23; // rcx
  void **v24; // rax
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+10h] BYREF
  _RTL_SRWLOCK *v27; // [rsp+80h] [rbp+18h]

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&stru_180166460);
  v0 = (_UNKNOWN **)off_18015F610;
  while ( v0 != &off_18015F610 )
  {
    v1 = v0;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 - 2);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 - 2);
    if ( *((_BYTE *)v1 - 7) )
      goto LABEL_31;
    v3 = (_RTL_SRWLOCK *)(v1 - 39);
    v27 = (_RTL_SRWLOCK *)(v1 - 39);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( ZwSetInformationWorkerFactory(*(v1 - 41), WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = 0;
      v6 = *((_DWORD *)v1 + 13) ^ (*((_DWORD *)v1 + 13) ^ (2 * WorkerFactoryInformation)) & 0xFFEu;
      *((_DWORD *)v1 + 13) = v6;
      if ( (((unsigned int)v6 >> 11) & 0xFFE) < (v6 & 0xFFE) )
      {
        do
        {
          if ( v5 == 258 )
            break;
          v7 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 8, (PRTL_SRWLOCK)v1 - 39, &Timeout, 0);
          v6 = *((unsigned int *)v1 + 13);
          v5 = v7;
        }
        while ( (((unsigned int)v6 >> 11) & 0xFFE) < (*((_DWORD *)v1 + 13) & 0xFFEu) );
      }
      if ( (v6 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 13) = v6 & 0xFFFFF001;
        goto LABEL_30;
      }
      v8 = (void **)(v1 + 9);
      Heap = (char *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (dword_180166080 + 786432) | 8,
                       8 * ((v6 >> 12) & 0x7FF));
      if ( !Heap )
      {
        while ( 1 )
        {
          v19 = (void ***)*v8;
          if ( *v8 == v8 )
            break;
          v20 = *v19;
          if ( (*v19)[1] != v19 || (v21 = v19[1], *v21 != v19) )
LABEL_44:
            __fastfail(3u);
          *v21 = v20;
          v20[1] = v21;
          ZwClose(v19[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v19);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        goto LABEL_30;
      }
      v10 = (PVOID *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (dword_180166080 + 786432) | 8,
                       8LL * ((*((_DWORD *)v1 + 13) >> 12) & 0x7FF));
      if ( v10 )
      {
        v11 = 0LL;
        while ( 1 )
        {
          v12 = *v8;
          if ( *v8 == v8 )
            break;
          *(_QWORD *)&Heap[8 * v11] = v12[2];
          v10[v11] = v12;
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 )
            goto LABEL_44;
          v14 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v14 != v12 )
            goto LABEL_44;
          *v14 = v13;
          v11 = (unsigned int)(v11 + 1);
          *(_QWORD *)(v13 + 8) = v14;
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 - 2);
        v4 = 0;
        v15 = 0;
        do
        {
          v16 = v15 << 6;
          if ( (unsigned int)v16 >= (unsigned int)v11 )
            break;
          v17 = (int)v16 + 64 <= (unsigned int)v11 ? 64 : v11 & 0x3F;
          if ( ZwWaitForMultipleObjects(v17, (HANDLE *)&Heap[8 * v16], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v15;
        }
        while ( v15 <= (unsigned int)v11 >> 6 );
        if ( (_DWORD)v11 )
        {
          v18 = v10;
          do
          {
            ZwClose(*(PVOID *)((char *)v18 + Heap - (char *)v10));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, *v18++);
            --v11;
          }
          while ( v11 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v10);
      }
      else
      {
        while ( 1 )
        {
          v22 = (void ***)*v8;
          if ( *v8 == v8 )
            break;
          v23 = *v22;
          if ( (*v22)[1] != v22 )
            goto LABEL_44;
          v24 = v22[1];
          if ( *v24 != v22 )
            goto LABEL_44;
          *v24 = v23;
          v23[1] = v24;
          ZwClose(v22[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v22);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, Heap);
      if ( v4 )
      {
        v3 = v27;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_31:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&stru_180166460);
}
