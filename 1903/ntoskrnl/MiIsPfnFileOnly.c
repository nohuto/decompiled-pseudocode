/*
 * XREFs of MiIsPfnFileOnly @ 0x1400D9FB0
 * Callers:
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiFillSystemPtes @ 0x14002FC70 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiTradeTransitionPage @ 0x14009D6C8 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x14009D990 (MiCanPageMove.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiUnlockCodePage @ 0x1400D9D20 (MiUnlockCodePage.c)
 *     MiActivePageClaimCandidate @ 0x1400DAA40 (MiActivePageClaimCandidate.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiUnlinkStandbyPfn @ 0x140120950 (MiUnlinkStandbyPfn.c)
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 *     MiMirrorGatherBrownPages @ 0x1401600F4 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x14018C8D8 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x1402C5100 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC614 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x1402D0D60 (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9728 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0;
}
