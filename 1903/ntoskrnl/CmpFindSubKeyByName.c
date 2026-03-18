/*
 * XREFs of CmpFindSubKeyByName @ 0x14076514C
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A12108 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x140A1221C (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A122BC (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140A12368 (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140A13088 (CmpIsLoadType.c)
 *     CmpGetSystemControlValues @ 0x140A1378C (CmpGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x140A3921C (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140A3930C (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A393D0 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1407122F0 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
