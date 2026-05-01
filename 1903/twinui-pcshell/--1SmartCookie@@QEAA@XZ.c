/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x180107C30
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener_::_1_::dtor$4 @ 0x1801F842B (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--AppViewListener_--_1_--dtor$4.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer_::_1_::dtor$0 @ 0x18020EDFF (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--DisconnectFromPresentationLayer.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$13 @ 0x180229C32 (_TabViewManager--TabViewManager_--_1_--dtor$13.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$14 @ 0x180229C45 (_TabViewManager--TabViewManager_--_1_--dtor$14.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$15 @ 0x180229C58 (_TabViewManager--TabViewManager_--_1_--dtor$15.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$16 @ 0x180229C6B (_TabViewManager--TabViewManager_--_1_--dtor$16.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$17 @ 0x180229C7E (_TabViewManager--TabViewManager_--_1_--dtor$17.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$18 @ 0x180229C91 (_TabViewManager--TabViewManager_--_1_--dtor$18.c)
 *     _TitleBarController::RegisterForShellHooks_::_1_::dtor$2 @ 0x180249A2B (_TitleBarController--RegisterForShellHooks_--_1_--dtor$2.c)
 *     _TitleBarController::UnregisterFromShellHooks_::_1_::dtor$0 @ 0x18024A3E0 (_TitleBarController--UnregisterFromShellHooks_--_1_--dtor$0.c)
 *     _ViewGroupManager::ViewGroupManager_::_1_::dtor$6 @ 0x18024CDCC (_ViewGroupManager--ViewGroupManager_--_1_--dtor$6.c)
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$14 @ 0x18025098F (_DefaultIconManager--DefaultIconManager_--_1_--dtor$14.c)
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$15 @ 0x1802509A2 (_DefaultIconManager--DefaultIconManager_--_1_--dtor$15.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x18030D0B2 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$4 @ 0x180336B51 (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$4.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803A83F4 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1803B9540 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x1803C0A3C (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1803CF3DC (--1JointResize@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall SmartCookie::~SmartCookie(SmartCookie *this)
{
  SmartCookie::Unregister(this);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this);
}
