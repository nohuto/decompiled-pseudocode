/*
 * XREFs of MiGetPfnPriority @ 0x1400BBB00
 * Callers:
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiTrimThisWsle @ 0x14005AEA0 (MiTrimThisWsle.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiReplaceNumaStandbyPage @ 0x1400C2998 (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x14010A580 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x14011E680 (MiQueryPfn.c)
 *     MiUnlinkStandbyPfn @ 0x1401216A0 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x14013305C (MiUpdatePageAttributeStamp.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiStoreCheckCandidatePage @ 0x14014AE2C (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401614D4 (MiUnlinkNumaStandbyPage.c)
 *     MiResetAccessBitPte @ 0x1401783E0 (MiResetAccessBitPte.c)
 *     MmSetPfnListInfo @ 0x14017870C (MmSetPfnListInfo.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C458C (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8940 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x1402C92E0 (MiUpdateOldPteWorker.c)
 *     MiInsertNumaStandbyPage @ 0x1402D9AA0 (MiInsertNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
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
