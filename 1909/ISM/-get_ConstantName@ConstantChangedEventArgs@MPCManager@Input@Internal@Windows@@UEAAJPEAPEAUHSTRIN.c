/*
 * XREFs of ?get_ConstantName@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180122200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::get_ConstantName(
        HSTRING *this,
        HSTRING *a2)
{
  WindowsDuplicateString(this[9], a2);
  return 0LL;
}
