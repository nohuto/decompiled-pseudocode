/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_b3f750a11065c5dcf19e2d2a348f0727__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180093D30
 * Callers:
 *     <none>
 * Callees:
 *     ??$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x180091DB8 (--$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopShellTSF3Integration@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093A84 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopShellTSF3Integration@@@wil@@C.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180093B70 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

int __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_b3f750a11065c5dcf19e2d2a348f0727__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *a2 != 0;
  wil::Feature<__WilFeatureTraits_Feature_DesktopShellTSF3Integration>::ReportUsageToService(a1, (__int64)a2, a3);
  *(_BYTE *)(v3 + 724) = v5;
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability((KeyboardHosting::TabTipAdapter **)v3);
  return TouchKeyboardExperienceTelemetryLogger::LockScreenStateChanged<bool &>((__int64)&v5);
}
