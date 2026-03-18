/*
 * XREFs of MiIsPfnFileOnly @ 0x1400B9E30
 * Callers:
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiUnlockCodePage @ 0x1400B9BA0 (MiUnlockCodePage.c)
 *     MiActivePageClaimCandidate @ 0x1400BA8C0 (MiActivePageClaimCandidate.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x1400C359C (MiCanPageMove.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiUnlinkStandbyPfn @ 0x1401216A0 (MiUnlinkStandbyPfn.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 *     MiMirrorGatherBrownPages @ 0x140169CC8 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x14018D158 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x1402C4E60 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC374 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x1402D0AC0 (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9488 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0;
}
