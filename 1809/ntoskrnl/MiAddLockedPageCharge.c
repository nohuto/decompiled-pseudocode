/*
 * XREFs of MiAddLockedPageCharge @ 0x14002DFAC
 * Callers:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiMakeProtoAddressValid @ 0x1400958EC (MiMakeProtoAddressValid.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14011B8F0 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiMirrorPerformBrownWrites @ 0x140152494 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x1402AC0B0 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1402BAD20 (MiDbgMarkPfnModified.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x1402C7AFC (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1402CAB50 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  __int64 v3; // rcx
  unsigned int locked; // r9d
  char v5; // r10

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
