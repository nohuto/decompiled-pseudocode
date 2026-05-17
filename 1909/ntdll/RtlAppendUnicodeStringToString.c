/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180026140
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BCF8 (RtlpGetTokenNamedObjectPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180025FD8 (RtlpWin32NtNameToNtPathName.c)
 *     LdrpFindKnownDll @ 0x18002934C (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18005A44C (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081390 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D9738 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0DB8 (RtlpHpOverrideGCInterval.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180115E78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // si
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *a2;
  if ( !*a2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, *((const void **)a2 + 1), v2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
