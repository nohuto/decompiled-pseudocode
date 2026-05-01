/*
 * XREFs of ??1?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000E208
 * Callers:
 *     _WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$11 @ 0x1800C2502 (_WindowEventDispatcher--TryShowAsStandaloneAsync_--_1_--dtor$11.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$5 @ 0x18011EB1D (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$5.c)
 *     _HolographicPositioner::ControlGainedForActivation_::_1_::dtor$1 @ 0x1801FF86C (_HolographicPositioner--ControlGainedForActivation_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor$1 @ 0x18020420E (_HolographicPositioner--_EvaluateTakingControlOfWin32Slate_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$16 @ 0x18027CD12 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$16.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$32 @ 0x18027CDD4 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$32.c)
 *     _ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor$1 @ 0x18027E1CE (_ViewEventArgsForWindowingSettings--GetWindowingSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$11 @ 0x180281784 (_WindowEventDispatcher--TryShowAsViewModeAsync_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
