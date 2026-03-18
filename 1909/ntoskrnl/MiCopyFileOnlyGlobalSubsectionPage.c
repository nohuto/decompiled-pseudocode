/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400956A8 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiInitializeTransitionPfn @ 0x140096BD8 (MiInitializeTransitionPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiTryLockLeafPage @ 0x1400BC62C (MiTryLockLeafPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     MiHandleInPageError @ 0x140133F10 (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x14013C88C (MiFlowThroughInsertNode.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  volatile LONG *v15; // rbx
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rcx
  ULONG_PTR v20; // rbx
  _QWORD *v21; // r15
  __int64 v22; // rax
  __int64 *v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  ULONG_PTR v27; // [rsp+20h] [rbp-10h] BYREF
  __int64 v28; // [rsp+28h] [rbp-8h]
  int v29; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v30; // [rsp+78h] [rbp+48h]
  __int64 v31; // [rsp+80h] [rbp+50h] BYREF

  v30 = a2;
  v7 = a5;
  v12 = 48 * a5 - 0x58000000000LL;
  LODWORD(a5) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a5);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v13 & 0x400) != 0 )
  {
    v14 = -1LL;
  }
  else
  {
    if ( qword_140465800 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140465800;
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(v7, (_QWORD *)a3, v14);
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 2;
  *(_WORD *)(v12 + 32) = 1;
  *(_BYTE *)(v12 + 34) |= 0x20u;
  *(_QWORD *)v12 = (a1 + 32) & -(__int64)(a1 != 0);
  *(_BYTE *)(v12 + 35) ^= (*(_BYTE *)(v12 + 35) ^ (*(_DWORD *)(a1 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v28 = *a2;
  v15 = (volatile LONG *)(v28 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
  ++*(_QWORD *)(v28 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  v16 = v30[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v16) & 0xFFFFFFFFF000LL) != 0 )
  {
    v17 = MiTryLockProtoPoolPageAtDpc(v16, 0xFFFFFFFFF000LL, (__int64 *)&v27, (__int64)&v31);
  }
  else
  {
    v27 = 0LL;
    v17 = MiTryLockLeafPage((unsigned __int64 *)v16, 0xFFFFFFFFF000LL, &v31);
  }
  v18 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v19 = v31;
  if ( (*(_BYTE *)(v31 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v27 )
      MiUnlockProtoPoolPage(v27, 2u);
    v19 = v31;
    v18 = -1073740023;
  }
  if ( v18 < 0 )
  {
LABEL_30:
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return (unsigned int)v18;
  }
  else
  {
    v20 = (v19 + 0x58000000000LL) / 48;
    if ( (a4 & 1) != 0 )
    {
      v21 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *(_BYTE *)v21 == 1 )
      {
        MiAdvanceFaultList(v21);
        *(_DWORD *)(a1 + 192) |= 8u;
      }
    }
    *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(a3);
    *(_QWORD *)(a1 + 232) = a3;
    if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
      *(_DWORD *)(a1 + 192) |= 0x80u;
    v22 = a7;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_QWORD *)(a1 + 304) = 0LL;
    *(_DWORD *)(a1 + 316) = 0;
    v23 = v30;
    *(_DWORD *)(a1 + 280) = 4325432;
    *(_DWORD *)(a1 + 312) = 4096;
    *(_QWORD *)(a1 + 320) = v7;
    v24 = MiStartingOffset(v23, a3, *(_DWORD *)(v22 + 64));
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 248) = v12;
    v25 = a6;
    *(_QWORD *)(a1 + 96) = v24;
    *(_QWORD *)(a1 + 208) = v28;
    *(_QWORD *)(a1 + 240) = a3;
    *(_DWORD *)(a1 + 184) = 4096;
    MiObtainProtoReference(v25, 1);
    *(_QWORD *)(a1 + 160) = v25;
    MiCopyPage(v7, v20, 0LL, 68);
    if ( v14 != -1 )
      MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x58000000000LL));
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v27 )
      MiUnlockProtoPoolPage(v27, 2u);
    MiUnlockProtoPoolPage(v25, 2u);
    __incgsdword(0x2E98u);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 4096LL;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
}
