/*
 * XREFs of CmpFindValueByName @ 0x140634324
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A128A0 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpSortDriverList @ 0x140A12B00 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A12EA8 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A13070 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A13820 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13ADC (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A13F24 (CmpGetSystemControlValues.c)
 * Callees:
 *     CmpFindNameInList @ 0x140634354 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
