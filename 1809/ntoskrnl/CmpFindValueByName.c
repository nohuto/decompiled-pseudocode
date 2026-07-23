/*
 * XREFs of CmpFindValueByName @ 0x14073EA48
 * Callers:
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409ABBC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CDD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpSortDriverList @ 0x1409CE05C (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CE3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x1409CE830 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1409CE9F8 (CmpAddDriverToList.c)
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x1409CF6B4 (CmpIsLoadType.c)
 * Callees:
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
