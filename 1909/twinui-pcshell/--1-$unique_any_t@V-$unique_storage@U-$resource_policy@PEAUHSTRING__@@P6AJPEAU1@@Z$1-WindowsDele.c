/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18012DBB4
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD3A4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$9 @ 0x1800AD892 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$9.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD8C4 (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$4 @ 0x1800ADB07 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$4.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x1800E4E02 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$28 @ 0x1800E5F50 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$28.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$6 @ 0x1802010F7 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$6.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$7 @ 0x180201103 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$7.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0 @ 0x18021CC94 (__LogEventWithViewHostItemData___--_1_--dtor$0.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0_0 @ 0x180226ADD (__LogEventWithViewHostItemData___--_1_--dtor$0_0.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::dtor$0 @ 0x180284BBA (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--TraceLogTabWindowSnapped_--_1_--dtor$.c)
 *     _ViewEventDispatcher::_FindMatchingViewEventRegistration_::_1_::dtor$0 @ 0x18029347D (_ViewEventDispatcher--_FindMatchingViewEventRegistration_--_1_--dtor$0.c)
 *     _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x1804348DC (_lambda_661bc23c674c805837064d315685ee67_--operator().c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
