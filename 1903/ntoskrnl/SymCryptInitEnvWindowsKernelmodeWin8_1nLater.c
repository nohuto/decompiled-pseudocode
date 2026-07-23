/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401BA32C
 * Callers:
 *     SymCryptInit @ 0x14018CF30 (SymCryptInit.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x140181900 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1401BD684 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1401BD7F8 (SymCryptInitEnvCommon.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SymCryptFatal @ 0x1402A618C (SymCryptFatal.c)
 *     RtlGetVersion @ 0x1406D9B80 (RtlGetVersion.c)
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
