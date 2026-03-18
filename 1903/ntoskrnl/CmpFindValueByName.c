/*
 * XREFs of CmpFindValueByName @ 0x1406304A4
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A12108 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpSortDriverList @ 0x140A12368 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A12710 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A128D8 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A13088 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13344 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A1378C (CmpGetSystemControlValues.c)
 * Callees:
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
