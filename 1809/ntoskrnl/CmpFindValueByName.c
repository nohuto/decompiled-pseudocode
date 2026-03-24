/*
 * XREFs of CmpFindValueByName @ 0x14073D858
 * Callers:
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409AABC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CCD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpSortDriverList @ 0x1409CD05C (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x1409CD830 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1409CD9F8 (CmpAddDriverToList.c)
 *     CmpGetSystemControlValues @ 0x1409CE008 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x1409CE6B4 (CmpIsLoadType.c)
 * Callees:
 *     CmpFindNameInList @ 0x1405D062C (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
