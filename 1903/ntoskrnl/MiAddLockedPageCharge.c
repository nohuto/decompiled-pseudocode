/*
 * XREFs of MiAddLockedPageCharge @ 0x1400A7374
 * Callers:
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400A8124 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiHandleCollidedFault @ 0x140100C88 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiMakeProtoAddressValid @ 0x14010265C (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiMirrorPerformBrownWrites @ 0x14015FB5C (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x1402C5100 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC884 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1402D0D60 (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x1402E1B90 (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1402E4CAC (MiLockDownWorkingSet.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140054C70 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400A74D0 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  __int64 v3; // rcx
  unsigned int locked; // r9d
  unsigned int v5; // r10d

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(v3, v5);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
