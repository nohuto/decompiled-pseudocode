/*
 * XREFs of CmpFindSubKeyByName @ 0x140769C4C
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A128A0 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x140A129B4 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A12A54 (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140A12B00 (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140A13820 (CmpIsLoadType.c)
 *     CmpGetSystemControlValues @ 0x140A13F24 (CmpGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x140A38FEC (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A390DC (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A391A0 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1407140D0 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
