/*
 * XREFs of HvMarkCellDirty @ 0x14083A4F8
 * Callers:
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpAddSubKeyEx @ 0x1406324F4 (CmpAddSubKeyEx.c)
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DCE2C (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14072D780 (CmpCommitSetSecurityUoW.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D930 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140837924 (CmpSyncKeyValues.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1408391BC (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140839478 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083D8B8 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083DB14 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083DCC8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14083E254 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
