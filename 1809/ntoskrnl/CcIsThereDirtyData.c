/*
 * XREFs of CcIsThereDirtyData @ 0x14026A230
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x1401200F0 (CcForEachPartition.c)
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
