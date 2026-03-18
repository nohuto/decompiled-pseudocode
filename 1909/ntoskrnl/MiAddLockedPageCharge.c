/*
 * XREFs of MiAddLockedPageCharge @ 0x1400CBA88
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400956A8 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiHandleCollidedFault @ 0x1401096A8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiMakeProtoAddressValid @ 0x14011E6FC (MiMakeProtoAddressValid.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiMirrorPerformBrownWrites @ 0x1401601FC (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x1402C4E60 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x1402CCD08 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1402D0AC0 (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x1402E18F0 (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1402E4A0C (MiLockDownWorkingSet.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140054D10 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // r10

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    LODWORD(v5) = MiChargeForLockedPage(v3, v6, v4, v5);
    if ( !(_DWORD)v5 )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return (unsigned int)v5;
}
