/*
 * XREFs of CmpValueToData @ 0x14073D888
 * Callers:
 *     CmpFindControlSet @ 0x14073D2BC (CmpFindControlSet.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409AABC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CCD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpSortDriverList @ 0x1409CD05C (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x1409CD830 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1409CD9F8 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1409CE6B4 (CmpIsLoadType.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1405D20A0 (CmpGetValueData.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int *a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
