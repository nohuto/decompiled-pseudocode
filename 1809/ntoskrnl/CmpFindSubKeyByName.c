/*
 * XREFs of CmpFindSubKeyByName @ 0x14073E2CC
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CDD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x1409CDF10 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x1409CDFB0 (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x1409CE05C (CmpSortDriverList.c)
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x1409CF6B4 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x1409F4DD4 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x1409F4EC4 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1409F4F80 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
