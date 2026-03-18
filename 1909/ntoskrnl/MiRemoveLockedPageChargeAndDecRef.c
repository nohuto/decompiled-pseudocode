/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiFinishMdlForMappedFileFault @ 0x140093AC0 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiReturnPfnReferenceCount @ 0x1400FF01C (MiReturnPfnReferenceCount.c)
 *     MiHandleCollidedFault @ 0x1401096A8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiLockProtoPage @ 0x14011E578 (MiLockProtoPage.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140135B68 (MiUnlockNestedProtoPoolPage.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMirrorPerformBrownWrites @ 0x1401601FC (MiMirrorPerformBrownWrites.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140199F80 (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x1402C4220 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x1402C4898 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x1402E3E90 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1402E4A0C (MiLockDownWorkingSet.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140054D80 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiIsPfnSystemCharged @ 0x1400CEEFC (MiIsPfnSystemCharged.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(ULONG_PTR a1)
{
  __int16 v1; // bx
  __int16 v3; // bx
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  int v8; // ebp
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // r11

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v3 = v1 - 1;
  *(_WORD *)(a1 + 32) = v3;
  if ( !v3 && MiIsPfnFileOnly(a1) )
    goto LABEL_26;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !v4 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
        return 0LL;
    }
    else if ( v3 != 2 || !v4 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      return 0LL;
    }
  }
  if ( (unsigned int)MiIsPfnSystemCharged(a1) )
  {
    *(_BYTE *)(a1 + 35) &= ~0x20u;
  }
  else
  {
    v8 = 0;
    if ( (v7 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || (unsigned int)MiIsPfnCommitNotCharged(v6)
      || !v3 && (v11 & 0x4000000000000000LL) != 0 )
    {
      v8 = 1;
    }
    v9 = (v7 >> 40) & 0x3FF;
    v10 = *(_QWORD *)(qword_140465E88 + 8 * v9);
    if ( v8 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140465E88 + 8 * v9), 1uLL);
    if ( (ULONG_PTR *)v10 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 8128), 1uLL);
  }
  if ( v3 )
    return 0LL;
LABEL_26:
  MiPfnReferenceCountIsZero(a1, (__int64)(a1 + 0x58000000000LL) / 48);
  return 1LL;
}
