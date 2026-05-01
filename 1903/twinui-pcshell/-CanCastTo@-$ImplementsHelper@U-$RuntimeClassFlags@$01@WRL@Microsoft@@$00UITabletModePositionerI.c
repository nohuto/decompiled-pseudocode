/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800220B4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021F80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180021F80.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803AA4DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShellTargetingChangeN.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerInternal,ITabletModePositionerPriv,IStartDismissalPolicy,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IImmersiveMonitorNotification,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerWindowingDelegationHandler,IImmersiveShellHookNotification,IMultitaskingViewVisibilityNotification,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>>::CanCastTo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  __int64 v19; // r11
  __int64 v20; // r10

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_a8e97fa4_540d_48a9_aac2_3b6140069a32, a3, a4) )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v4, &GUID_ef2ef97b_ee1b_47a0_ad0c_8478ec6c722f, v5, 0LL)
      && !(unsigned int)InlineIsEqualGUID(v7, &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2, v8, v9)
      && !(unsigned int)InlineIsEqualGUID(v11, &GUID_ee010e17_919a_4068_868b_675acf787303, v8, v9)
      && !(unsigned int)InlineIsEqualGUID(v12, &GUID_727f9e97_76ee_497b_a942_b6371328485c, v8, v9) )
    {
      v14 = v10 + 8;
      if ( *v13 == -2030348378
        && v13[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
        && v13[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
        && v13[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4]
        || (v14 = v10 + 16, *v13 == -1811144131)
        && v13[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && v13[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && v13[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        *v8 = v14;
        return (unsigned int)v9;
      }
      if ( !(unsigned int)InlineIsEqualGUID(v13, &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a, v8, v9) )
      {
        if ( (unsigned int)InlineIsEqualGUID(v15, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c, v8, v9)
          || (unsigned int)InlineIsEqualGUID(v17, &GUID_c59a7a3c_0676_4526_8192_5d0bf9b89b95, v18, v9) )
        {
          *v18 = v19;
        }
        else
        {
          LODWORD(v9) = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>::CanCastTo(
                          v19 + 8,
                          v20);
        }
        if ( (_DWORD)v9 == -2147467262 )
          LODWORD(v9) = -2147467262;
        return (unsigned int)v9;
      }
    }
    *v8 = v10;
    return (unsigned int)v9;
  }
  *v5 = v6;
  return 0LL;
}
