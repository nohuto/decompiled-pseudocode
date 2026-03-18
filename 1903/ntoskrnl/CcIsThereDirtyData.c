/*
 * XREFs of CcIsThereDirtyData @ 0x14027DA80
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x1400F96E0 (CcForEachPartition.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  PVPB v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  v2 = Vpb;
  v3 = 0LL;
  CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcIsThereDirtyDataHelper, (__int64)&v2, 1);
  return v3;
}
