/*
 * XREFs of ?Startup@@YAJXZ @ 0x1800A93AC
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9258 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800A949C (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x180159FC8 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 Startup(void)
{
  bool v1; // al
  unsigned int v2; // ecx
  bool v3; // al
  unsigned int v4; // ecx
  unsigned int v5; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  _SYSTEM_INFO SystemInfo; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v9; // [rsp+18Ah] [rbp+8Ah]

  GetSystemInfo(&SystemInfo);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
    OSInfo::ProductType = v9;
  QueryPerformanceFrequency(&g_qpcFrequency);
  hKey = 0LL;
  g_qpcFrequencyPerMillisecond.QuadPart = g_qpcFrequency.QuadPart / 1000;
  CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, &hKey) )
  {
    v5 = 0;
    RegReadDWORD(hKey, L"UseD3DDebugLayer", &v5);
    v5 = 0;
    v1 = RegReadDWORD(hKey, L"Force10Level9", &v5);
    v2 = CCommonRegistryData::m_fForce10Level9;
    if ( v1 )
      v2 = v5;
    v5 = 0;
    CCommonRegistryData::m_fForce10Level9 = v2;
    v3 = RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v5);
    v4 = CCommonRegistryData::m_fForce10OnWDDM1_0;
    if ( v3 )
      v4 = v5;
    CCommonRegistryData::m_fForce10OnWDDM1_0 = v4;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
