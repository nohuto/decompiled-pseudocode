/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800856A0
 * Callers:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x180084FD8 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801E8CEC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x180085718 (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
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
