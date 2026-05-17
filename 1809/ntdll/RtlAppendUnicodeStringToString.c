/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180029B40
 * Callers:
 *     LdrpFindKnownDll @ 0x1800298B4 (LdrpFindKnownDll.c)
 *     RtlpWin32NtNameToNtPathName @ 0x1800299D4 (RtlpWin32NtNameToNtPathName.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180035530 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18004AB60 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085AC4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x1800869A0 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DB828 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F3A14 (RtlpHpOverrideGCInterval.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
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
