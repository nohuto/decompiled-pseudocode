/*
 * XREFs of ?GetRuntimeClassName@MPCConstantManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18011E470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall MPCConstantManagerClient::GetRuntimeClassName(MPCConstantManagerClient *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.MPCConstantManagerClient", 0x3Au, a2);
}
