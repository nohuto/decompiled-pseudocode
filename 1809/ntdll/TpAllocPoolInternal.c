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
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1800A17D0 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1800A1BD0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35F0 (NtSetInformationWorkerFactory.c)
 *     TppETWPoolCreate @ 0x180110D54 (TppETWPoolCreate.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r12
  SIZE_T StackCommit; // rsi
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  _DWORD *StartParameter; // rdi
  __int64 v9; // r8
  _QWORD *v10; // r10
  __int64 v11; // r9
  __int64 i; // r8
  _QWORD *v13; // rdx
  PVOID Heap; // rax
  PVOID v15; // rax
  unsigned int v16; // r14d
  int updated; // ebx
  ULONG v18; // r9d
  HANDLE *v19; // r15
  ULONG MaxThreadCount; // eax
  HANDLE *v21; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  void *v26; // r8
  void *v27; // r8
  int v28; // [rsp+50h] [rbp-68h]
  int v29; // [rsp+60h] [rbp-58h] BYREF
  PVOID v30; // [rsp+68h] [rbp-50h]
  PVOID BaseAddress; // [rsp+70h] [rbp-48h]
  __int64 v32; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+C8h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( v3->OptionalHeader.Magic == 523 )
  {
    StackReserve = v3->OptionalHeader.SizeOfStackReserve;
    StackCommit = v3->OptionalHeader.SizeOfStackCommit;
  }
  else
  {
    StackReserve = LODWORD(v3->OptionalHeader.SizeOfStackReserve);
    StackCommit = HIDWORD(v3->OptionalHeader.SizeOfStackReserve);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v6->MinimumStackCommit;
  StartParameter = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D0uLL);
  v30 = StartParameter;
  if ( StartParameter )
  {
    BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 72LL * (unsigned int)TppNumberNodes);
    if ( !BaseAddress )
    {
      updated = -1073741801;
      v28 = -1073741801;
      StartParameter = v30;
      goto LABEL_34;
    }
    v9 = 0LL;
    v10 = v30;
    v11 = (unsigned int)TppNumberNodes;
    while ( (unsigned int)v9 < 3 )
    {
      v10[v9 + 2] = (char *)BaseAddress + 24 * (unsigned int)(v9 * v11);
      v9 = (unsigned int)(v9 + 1);
    }
    for ( i = 0LL; (unsigned int)i < 3 * (int)v11; i = (unsigned int)(i + 1) )
    {
      v13 = (char *)BaseAddress + 24 * i;
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v11);
    StartParameter = v30;
    *((_QWORD *)v30 + 5) = Heap;
    if ( Heap )
    {
      v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 16LL * (unsigned int)TppNumberNodes);
      StartParameter = v30;
      *((_QWORD *)v30 + 6) = v15;
      if ( v15 )
      {
        v16 = MEMORY[0x7FFE03C0];
        StartParameter[106] = MEMORY[0x7FFE03C0];
        updated = TppPoolUpdateNodeRelation(StartParameter);
        v28 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        StartParameter[107] = -2;
        v32 = (unsigned __int16)v16;
        *((_QWORD *)StartParameter + 1) = (unsigned __int16)v16;
        *StartParameter = 1;
        v18 = v16 + 1;
        if ( v16 < 4 )
          v18 = 4;
        v19 = (HANDLE *)(StartParameter + 16);
        updated = NtCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v18);
        v28 = updated;
        if ( updated < 0 )
          goto LABEL_34;
        MaxThreadCount = 4 * MEMORY[0x7FFE03C0];
        if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x200 )
          MaxThreadCount = 512;
        v21 = (HANDLE *)(StartParameter + 14);
        updated = NtCreateWorkerFactory(
                    (PHANDLE)StartParameter + 7,
                    0xF00FFu,
                    0LL,
                    *v19,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    TppWorkerThread,
                    StartParameter,
                    MaxThreadCount,
                    StackReserve,
                    StackCommit);
        v28 = updated;
        if ( updated < 0 )
          goto LABEL_29;
        if ( WorkerFactoryInformation )
        {
          updated = NtSetInformationWorkerFactory(*v21, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
          v28 = updated;
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
          *((_WORD *)StartParameter + 189) = WorkerFactoryInformation;
        }
        *((_QWORD *)StartParameter + 9) = 0LL;
        *((_QWORD *)StartParameter + 46) = 0LL;
        *((_QWORD *)StartParameter + 55) = 0LL;
        *((_WORD *)StartParameter + 188) = 0;
        *((_QWORD *)StartParameter + 11) = StartParameter + 20;
        *((_QWORD *)StartParameter + 10) = StartParameter + 20;
        *((_QWORD *)StartParameter + 13) = StartParameter + 24;
        *((_QWORD *)StartParameter + 12) = StartParameter + 24;
        *((_QWORD *)StartParameter + 57) = StartParameter + 112;
        *((_QWORD *)StartParameter + 56) = StartParameter + 112;
        TppGetCurrentThreadNumaNode((__int64)StartParameter, &v29, 0LL);
        *((_QWORD *)StartParameter + 50) = retaddr;
        updated = TppInitializeTimerQueue((__int64)(StartParameter + 28), (__int64)StartParameter);
        v28 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v28 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock);
          v22 = StartParameter + 96;
          v23 = off_18015F6E8;
          if ( *off_18015F6E8 != (_UNKNOWN *)&TppPoolpList )
            __fastfail(3u);
          *v22 = &TppPoolpList;
          *((_QWORD *)StartParameter + 49) = v23;
          *v23 = v22;
          off_18015F6E8 = (_UNKNOWN **)(StartParameter + 96);
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        }
        goto LABEL_29;
      }
    }
  }
  updated = -1073741801;
  v28 = -1073741801;
LABEL_34:
  if ( updated >= 0 )
    goto LABEL_35;
  if ( StartParameter )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
      StartParameter = v30;
    }
    v26 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v26 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v26);
      StartParameter = v30;
    }
    v27 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v27 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v27);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
    StartParameter = 0LL;
    v30 = 0LL;
    updated = v28;
  }
  if ( updated >= 0 )
  {
LABEL_35:
    *a1 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v24 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v28;
      StartParameter = v30;
    }
    else
    {
      v24 = 2147353478LL;
    }
    if ( *(_BYTE *)v24 )
      TppETWPoolCreate(StartParameter);
  }
  return (unsigned int)updated;
}
