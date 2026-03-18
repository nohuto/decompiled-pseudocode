/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x1400A6290
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MiReferenceControlAreaPfn @ 0x1400A6610 (MiReferenceControlAreaPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiEndingOffsetWithLock @ 0x1400D8A40 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiFlowThroughInsertNode @ 0x14013C26C (MiFlowThroughInsertNode.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v7; // r12
  __int64 v9; // r15
  __int64 v11; // rbp
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r14
  char v21; // al
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int16 result; // ax
  char v29; // dl
  int v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF
  char v32; // [rsp+70h] [rbp+18h]

  v5 = *(_QWORD **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = (unsigned int)a3;
  v11 = *v5;
  MiReferenceControlAreaPfn(*v5, v5, a3);
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
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v14 = *(_QWORD *)(a1 + 232);
  v15 = MI_READ_PTE_LOCK_FREE(v14);
  v16 = a5;
  *(_QWORD *)(a1 + 168) = v15;
  v31 = MiStartingOffset(v5, v13, v16);
  v17 = MiEndingOffsetWithLock(v5);
  v18 = *(_DWORD *)(a1 + 192);
  if ( (v18 & 0x20000) != 0 )
  {
    v18 &= ~0x20000u;
    v32 = 1;
    *(_DWORD *)(a1 + 192) = v18;
  }
  else
  {
    v32 = 0;
  }
  v19 = v18;
  v20 = v31;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 && v31 + v7 > v17 )
  {
    LODWORD(v7) = (v17 - v31 + 511) & 0xFFFFFE00;
    v19 = v18 | 0x20000;
    *(_DWORD *)(a1 + 192) = v18 | 0x20000;
  }
  v21 = a2;
  v22 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  v23 = v21 & 1;
  if ( v23 && (v29 = *v22, *v22 == 1) || v23 && (v29 = *v22, *v22 == 2) )
  {
    if ( v22 && v29 != 2 )
      *(_DWORD *)(a1 + 192) = v19 | 8;
  }
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
  {
    LODWORD(v25) = v25 | 0x80;
    *(_DWORD *)(a1 + 192) = v25;
  }
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 282) = 0;
  *(_WORD *)(a1 + 280) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = v7;
  LODWORD(v31) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v12, v24, v25, v26);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v14 - v13) >> 3) + 320) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v32 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v20;
  *(_QWORD *)(a1 + 240) = v13;
  *(_QWORD *)(a1 + 248) = v27;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = v11;
  return result;
}
