/*
 * XREFs of ?GetRuntimeClassName@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18011E3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::GetRuntimeClassName(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.ConstantChangedEventArgs", 0x3Au, a2);
}
