/*
 * XREFs of MiGetPfnPriority @ 0x140082B60
 * Callers:
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiTrimThisWsle @ 0x140087EB0 (MiTrimThisWsle.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MiUpdatePrefetchPriority @ 0x1400B7100 (MiUpdatePrefetchPriority.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x140118A5C (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkStandbyPfn @ 0x140120514 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140132CD0 (MiUpdatePageAttributeStamp.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MmSetPfnListInfo @ 0x14013FD90 (MmSetPfnListInfo.c)
 *     MiStoreCheckCandidatePage @ 0x14014D494 (MiStoreCheckCandidatePage.c)
 *     MiUnlinkNumaStandbyPage @ 0x140152380 (MiUnlinkNumaStandbyPage.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MiResetAccessBitPteWorker @ 0x1402B3970 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x1402B42D0 (MiUpdateOldPteWorker.c)
 *     MiInsertNumaStandbyPage @ 0x1402C05E4 (MiInsertNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
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
