/*
 * XREFs of CmpInitializeDelayDerefContext @ 0x1400440B4
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpDelayCloseWorker @ 0x14064E890 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14069B610 (CmpCleanUpKCBCacheTable.c)
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmpUnfreezeHive @ 0x14082AE40 (CmpUnfreezeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408334DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140833600 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeDelayDerefContext(_QWORD *a1)
{
  a1[1] = a1;
  *a1 = a1;
}
