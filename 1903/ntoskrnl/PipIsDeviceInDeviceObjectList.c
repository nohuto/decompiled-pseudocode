/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14072F530
 * Callers:
 *     IopSortRelationListForRemove @ 0x14072ED9C (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x14072EF54 (PipVisitDeviceObjectListEntry.c)
 *     IopAddRelationToList @ 0x14072F454 (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x14072F4E4 (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14072FFA4 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140730488 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408757FC (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x1408758FC (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14072F550 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
