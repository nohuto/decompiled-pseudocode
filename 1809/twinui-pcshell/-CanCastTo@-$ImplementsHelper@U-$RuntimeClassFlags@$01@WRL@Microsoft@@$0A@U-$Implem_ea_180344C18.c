/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180344C18
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180349870 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180349870.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801408E8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1801408E8.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180344BA4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerI.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,Microsoft::WRL::ChainInterfaces<ITabletModePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabletModePositionerInternal,ITabletModePositionerPriv,IStartDismissalPolicy,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IImmersiveMonitorNotification,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerWindowingDelegationHandler,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v4; // r10
  unsigned int CanCastTo; // r11d
  BOOL IsEqualGUID; // eax
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r10

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    IsEqualGUID = InlineIsEqualGUID(v4, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e);
    CanCastTo = 0;
    if ( IsEqualGUID || InlineIsEqualGUID(v7, &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130) )
    {
      *v8 = v9;
    }
    else if ( *v10 == 849159280
           && v10[1] == *(_DWORD *)&GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data2
           && v10[2] == *(_DWORD *)GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data4
           && v10[3] == *(_DWORD *)&GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767.Data4[4]
           || *v10 == 684124641
           && v10[1] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data2
           && v10[2] == *(_DWORD *)GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4
           && v10[3] == *(_DWORD *)&GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130.Data4[4] )
    {
      *v8 = a1 + 96;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerInternal,ITabletModePositionerPriv,IStartDismissalPolicy,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IImmersiveMonitorNotification,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerWindowingDelegationHandler,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>>::CanCastTo(
                             a1 + 104,
                             v10);
    }
  }
  return CanCastTo;
}
