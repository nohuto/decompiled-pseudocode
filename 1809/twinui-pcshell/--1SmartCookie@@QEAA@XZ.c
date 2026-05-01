/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x1800E5A18
 * Callers:
 *     ??1KioskPositioner@@UEAA@XZ @ 0x180096CDC (--1KioskPositioner@@UEAA@XZ.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$13 @ 0x1801D4C47 (_TabViewManager--TabViewManager_--_1_--dtor$13.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$14 @ 0x1801D4C5A (_TabViewManager--TabViewManager_--_1_--dtor$14.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$15 @ 0x1801D4C6D (_TabViewManager--TabViewManager_--_1_--dtor$15.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$16 @ 0x1801D4C80 (_TabViewManager--TabViewManager_--_1_--dtor$16.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$17 @ 0x1801D4C93 (_TabViewManager--TabViewManager_--_1_--dtor$17.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$18 @ 0x1801D4CA6 (_TabViewManager--TabViewManager_--_1_--dtor$18.c)
 *     _TitleBarController::RegisterForShellHooks_::_1_::dtor$2 @ 0x1801F8B10 (_TitleBarController--RegisterForShellHooks_--_1_--dtor$2.c)
 *     _TitleBarController::UnregisterFromShellHooks_::_1_::dtor$0 @ 0x1801F95BB (_TitleBarController--UnregisterFromShellHooks_--_1_--dtor$0.c)
 *     _ViewGroupManager::ViewGroupManager_::_1_::dtor$6 @ 0x1801FA0E0 (_ViewGroupManager--ViewGroupManager_--_1_--dtor$6.c)
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$14 @ 0x1801FD71B (_DefaultIconManager--DefaultIconManager_--_1_--dtor$14.c)
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$15 @ 0x1801FD72E (_DefaultIconManager--DefaultIconManager_--_1_--dtor$15.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$4 @ 0x1802D5BCD (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$4.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x180342878 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x180353590 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18035AC84 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1803694D0 (--1JointResize@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  SmartCookie::Unregister(this);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this,
    v2);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this,
    v3);
}
