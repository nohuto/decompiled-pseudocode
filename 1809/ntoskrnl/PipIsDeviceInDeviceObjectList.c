/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1406EDD04
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x1406ED854 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x1406EDC28 (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x1406EDCB8 (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EF0B8 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1406EFA6C (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x1406F039C (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x14083BCC8 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1406EDD24 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
