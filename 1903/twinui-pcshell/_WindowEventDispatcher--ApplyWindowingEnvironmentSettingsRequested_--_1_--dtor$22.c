/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$22 @ 0x18027CD5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_22(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgsForWindowingSettings,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForWindowingSettings,wil::err_exception_policy>((volatile signed __int64 **)(a2 + 160));
}
