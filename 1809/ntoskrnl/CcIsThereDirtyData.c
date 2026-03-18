/*
 * XREFs of CcIsThereDirtyData @ 0x140269F40
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x140120060 (CcForEachPartition.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  PVPB v2; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN v3; // [rsp+28h] [rbp-10h]

  v2 = Vpb;
  v3 = 0;
  CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcIsThereDirtyDataHelper, (__int64)&v2, 1);
  return v3;
}
