/*
 * XREFs of TpAllocPoolInternal @ 0x180030848
 * Callers:
 *     TpAllocPool @ 0x180031250 (TpAllocPool.c)
 *     LdrpEnableParallelLoading @ 0x180031760 (LdrpEnableParallelLoading.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TppInitializeTimerQueue @ 0x1800301C4 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x180030CB0 (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A17B0 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A1BB0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 *     TppETWPoolCreate @ 0x180110D54 (TppETWPoolCreate.c)
 */

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  struct _PEB *v6; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 Heap; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 i; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r14d
  int updated; // ebx
  __int64 v18; // r9
  HANDLE *v19; // r15
  int v20; // eax
  HANDLE *v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-68h]
  int v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int v37; // [rsp+C8h] [rbp+10h] BYREF

  v34 = 0LL;
  *a1 = 0LL;
  v37 = a2 & 1;
  v3 = RtlImageNtHeader((unsigned __int64)NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v3 + 24) == 523 )
  {
    v4 = *(_QWORD *)(v3 + 96);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 96);
    v5 = *(unsigned int *)(v3 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 464LL);
  v33 = Heap;
  if ( Heap )
  {
    v34 = RtlAllocateHeap(
            (__int64)NtCurrentPeb()->ProcessHeap,
            TppHeapTag + 786432,
            72LL * (unsigned int)TppNumberNodes);
    if ( !v34 )
    {
      updated = -1073741801;
      v31 = -1073741801;
      Heap = v33;
      goto LABEL_34;
    }
    v9 = 0LL;
    v10 = v33;
    v11 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v9 < 3 )
    {
      *(_QWORD *)(v10 + 8 * v9 + 16) = v34 + 24LL * (unsigned int)(v9 * v11);
      v9 = (unsigned int)(v9 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v11; i = (unsigned int)(i + 1) )
    {
      v13 = (_QWORD *)(v34 + 24 * i);
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
    }
    v14 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v11);
    Heap = v33;
    *(_QWORD *)(v33 + 40) = v14;
    if ( v14 )
    {
      v15 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              16LL * (unsigned int)TppNumberNodes);
      Heap = v33;
      *(_QWORD *)(v33 + 48) = v15;
      if ( v15 )
      {
        v16 = MEMORY[0x7FFE03C0];
        *(_DWORD *)(Heap + 424) = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(Heap);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        *(_DWORD *)(Heap + 428) = -2;
        v35 = (unsigned __int16)v16;
        *(_QWORD *)(Heap + 8) = (unsigned __int16)v16;
        *(_DWORD *)Heap = 1;
        v18 = v16 + 1;
        if ( v16 < 4 )
          v18 = 4LL;
        v19 = (HANDLE *)(Heap + 64);
        updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v18);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        v20 = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          v20 = 512;
        v21 = (HANDLE *)(Heap + 56);
        updated = NtCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v19, -1LL, TppWorkerThread, Heap, v20, v4, v5);
        v31 = updated;
        if ( updated < 0 )
          goto LABEL_29;
        if ( v37 )
        {
          updated = NtSetInformationWorkerFactory(*v21, 13LL, &v37);
          v31 = updated;
          if ( updated < 0 )
          {
LABEL_29:
            if ( updated < 0 )
            {
              NtClose(*v19);
              if ( *v21 )
              {
                NtClose(*v21);
                *v21 = 0LL;
              }
            }
            goto LABEL_34;
          }
          *(_WORD *)(Heap + 378) = v37;
        }
        *(_QWORD *)(Heap + 72) = 0LL;
        *(_QWORD *)(Heap + 368) = 0LL;
        *(_QWORD *)(Heap + 440) = 0LL;
        *(_WORD *)(Heap + 376) = 0;
        *(_QWORD *)(Heap + 88) = Heap + 80;
        *(_QWORD *)(Heap + 80) = Heap + 80;
        *(_QWORD *)(Heap + 104) = Heap + 96;
        *(_QWORD *)(Heap + 96) = Heap + 96;
        *(_QWORD *)(Heap + 456) = Heap + 448;
        *(_QWORD *)(Heap + 448) = Heap + 448;
        TppGetCurrentThreadNumaNode(Heap, &v32, 0LL);
        *(_QWORD *)(Heap + 400) = retaddr;
        updated = TppInitializeTimerQueue(Heap + 112, Heap);
        v31 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v31 = 0;
          RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v22, v23, v24);
          v25 = (_QWORD *)(Heap + 384);
          v26 = off_18015F6E8;
          if ( *off_18015F6E8 != (_UNKNOWN *)&TppPoolpList )
            __fastfail(3u);
          *v25 = &TppPoolpList;
          *(_QWORD *)(Heap + 392) = v26;
          *v26 = v25;
          off_18015F6E8 = (_UNKNOWN **)(Heap + 384);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_29;
      }
    }
  }
  updated = -1073741801;
  v31 = -1073741801;
LABEL_34:
  if ( updated >= 0 )
    goto LABEL_35;
  if ( Heap )
  {
    if ( v34 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v34);
      Heap = v33;
    }
    v29 = *(_QWORD *)(Heap + 40);
    if ( v29 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
      Heap = v33;
    }
    v30 = *(_QWORD *)(Heap + 48);
    if ( v30 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v33);
    Heap = 0LL;
    v33 = 0LL;
    updated = v31;
  }
  if ( updated >= 0 )
  {
LABEL_35:
    *a1 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v27 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v31;
      Heap = v33;
    }
    else
    {
      v27 = 2147353478LL;
    }
    if ( *(_BYTE *)v27 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
