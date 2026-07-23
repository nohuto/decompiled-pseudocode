/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14002CB18
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x14002CA8C (MiReferenceControlAreaPfn.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     MiFlowThroughInsertNode @ 0x14010F660 (MiFlowThroughInsertNode.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r14
  __int64 v7; // rbp
  __int64 v9; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  int v18; // ecx
  char v19; // r14
  int v20; // r8d
  __int64 v21; // rdx
  char *v22; // rsi
  int v23; // r8d
  __int64 v24; // r10
  __int64 v25; // rcx
  __int16 result; // ax
  char v27; // al
  int v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp+10h]
  int v30; // [rsp+80h] [rbp+18h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v5 = *(__int64 **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = a3;
  v11 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v12 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v12, 0LL);
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_QWORD *)(v12 + 24) ^= ((*(_QWORD *)(v12 + 24) + v9) ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x58000000000LL + 8) | 0x8000000000000000uLL;
  v29 = v13;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v31 = *(_QWORD *)(a1 + 232);
  v14 = MI_READ_PTE_LOCK_FREE(v31);
  v15 = a5;
  *(_QWORD *)(a1 + 168) = v14;
  v16 = MiStartingOffset(v5, v13, v15);
  v17 = MiEndingOffsetWithLock(v5);
  v18 = *(_DWORD *)(a1 + 192);
  if ( (v18 & 0x20000) != 0 )
  {
    v18 &= ~0x20000u;
    v19 = 1;
    *(_DWORD *)(a1 + 192) = v18;
  }
  else
  {
    v19 = 0;
  }
  v20 = v18;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 && v16 + v7 > v17 )
  {
    LODWORD(v7) = (v17 - v16 + 511) & 0xFFFFFE00;
    v20 = v18 | 0x20000;
    *(_DWORD *)(a1 + 192) = v18 | 0x20000;
  }
  v21 = a2 & 1;
  v22 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v21 )
  {
    v27 = *v22;
    if ( *v22 == 1 || (v27 = *v22, *v22 == 2) )
    {
      if ( v22 && v27 != 2 )
        *(_DWORD *)(a1 + 192) = v20 | 8;
    }
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) = v23 | 0x80;
  *(_QWORD *)(a1 + 272) = v24;
  *(_WORD *)(a1 + 282) = v24;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = v24;
  *(_DWORD *)(a1 + 316) = v24;
  *(_DWORD *)(a1 + 312) = v7;
  v28 = v24;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v28);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    v13 = v29;
  }
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v12);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v31 - v13) >> 3) + 320) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v19 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 240) = v13;
  *(_QWORD *)(a1 + 248) = v25;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v11;
  return result;
}
