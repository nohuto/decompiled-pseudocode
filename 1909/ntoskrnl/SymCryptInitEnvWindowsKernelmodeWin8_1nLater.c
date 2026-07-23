/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BAA4C
 * Callers:
 *     SymCryptInit @ 0x14018D7B0 (SymCryptInit.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x140181FF0 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1401BDDA4 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1401BDF18 (SymCryptInitEnvCommon.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SymCryptFatal @ 0x1402A5EEC (SymCryptFatal.c)
 *     RtlGetVersion @ 0x1406D9C70 (RtlGetVersion.c)
 */

__int64 SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  __int64 result; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
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
