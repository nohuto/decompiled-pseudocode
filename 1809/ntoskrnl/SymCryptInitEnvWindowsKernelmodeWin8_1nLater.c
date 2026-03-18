/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF1E8
 * Callers:
 *     SymCryptInit @ 0x140180D74 (SymCryptInit.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x140177FA0 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1401B2454 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1401B25BC (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x14028F68C (SymCryptFatal.c)
 *     RtlGetVersion @ 0x1406B4750 (RtlGetVersion.c)
 */

__int64 SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  __int64 result; // rax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      SymCryptFatal(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      SymCryptFatal(1853059702LL);
    }
    SymCryptDetectCpuFeaturesByCpuid(1LL);
    if ( (RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL) & 4) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x10u;
    g_SymCryptCpuFeaturesNotPresent &= ~0x20u;
    return SymCryptInitEnvCommon();
  }
  return result;
}
