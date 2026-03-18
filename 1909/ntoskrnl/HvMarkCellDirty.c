/*
 * XREFs of HvMarkCellDirty @ 0x140839B58
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpSetValueKeyExisting @ 0x140633848 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpCheckKey @ 0x140664430 (CmpCheckKey.c)
 *     CmpAddSubKeyEx @ 0x1406C4D40 (CmpAddSubKeyEx.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DDAAC (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E3A58 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14072F650 (CmpCommitSetSecurityUoW.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140836F84 (CmpSyncKeyValues.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14083881C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140838AD8 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C01C (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083CF18 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083D174 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083D328 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14083D8B4 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
