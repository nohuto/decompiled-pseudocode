/*
 * XREFs of CmpFindSubKeyByName @ 0x14073D0FC
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CCD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x1409CCF10 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x1409CCFB0 (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x1409CD05C (CmpSortDriverList.c)
 *     CmpGetSystemControlValues @ 0x1409CE008 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x1409CE6B4 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x1409F3DCC (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x1409F3EBC (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1409F3F78 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x14073D11C (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
