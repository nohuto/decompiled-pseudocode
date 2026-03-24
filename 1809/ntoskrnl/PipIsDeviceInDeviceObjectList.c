/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1406ECA64
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x1406EC5B4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x1406EC68C (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x1406EC988 (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x1406ECA18 (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EDE18 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1406EE7CC (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x1406EF0FC (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x14083AA68 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1406ECA84 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
