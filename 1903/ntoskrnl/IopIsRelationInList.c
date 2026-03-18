/*
 * XREFs of IopIsRelationInList @ 0x1408758FC
 * Callers:
 *     PnpProcessRelation @ 0x14072F16C (PnpProcessRelation.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x14072F530 (PipIsDeviceInDeviceObjectList.c)
 */

bool __fastcall IopIsRelationInList(unsigned int **a1, __int64 a2)
{
  return PipIsDeviceInDeviceObjectList(*a1, a2, 0LL);
}
