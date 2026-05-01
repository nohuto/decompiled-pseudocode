/*
 * XREFs of ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18018ACC0
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18018F910 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_18018F910.c)
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x18018F978 (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18035F11C (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18035F42C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U-.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803A5DE8 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1803A5DE8.c)
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1803A5E24 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803C7904 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x1803C8BA8 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803C8F54 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1803C8F54.c)
 *     ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x1803D5DDC (--_ETabletModeViewManager@@UEAAPEAXI@Z.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1803EE9BC (--1JointResize@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803EECC4 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1803EECC4.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180126B98 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(
        CImmersiveShellComponentWithSite *this)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithSite *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
