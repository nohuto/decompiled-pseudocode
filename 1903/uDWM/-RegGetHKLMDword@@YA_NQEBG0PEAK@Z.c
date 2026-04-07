/*
 * XREFs of ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18004C5C4
 * Callers:
 *     ?ForceHighColor@@YAKXZ @ 0x18002EC90 (-ForceHighColor@@YAKXZ.c)
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004C2E0 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800B79A8 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x18004C63C (-RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z.c)
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
