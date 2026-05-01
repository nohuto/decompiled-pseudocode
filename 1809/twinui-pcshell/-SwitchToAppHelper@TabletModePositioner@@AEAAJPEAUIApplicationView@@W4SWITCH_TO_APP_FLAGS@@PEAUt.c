/*
 * XREFs of ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18034EB68
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180345220 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180345870 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1803466A8 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180348510 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18034A730 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18034FF44 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1802FD6C4 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1803265F0 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180347EE0 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::SwitchToAppHelper(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  _BYTE *v5; // r14
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  bool v13; // bl
  HRESULT inited; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  IUnknown *v17; // rcx
  bool *v18; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v23; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v5 = ppvOut;
  if ( ppvOut )
    *(_BYTE *)ppvOut = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&ppvOut);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2D,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return v11;
  }
  v13 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 88LL))(*(_QWORD *)(a1 + 248), 2LL) == 1
     && ((unsigned __int8)ppvOut & 2) != 0;
  if ( (a3 & 4) == 0
    && !IsPPIEdition()
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 80LL))(*(_QWORD *)(a1 + 248), 1LL) > 1
    && !v13 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    inited = IUnknown_QueryService(
               *(IUnknown **)(a1 + 16),
               &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
               &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
               &ppvOut);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2616LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      return v11;
    }
    inited = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)ppvOut + 56LL))(
               ppvOut,
               a2,
               *(_QWORD *)(a1 + 248),
               a4);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2617LL;
      goto LABEL_18;
    }
    if ( v5 )
      *v5 = 1;
    goto LABEL_43;
  }
  if ( IsPPIEdition() )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (IUnknown *)a1,
               &CLSID_PPILayoutOperation,
               &GUID_5ad5b03b_637b_436d_9dcd_b3ef85f3769a,
               &ppvOut);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2648LL;
      goto LABEL_18;
    }
    inited = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD))(*(_QWORD *)ppvOut + 40LL))(
               ppvOut,
               a2,
               a3);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2649LL;
      goto LABEL_18;
    }
    inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, (struct IUnknown *)ppvOut);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2650LL;
      goto LABEL_18;
    }
LABEL_43:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    return 0LL;
  }
  v16 = *(_QWORD *)(a1 + 432);
  v22 = 0;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 40LL))(v16, &v22);
  v17 = *(IUnknown **)(a1 + 16);
  LOBYTE(ppvOut) = 0;
  IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                 v17,
                                 0LL,
                                 (struct IImmersiveLauncher *)&ppvOut,
                                 v18);
  if ( IsLauncherVisibleOnMonitor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2924LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
  if ( (_BYTE)ppvOut )
  {
    a3 |= 0x18u;
  }
  else if ( v22 )
  {
    a3 |= 8u;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v20 = TabletModePositioner::InitLayoutOperationHelper(
          (IUnknown *)a1,
          &CLSID_AppSwitchOperation,
          &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
          (void **)&v23);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 2639LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    return v11;
  }
  v20 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v23->lpVtbl[1].Release)(
          v23,
          a2,
          a3);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 2640LL;
    goto LABEL_35;
  }
  v20 = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v23);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 2641LL;
    goto LABEL_35;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return 0LL;
}
