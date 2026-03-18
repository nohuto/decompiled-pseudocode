/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140731790
 * Callers:
 *     IopSortRelationListForRemove @ 0x140730FFC (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407311B4 (PipVisitDeviceObjectListEntry.c)
 *     IopAddRelationToList @ 0x1407316B4 (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x140731744 (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140732204 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1407326E8 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x140874EFC (IopCheckIfMergeRequired.c)
 *     IopIsRelationInList @ 0x140874FFC (IopIsRelationInList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1407317B0 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
