/*
 * XREFs of ?GetRuntimeClassName@MPCManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800DC0B0
 * Callers:
 *     ?GetRuntimeClassName@MPCManagerClient@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DBC10 (-GetRuntimeClassName@MPCManagerClient@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@MPCManagerClient@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DBC80 (-GetRuntimeClassName@MPCManagerClient@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MPCManagerClient::GetRuntimeClassName(MPCManagerClient *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.MPCManagerClient", 0x32u, a2);
}
