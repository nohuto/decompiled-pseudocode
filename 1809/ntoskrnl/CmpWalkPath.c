/*
 * XREFs of CmpWalkPath @ 0x14073D6B0
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407FDCE4 (CmpPreserveSystemHiveData.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1409AABC0 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x1409CE008 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x14073D6EC (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a3);
  return CmpWalkUnicodeStringPath(a1, a2, &DestinationString);
}
