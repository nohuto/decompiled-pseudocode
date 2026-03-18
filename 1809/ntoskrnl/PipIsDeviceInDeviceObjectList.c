/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1406ECA84
 * Callers:
 *     PipVisitDeviceObjectListEntry @ 0x1406EC5D4 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x1406EC9A8 (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x1406ECA38 (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EDE38 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1406EE7EC (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x1406EF11C (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x14083AA88 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1406ECAA4 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
