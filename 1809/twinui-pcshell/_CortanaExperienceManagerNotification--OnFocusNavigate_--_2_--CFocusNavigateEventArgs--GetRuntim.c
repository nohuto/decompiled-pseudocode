/*
 * XREFs of _CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::GetRuntimeClassName @ 0x1801523A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.FocusNavigateEventArgs", 0x38u, a2);
}
