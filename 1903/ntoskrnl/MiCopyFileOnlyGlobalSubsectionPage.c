/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiInitializeTransitionPfn @ 0x1400A3DA8 (MiInitializeTransitionPfn.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400A8124 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiTryLockLeafPage @ 0x1400DC7AC (MiTryLockLeafPage.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     MiHandleInPageError @ 0x140133420 (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x14013C26C (MiFlowThroughInsertNode.c)
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
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG_PTR v30; // [rsp+20h] [rbp-10h] BYREF
  __int64 v31; // [rsp+28h] [rbp-8h]
  int v32; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v33; // [rsp+78h] [rbp+48h]
  __int64 v34; // [rsp+80h] [rbp+50h] BYREF

  v33 = a2;
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
    if ( qword_140465B00 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140465B00;
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
  v31 = *a2;
  v15 = (volatile LONG *)(v31 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
  ++*(_QWORD *)(v31 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  v16 = v33[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v16) & 0xFFFFFFFFF000LL) != 0 )
  {
    v17 = MiTryLockProtoPoolPageAtDpc(v16, 0xFFFFFFFFF000LL, (__int64 *)&v30, (__int64)&v34);
  }
  else
  {
    v30 = 0LL;
    v17 = MiTryLockLeafPage((unsigned __int64 *)v16, 0xFFFFFFFFF000LL, &v34);
  }
  v18 = v17;
  if ( v17 < 0 )
    goto LABEL_30;
  v19 = v34;
  if ( (*(_BYTE *)(v34 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 )
      MiUnlockProtoPoolPage(v30, 2u);
    v19 = v34;
    v18 = -1073740023;
  }
  if ( v18 < 0 )
  {
LABEL_30:
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiHandleInPageError(v12);
    MiRemoveLockedPageChargeAndDecRef(v12, v27, v28, v29);
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
    v23 = v33;
    *(_DWORD *)(a1 + 280) = 4325432;
    *(_DWORD *)(a1 + 312) = 4096;
    *(_QWORD *)(a1 + 320) = v7;
    v24 = MiStartingOffset(v23, a3, *(_DWORD *)(v22 + 64));
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 248) = v12;
    v25 = a6;
    *(_QWORD *)(a1 + 96) = v24;
    *(_QWORD *)(a1 + 208) = v31;
    *(_QWORD *)(a1 + 240) = a3;
    *(_DWORD *)(a1 + 184) = 4096;
    MiObtainProtoReference(v25, 1);
    *(_QWORD *)(a1 + 160) = v25;
    MiCopyPage(v7, v20, 0LL, 68);
    if ( v14 != -1 )
      MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v14 - 0x58000000000LL));
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 )
      MiUnlockProtoPoolPage(v30, 2u);
    MiUnlockProtoPoolPage(v25, 2u);
    __incgsdword(0x2E98u);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 4096LL;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
}
