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

__int64 __fastcall sub_180062F34(__int64 *a1, char a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r13
  uint64_t v5; // r14
  struct _PEB *v6; // rax
  uint64_t MinimumStackCommit; // rcx
  __int64 Heap; // rdi
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned int i; // r8d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int *v15; // r15
  unsigned int v16; // esi
  int IoCompletion; // ebx
  __int64 v18; // r9
  _QWORD *v19; // r12
  int v20; // eax
  unsigned int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  __int64 v35; // [rsp+68h] [rbp-60h]
  int v36[16]; // [rsp+88h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  int v39; // [rsp+D8h] [rbp+10h] BYREF
  int v40; // [rsp+E0h] [rbp+18h]

  v2 = a1;
  v35 = 0LL;
  *a1 = 0LL;
  v39 = a2 & 1;
  v3 = RtlImageNtHeader((__int64)NtCurrentPeb()->ImageBaseAddress);
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
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_180166080 + 786432) | 8u, 472LL);
  v34 = Heap;
  if ( !Heap )
    goto LABEL_37;
  v40 = dword_180166080 + 786432;
  v35 = RtlAllocateHeap(
          (__int64)NtCurrentPeb()->ProcessHeap,
          dword_180166080 + 786432,
          72LL * (unsigned int)dword_180166074);
  if ( !v35 )
  {
    IoCompletion = -1073741801;
    v33 = -1073741801;
    goto LABEL_42;
  }
  v9 = 0;
  v10 = (unsigned int)dword_180166074;
  while ( v9 < 3 )
  {
    *(_QWORD *)(Heap + 8LL * v9 + 16) = v35 + 24LL * v9 * (unsigned int)v10;
    ++v9;
  }
  for ( i = 0; i < 3 * (int)v10; ++i )
  {
    v12 = (_QWORD *)(v35 + 24LL * i);
    v12[2] = 0LL;
    v12[1] = v12;
    *v12 = v12;
  }
  v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_180166080 + 786432) | 8u, 4 * v10);
  *(_QWORD *)(Heap + 40) = v13;
  if ( !v13
    || (v14 = RtlAllocateHeap(
                (__int64)NtCurrentPeb()->ProcessHeap,
                (dword_180166080 + 786432) | 8u,
                16LL * (unsigned int)dword_180166074),
        (*(_QWORD *)(Heap + 48) = v14) == 0LL) )
  {
LABEL_37:
    IoCompletion = -1073741801;
    v33 = -1073741801;
    goto LABEL_42;
  }
  v15 = (int *)(Heap + 440);
  v16 = *(_DWORD *)(Heap + 440);
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  *(_DWORD *)(Heap + 424) = v16;
  IoCompletion = sub_180063420(Heap);
  v33 = IoCompletion;
  if ( IoCompletion >= 0 )
  {
    *(_DWORD *)(Heap + 428) = -2;
    *(_QWORD *)(Heap + 8) = (unsigned __int16)v16;
    *(_DWORD *)Heap = 1;
    v18 = v16 + 1;
    if ( v16 < 4 )
      v18 = 4LL;
    v19 = (_QWORD *)(Heap + 64);
    IoCompletion = ZwCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v18);
    v33 = IoCompletion;
    if ( IoCompletion >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      v21 = 4 * v20;
      if ( v21 < 0x200 )
        v21 = 512;
      v22 = (_QWORD *)(Heap + 56);
      IoCompletion = ZwCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v19, -1LL, sub_180033CE0, Heap, v21, v4, v5);
      v33 = IoCompletion;
      if ( IoCompletion < 0 )
        goto LABEL_35;
      if ( v39 )
      {
        IoCompletion = ZwSetInformationWorkerFactory(*v22, 13LL, &v39);
        v33 = IoCompletion;
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
        *(_WORD *)(Heap + 378) = v39;
      }
      *(_QWORD *)(Heap + 72) = 0LL;
      *(_QWORD *)(Heap + 368) = 0LL;
      *(_QWORD *)(Heap + 448) = 0LL;
      *(_WORD *)(Heap + 376) = 0;
      *(_QWORD *)(Heap + 88) = Heap + 80;
      *(_QWORD *)(Heap + 80) = Heap + 80;
      *(_QWORD *)(Heap + 104) = Heap + 96;
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 464) = Heap + 456;
      *(_QWORD *)(Heap + 456) = Heap + 456;
      sub_180031620(Heap, v36, 0LL);
      *(_QWORD *)(Heap + 400) = retaddr;
      IoCompletion = sub_18002EB80(Heap + 112, Heap, v23);
      v33 = IoCompletion;
      if ( IoCompletion >= 0 )
      {
        IoCompletion = 0;
        v33 = 0;
        RtlAcquireSRWLockExclusive(&qword_180166460);
        v24 = (_QWORD *)(Heap + 384);
        v25 = off_18015F618;
        if ( *off_18015F618 != (_UNKNOWN *)&off_18015F610 )
          __fastfail(3u);
        *v24 = &off_18015F610;
        *(_QWORD *)(Heap + 392) = v25;
        *v25 = v24;
        off_18015F618 = (_UNKNOWN **)(Heap + 384);
        RtlReleaseSRWLockExclusive(&qword_180166460);
        RtlAcquireSRWLockShared(&qword_180166478, v26, v27, v28);
        if ( dword_18016658C )
        {
          IoCompletion = TpSetPoolThreadCpuSets(Heap, &unk_180163460);
          v33 = IoCompletion;
        }
        RtlReleaseSRWLockShared(&qword_180166478);
      }
      goto LABEL_35;
    }
  }
LABEL_36:
  v2 = a1;
LABEL_42:
  if ( IoCompletion >= 0 )
    goto LABEL_43;
  if ( Heap )
  {
    if ( v35 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v35);
    v31 = *(_QWORD *)(Heap + 40);
    if ( v31 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v31);
    v32 = *(_QWORD *)(Heap + 48);
    if ( v32 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, v32);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 786432, Heap);
    Heap = 0LL;
    v34 = 0LL;
    IoCompletion = v33;
  }
  if ( IoCompletion >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v29 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
      IoCompletion = v33;
      Heap = v34;
    }
    else
    {
      v29 = 2147353478LL;
    }
    if ( *(_BYTE *)v29 )
      sub_18010F414(Heap);
  }
  return (unsigned int)IoCompletion;
}
