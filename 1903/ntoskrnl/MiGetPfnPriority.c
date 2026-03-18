/*
 * XREFs of MiGetPfnPriority @ 0x1400DBC80
 * Callers:
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiTrimThisWsle @ 0x14005AE00 (MiTrimThisWsle.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiReplaceNumaStandbyPage @ 0x14009CD18 (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1401025E0 (MiQueryPfn.c)
 *     MiUpdatePrefetchPriority @ 0x14010A9B0 (MiUpdatePrefetchPriority.c)
 *     MiUnlinkStandbyPfn @ 0x140120950 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x14013256C (MiUpdatePageAttributeStamp.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiStoreCheckCandidatePage @ 0x14014A78C (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x140161A84 (MiUnlinkNumaStandbyPage.c)
 *     MiResetAccessBitPte @ 0x140177CF0 (MiResetAccessBitPte.c)
 *     MmSetPfnListInfo @ 0x14017801C (MmSetPfnListInfo.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8BE0 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x1402C9580 (MiUpdateOldPteWorker.c)
 *     MiInsertNumaStandbyPage @ 0x1402D9D40 (MiInsertNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
