/*
 * XREFs of MiIsPfnFileOnly @ 0x14009CA20
 * Callers:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiTradePage @ 0x14009C0F0 (MiTradePage.c)
 *     MiUnlockCodePage @ 0x14009C770 (MiUnlockCodePage.c)
 *     MiActivePageClaimCandidate @ 0x14009CA50 (MiActivePageClaimCandidate.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MiGetPagePrivilege @ 0x1400B2A70 (MiGetPagePrivilege.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A80 (MiMakeSystemCachePteValid.c)
 *     MiLockStealSystemVm @ 0x1400E9978 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x1400EDC14 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x14011812C (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x1401183F4 (MiCanPageMove.c)
 *     MiUnlinkStandbyPfn @ 0x1401204A4 (MiUnlinkStandbyPfn.c)
 *     MiMirrorGatherBrownPages @ 0x140152560 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1401831E4 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x1402ABEC0 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6388 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x1402BAB30 (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFE00 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0;
}
