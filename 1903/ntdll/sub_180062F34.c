/*
 * XREFs of sub_180062F34 @ 0x180062F34
 * Callers:
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 *     TpAllocPool @ 0x180062EF0 (TpAllocPool.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18002EB80 @ 0x18002EB80 (sub_18002EB80.c)
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180063420 @ 0x180063420 (sub_180063420.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateIoCompletion @ 0x18009DBD0 (ZwCreateIoCompletion.c)
 *     ZwCreateWorkerFactory @ 0x18009DFD0 (ZwCreateWorkerFactory.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EA70 (TpSetPoolThreadCpuSets.c)
 *     sub_18010F414 @ 0x18010F414 (sub_18010F414.c)
 */

__int64 __fastcall sub_180062F34(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r13
  SIZE_T StackCommit; // r14
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  char *StartParameter; // rdi
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned int i; // r8d
  char *v12; // rdx
  PVOID Heap; // rax
  PVOID v14; // rax
  int *v15; // r15
  unsigned int v16; // esi
  int IoCompletion; // ebx
  ULONG v18; // r9d
  HANDLE *v19; // r12
  int v20; // eax
  ULONG MaxThreadCount; // eax
  HANDLE *v22; // rsi
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  void *v28; // r8
  void *v29; // r8
  int v30; // [rsp+50h] [rbp-78h]
  char *v31; // [rsp+58h] [rbp-70h]
  char *BaseAddress; // [rsp+68h] [rbp-60h]
  int v33[16]; // [rsp+88h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+D8h] [rbp+10h] BYREF
  ULONG Flags; // [rsp+E0h] [rbp+18h]

  v2 = a1;
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
  StartParameter = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 786432) | 8, 0x1D8uLL);
  v31 = StartParameter;
  if ( !StartParameter )
    goto LABEL_37;
  Flags = dword_180166080 + 786432;
  BaseAddress = (char *)RtlAllocateHeap(
                          NtCurrentPeb()->ProcessHeap,
                          dword_180166080 + 786432,
                          72LL * (unsigned int)dword_180166074);
  if ( !BaseAddress )
  {
    IoCompletion = -1073741801;
    v30 = -1073741801;
    goto LABEL_42;
  }
  v9 = 0;
  v10 = (unsigned int)dword_180166074;
  while ( v9 < 3 )
  {
    *(_QWORD *)&StartParameter[8 * v9 + 16] = &BaseAddress[24 * v9 * (unsigned int)v10];
    ++v9;
  }
  for ( i = 0; i < 3 * (int)v10; ++i )
  {
    v12 = &BaseAddress[24 * i];
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 1) = v12;
    *(_QWORD *)v12 = v12;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 786432) | 8, 4 * v10);
  *((_QWORD *)StartParameter + 5) = Heap;
  if ( !Heap
    || (v14 = RtlAllocateHeap(
                NtCurrentPeb()->ProcessHeap,
                (dword_180166080 + 786432) | 8,
                16LL * (unsigned int)dword_180166074),
        (*((_QWORD *)StartParameter + 6) = v14) == 0LL) )
  {
LABEL_37:
    IoCompletion = -1073741801;
    v30 = -1073741801;
    goto LABEL_42;
  }
  v15 = (int *)(StartParameter + 440);
  v16 = *((_DWORD *)StartParameter + 110);
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  *((_DWORD *)StartParameter + 106) = v16;
  IoCompletion = sub_180063420(StartParameter);
  v30 = IoCompletion;
  if ( IoCompletion >= 0 )
  {
    *((_DWORD *)StartParameter + 107) = -2;
    *((_QWORD *)StartParameter + 1) = (unsigned __int16)v16;
    *(_DWORD *)StartParameter = 1;
    v18 = v16 + 1;
    if ( v16 < 4 )
      v18 = 4;
    v19 = (HANDLE *)(StartParameter + 64);
    IoCompletion = ZwCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v18);
    v30 = IoCompletion;
    if ( IoCompletion >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      MaxThreadCount = 4 * v20;
      if ( MaxThreadCount < 0x200 )
        MaxThreadCount = 512;
      v22 = (HANDLE *)(StartParameter + 56);
      IoCompletion = ZwCreateWorkerFactory(
                       (PHANDLE)StartParameter + 7,
                       0xF00FFu,
                       0LL,
                       *v19,
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       sub_180033CE0,
                       StartParameter,
                       MaxThreadCount,
                       StackReserve,
                       StackCommit);
      v30 = IoCompletion;
      if ( IoCompletion < 0 )
        goto LABEL_35;
      if ( WorkerFactoryInformation )
      {
        IoCompletion = ZwSetInformationWorkerFactory(*v22, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
        v30 = IoCompletion;
        if ( IoCompletion < 0 )
        {
LABEL_35:
          if ( IoCompletion < 0 )
          {
            ZwClose(*v19);
            if ( *v22 )
            {
              ZwClose(*v22);
              *v22 = 0LL;
            }
          }
          goto LABEL_36;
        }
        *((_WORD *)StartParameter + 189) = WorkerFactoryInformation;
      }
      *((_QWORD *)StartParameter + 9) = 0LL;
      *((_QWORD *)StartParameter + 46) = 0LL;
      *((_QWORD *)StartParameter + 56) = 0LL;
      *((_WORD *)StartParameter + 188) = 0;
      *((_QWORD *)StartParameter + 11) = StartParameter + 80;
      *((_QWORD *)StartParameter + 10) = StartParameter + 80;
      *((_QWORD *)StartParameter + 13) = StartParameter + 96;
      *((_QWORD *)StartParameter + 12) = StartParameter + 96;
      *((_QWORD *)StartParameter + 58) = StartParameter + 456;
      *((_QWORD *)StartParameter + 57) = StartParameter + 456;
      sub_180031620((__int64)StartParameter, v33, 0LL);
      *((_QWORD *)StartParameter + 50) = retaddr;
      IoCompletion = sub_18002EB80((__int64)(StartParameter + 112), (__int64)StartParameter, v23);
      v30 = IoCompletion;
      if ( IoCompletion >= 0 )
      {
        IoCompletion = 0;
        v30 = 0;
        RtlAcquireSRWLockExclusive(&stru_180166460);
        v24 = StartParameter + 384;
        v25 = off_18015F618;
        if ( *off_18015F618 != (_UNKNOWN *)&off_18015F610 )
          __fastfail(3u);
        *v24 = &off_18015F610;
        *((_QWORD *)StartParameter + 49) = v25;
        *v25 = v24;
        off_18015F618 = (_UNKNOWN **)(StartParameter + 384);
        RtlReleaseSRWLockExclusive(&stru_180166460);
        RtlAcquireSRWLockShared(&stru_180166478);
        if ( dword_18016658C )
        {
          IoCompletion = TpSetPoolThreadCpuSets(StartParameter, &unk_180163460);
          v30 = IoCompletion;
        }
        RtlReleaseSRWLockShared(&stru_180166478);
      }
      goto LABEL_35;
    }
  }
LABEL_36:
  v2 = a1;
LABEL_42:
  if ( IoCompletion >= 0 )
    goto LABEL_43;
  if ( StartParameter )
  {
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, BaseAddress);
    v28 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v28 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v28);
    v29 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v29 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v29);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, StartParameter);
    StartParameter = 0LL;
    v31 = 0LL;
    IoCompletion = v30;
  }
  if ( IoCompletion >= 0 )
  {
LABEL_43:
    *v2 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v26 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      IoCompletion = v30;
      StartParameter = v31;
    }
    else
    {
      v26 = 2147353478LL;
    }
    if ( *(_BYTE *)v26 )
      sub_18010F414(StartParameter);
  }
  return (unsigned int)IoCompletion;
}
