/*
 * XREFs of TpTrimPools @ 0x1800586A0
 * Callers:
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x1800589C0 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A0E30 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TpTrimPools(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _UNKNOWN **v7; // r14
  _UNKNOWN **v8; // rbx
  volatile signed __int64 *v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // r15
  char v14; // r13
  int v15; // r9d
  unsigned __int64 v16; // r8
  int v17; // eax
  unsigned __int64 *v18; // rsi
  unsigned __int64 Heap; // r12
  unsigned __int64 v20; // r15
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  unsigned int v27; // r10d
  unsigned __int64 *v28; // rbx
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // [rsp+70h] [rbp+8h] BYREF
  __int64 v37; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v38; // [rsp+80h] [rbp+18h]

  v37 = -1000000LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, a2, a3, a4);
  v7 = (_UNKNOWN **)TppPoolpList;
  while ( v7 != &TppPoolpList )
  {
    v8 = v7;
    v7 = (_UNKNOWN **)*v7;
    v9 = (volatile signed __int64 *)(v8 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v8 - 2, v4, v5, v6);
    if ( *((_BYTE *)v8 - 7) )
      goto LABEL_31;
    v13 = (volatile signed __int64 *)(v8 - 39);
    v38 = (volatile signed __int64 *)(v8 - 39);
    RtlAcquireSRWLockExclusive((unsigned __int64)(v8 - 39), v10, v11, v12);
    v36 = 0;
    v14 = 1;
    if ( (int)NtSetInformationWorkerFactory(*(v8 - 41), 12LL, &v36) >= 0 && v36 )
    {
      v15 = 0;
      v16 = *((_DWORD *)v8 + 13) ^ (*((_DWORD *)v8 + 13) ^ (2 * v36)) & 0xFFEu;
      *((_DWORD *)v8 + 13) = v16;
      if ( (((unsigned int)v16 >> 11) & 0xFFE) < (v16 & 0xFFE) )
      {
        do
        {
          if ( v15 == 258 )
            break;
          v17 = RtlSleepConditionVariableSRW(v8 + 7, v8 - 39, &v37, 0LL);
          v16 = *((unsigned int *)v8 + 13);
          v15 = v17;
        }
        while ( (((unsigned int)v16 >> 11) & 0xFFE) < (*((_DWORD *)v8 + 13) & 0xFFEu) );
      }
      if ( (v16 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v8 + 13) = v16 & 0xFFFFF001;
        goto LABEL_30;
      }
      v18 = (unsigned __int64 *)(v8 + 8);
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * ((v16 >> 12) & 0x7FF));
      if ( !Heap )
      {
        while ( 1 )
        {
          v30 = *v18;
          if ( (unsigned __int64 *)*v18 == v18 )
            break;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 || (v32 = *(_QWORD **)(v30 + 8), *v32 != v30) )
LABEL_44:
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          NtClose(*(HANDLE *)(v30 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
        }
        *((_DWORD *)v8 + 13) &= 0xFF800001;
        goto LABEL_30;
      }
      v20 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8LL * ((*((_DWORD *)v8 + 13) >> 12) & 0x7FF));
      if ( v20 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          v22 = (_QWORD *)*v18;
          if ( (unsigned __int64 *)*v18 == v18 )
            break;
          *(_QWORD *)(Heap + 8 * v21) = v22[2];
          *(_QWORD *)(v20 + 8 * v21) = v22;
          v23 = *v22;
          if ( *(_QWORD **)(*v22 + 8LL) != v22 )
            goto LABEL_44;
          v24 = (_QWORD *)v22[1];
          if ( (_QWORD *)*v24 != v22 )
            goto LABEL_44;
          *v24 = v23;
          v21 = (unsigned int)(v21 + 1);
          *(_QWORD *)(v23 + 8) = v24;
        }
        *((_DWORD *)v8 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v8 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v8 - 2);
        v14 = 0;
        v25 = 0;
        do
        {
          v26 = v25 << 6;
          if ( (unsigned int)v26 >= (unsigned int)v21 )
            break;
          v27 = (int)v26 + 64 <= (unsigned int)v21 ? 64 : v21 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v27, Heap + 8 * v26, 0LL, 0LL, &v37) == 258 )
            break;
          ++v25;
        }
        while ( v25 <= (unsigned int)v21 >> 6 );
        if ( (_DWORD)v21 )
        {
          v28 = (unsigned __int64 *)v20;
          do
          {
            NtClose(*(HANDLE *)((char *)v28 + Heap - v20));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v28++);
            --v21;
          }
          while ( v21 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v20);
      }
      else
      {
        while ( 1 )
        {
          v33 = *v18;
          if ( (unsigned __int64 *)*v18 == v18 )
            break;
          v34 = *(_QWORD *)v33;
          if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
            goto LABEL_44;
          v35 = *(_QWORD **)(v33 + 8);
          if ( *v35 != v33 )
            goto LABEL_44;
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
          NtClose(*(HANDLE *)(v33 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v33);
        }
        *((_DWORD *)v8 + 13) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v14 )
      {
        v13 = v38;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v13);
LABEL_31:
      RtlReleaseSRWLockShared(v9);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
