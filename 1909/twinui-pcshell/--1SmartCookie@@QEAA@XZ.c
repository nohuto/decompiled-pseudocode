/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x180126C40
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor$4 @ 0x18021755B (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--AppViewListener_--_1_--dtor$4.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer_::_1_::dtor$0 @ 0x18022E18F (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--DisconnectFromPresentationLayer.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$13 @ 0x1802492BE (_TabViewManager--TabViewManager_--_1_--dtor$13.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$14 @ 0x1802492D1 (_TabViewManager--TabViewManager_--_1_--dtor$14.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$15 @ 0x1802492E4 (_TabViewManager--TabViewManager_--_1_--dtor$15.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$16 @ 0x1802492F7 (_TabViewManager--TabViewManager_--_1_--dtor$16.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$17 @ 0x18024930A (_TabViewManager--TabViewManager_--_1_--dtor$17.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$18 @ 0x18024931D (_TabViewManager--TabViewManager_--_1_--dtor$18.c)
 *     _TitleBarController::RegisterForShellHooks_::_1_::dtor$2 @ 0x18026903B (_TitleBarController--RegisterForShellHooks_--_1_--dtor$2.c)
 *     _TitleBarController::UnregisterFromShellHooks_::_1_::dtor$0 @ 0x180269A00 (_TitleBarController--UnregisterFromShellHooks_--_1_--dtor$0.c)
 *     _ViewGroupManager::ViewGroupManager_::_1_::dtor$6 @ 0x18026C31C (_ViewGroupManager--ViewGroupManager_--_1_--dtor$6.c)
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$14 @ 0x18026FEDF (_DefaultIconManager--DefaultIconManager_--_1_--dtor$14.c)
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$15 @ 0x18026FEF2 (_DefaultIconManager--DefaultIconManager_--_1_--dtor$15.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x18032C505 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$4 @ 0x1803563B1 (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$4.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803C7904 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1803D8A50 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x1803DFFDC (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1803EE9BC (--1JointResize@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  SmartCookie::Unregister(this);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this);
}
