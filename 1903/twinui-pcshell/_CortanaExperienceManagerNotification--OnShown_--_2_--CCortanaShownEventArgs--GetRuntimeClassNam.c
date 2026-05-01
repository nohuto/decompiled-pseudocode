/*
 * XREFs of _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::GetRuntimeClassName @ 0x18017E350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaShownEventArgs", 0x37u, a2);
}
