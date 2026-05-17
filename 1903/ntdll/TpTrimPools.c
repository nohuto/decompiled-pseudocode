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

signed __int64 TpTrimPools()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  _UNKNOWN **v3; // r14
  _UNKNOWN **v4; // rbx
  volatile signed __int64 *v5; // rbp
  volatile signed __int64 *v6; // r15
  char v7; // r13
  int v8; // r9d
  unsigned __int64 v9; // r8
  int v10; // eax
  _QWORD **v11; // rsi
  __int64 Heap; // r12
  __int64 v13; // r15
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // r10d
  __int64 *v21; // rbx
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v31; // [rsp+80h] [rbp+18h]

  v30 = -1000000LL;
  RtlAcquireSRWLockExclusive(&qword_180166460);
  v3 = (_UNKNOWN **)off_18015F610;
  while ( v3 != &off_18015F610 )
  {
    v4 = v3;
    v3 = (_UNKNOWN **)*v3;
    v5 = (volatile signed __int64 *)(v4 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v4 - 2, v0, v1, v2);
    if ( *((_BYTE *)v4 - 7) )
      goto LABEL_31;
    v6 = (volatile signed __int64 *)(v4 - 39);
    v31 = (volatile signed __int64 *)(v4 - 39);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v4 - 39);
    v29 = 0;
    v7 = 1;
    if ( (int)ZwSetInformationWorkerFactory(*(v4 - 41), 12LL, &v29) >= 0 && v29 )
    {
      v8 = 0;
      v9 = *((_DWORD *)v4 + 13) ^ (*((_DWORD *)v4 + 13) ^ (2 * v29)) & 0xFFEu;
      *((_DWORD *)v4 + 13) = v9;
      if ( (((unsigned int)v9 >> 11) & 0xFFE) < (v9 & 0xFFE) )
      {
        do
        {
          if ( v8 == 258 )
            break;
          v10 = RtlSleepConditionVariableSRW(v4 + 8, v4 - 39, &v30, 0LL);
          v9 = *((unsigned int *)v4 + 13);
          v8 = v10;
        }
        while ( (((unsigned int)v9 >> 11) & 0xFFE) < (*((_DWORD *)v4 + 13) & 0xFFEu) );
      }
      if ( (v9 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v4 + 13) = v9 & 0xFFFFF001;
        goto LABEL_30;
      }
      v11 = (_QWORD **)(v4 + 9);
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (dword_180166080 + 786432) | 8u,
               8 * ((v9 >> 12) & 0x7FF));
      if ( !Heap )
      {
        while ( 1 )
        {
          v23 = *v11;
          if ( *v11 == v11 )
            break;
          v24 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) != v23 || (v25 = (_QWORD *)v23[1], (_QWORD *)*v25 != v23) )
LABEL_44:
            __fastfail(3u);
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          ZwClose(v23[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, (__int64)v23);
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
        goto LABEL_30;
      }
      v13 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (dword_180166080 + 786432) | 8u,
              8LL * ((*((_DWORD *)v4 + 13) >> 12) & 0x7FF));
      if ( v13 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          v15 = *v11;
          if ( *v11 == v11 )
            break;
          *(_QWORD *)(Heap + 8 * v14) = v15[2];
          *(_QWORD *)(v13 + 8 * v14) = v15;
          v16 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 )
            goto LABEL_44;
          v17 = (_QWORD *)v15[1];
          if ( (_QWORD *)*v17 != v15 )
            goto LABEL_44;
          *v17 = v16;
          v14 = (unsigned int)(v14 + 1);
          *(_QWORD *)(v16 + 8) = v17;
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v4 - 2);
        v7 = 0;
        v18 = 0;
        do
        {
          v19 = v18 << 6;
          if ( (unsigned int)v19 >= (unsigned int)v14 )
            break;
          v20 = (int)v19 + 64 <= (unsigned int)v14 ? 64 : v14 & 0x3F;
          if ( (unsigned int)ZwWaitForMultipleObjects(v20, Heap + 8 * v19, 0LL, 0LL, &v30) == 258 )
            break;
          ++v18;
        }
        while ( v18 <= (unsigned int)v14 >> 6 );
        if ( (_DWORD)v14 )
        {
          v21 = (__int64 *)v13;
          do
          {
            ZwClose(*(__int64 *)((char *)v21 + Heap - v13));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, *v21++);
            --v14;
          }
          while ( v14 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v13);
      }
      else
      {
        while ( 1 )
        {
          v26 = *v11;
          if ( *v11 == v11 )
            break;
          v27 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 )
            goto LABEL_44;
          v28 = (_QWORD *)v26[1];
          if ( (_QWORD *)*v28 != v26 )
            goto LABEL_44;
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          ZwClose(v26[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, (__int64)v26);
        }
        *((_DWORD *)v4 + 13) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, Heap);
      if ( v7 )
      {
        v6 = v31;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v6);
LABEL_31:
      RtlReleaseSRWLockShared(v5);
    }
  }
  return RtlReleaseSRWLockExclusive(&qword_180166460);
}
