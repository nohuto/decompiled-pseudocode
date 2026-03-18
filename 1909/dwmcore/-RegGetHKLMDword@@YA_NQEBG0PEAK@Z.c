/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800B6400
 * Callers:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800B5A20 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z @ 0x1800E7C04 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180159D1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x1800B6478 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
 */

bool __fastcall RegGetHKLMDword(LPCWSTR lpSubKey, const unsigned __int16 *a2, unsigned int *a3)
{
  bool Dword; // bl
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  Dword = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20019u, &hKey) )
  {
    Dword = RegGetDword(hKey, a2, a3);
    RegCloseKey(hKey);
  }
  return Dword;
}
