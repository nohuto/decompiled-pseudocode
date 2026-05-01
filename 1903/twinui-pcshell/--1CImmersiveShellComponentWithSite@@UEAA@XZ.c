/*
 * XREFs of ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18016B920
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180170530 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_180170530.c)
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x180170598 (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18033F97C (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18033FC8C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U-.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180386478 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_180386478.c)
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1803864B4 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803A83F4 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x1803A9698 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803A9A44 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1803A9A44.c)
 *     ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x1803B68CC (--_ETabletModeViewManager@@UEAAPEAXI@Z.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1803CF3DC (--1JointResize@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803CF6E4 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1803CF6E4.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180107B88 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(
        CImmersiveShellComponentWithSite *this)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithSite *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
