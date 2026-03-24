/*
 * XREFs of MiGetPfnPriority @ 0x140082B70
 * Callers:
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiUpdatePfnPriority @ 0x140082AB8 (MiUpdatePfnPriority.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiTrimThisWsle @ 0x140087EC0 (MiTrimThisWsle.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x1400B2C70 (MiWsleFree.c)
 *     MiUpdatePrefetchPriority @ 0x1400B71C0 (MiUpdatePrefetchPriority.c)
 *     MiReplaceTransitionPage @ 0x14011846C (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1401189EC (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkStandbyPfn @ 0x1401204A4 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140132C00 (MiUpdatePageAttributeStamp.c)
 *     MiConvertStandbyToProto @ 0x14013EA50 (MiConvertStandbyToProto.c)
 *     MmSetPfnListInfo @ 0x14013FC90 (MmSetPfnListInfo.c)
 *     MiStoreCheckCandidatePage @ 0x14014D394 (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x140152280 (MiUnlinkNumaStandbyPage.c)
 *     MiResetAccessBitPte @ 0x14016E830 (MiResetAccessBitPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB6BC (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x1402B3780 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x1402B40E0 (MiUpdateOldPteWorker.c)
 *     MiInsertNumaStandbyPage @ 0x1402C03F4 (MiInsertNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402C99D8 (MiDuplicateCloneLeaf.c)
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
