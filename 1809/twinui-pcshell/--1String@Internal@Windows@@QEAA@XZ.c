/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x1800EBBA4
 * Callers:
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x180098D14 (-LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$2 @ 0x180098F35 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$2.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$28 @ 0x1800AC380 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$28.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x1800ADDB6 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$6 @ 0x18019AFD0 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$6.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$7 @ 0x18019AFDC (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$7.c)
 *     __LogEventWithViewHostItemData_::_1_::dtor$0 @ 0x1801B79C8 (__LogEventWithViewHostItemData_--_1_--dtor$0.c)
 *     __LogEventWithViewHostItemData_::_1_::dtor$0_0 @ 0x1801BAABD (__LogEventWithViewHostItemData_--_1_--dtor$0_0.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::dtor$0 @ 0x18020DB88 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--TraceLogTabWindowSnapped_--_1_--dtor$.c)
 *     _ViewEventDispatcher::_FindMatchingViewEventRegistration_::_1_::dtor$0 @ 0x18021E6A9 (_ViewEventDispatcher--_FindMatchingViewEventRegistration_--_1_--dtor$0.c)
 *     _lambda_e292dbe355bbba6f2cf9952d0b17febd_::operator() @ 0x1803B2BCC (_lambda_e292dbe355bbba6f2cf9952d0b17febd_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
