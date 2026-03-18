/*
 * XREFs of IopIsRelationInList @ 0x140874FFC
 * Callers:
 *     PnpProcessRelation @ 0x1407313CC (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140731790 (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
