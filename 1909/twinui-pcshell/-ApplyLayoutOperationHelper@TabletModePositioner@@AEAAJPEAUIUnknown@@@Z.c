/*
 * XREFs of ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803C9220
 * Callers:
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803C9068 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x1803C91D0 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803C9C28 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803CB534 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1803CE490 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803CEDC0 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803D3F2C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803D4260 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1803D4328 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803D43E0 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D5128 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003B0D0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007E144 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180085618 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18037D86C (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18037D8E0 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1803C8790 (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1803C8AF4 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1803C8B20 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803CAD30 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ @ 0x1803CCBD4 (-HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ.c)
 *     ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803CCC4C (-HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1803CD780 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803CDE00 (-NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x1803CE860 (-PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONME.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803CF4F8 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1803CFD34 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1803CFD78 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1803D0000 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1803D017C (-SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1803D084C (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803D46E0 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
 *     ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x1803D573C (-get@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z.c)
 */

__int64 __fastcall TabletModePositioner::ApplyLayoutOperationHelper(TabletModePositioner *this, struct IUnknown *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  struct IAppLayoutOperation *v6; // rbx
  int v7; // eax
  struct IAppLayoutOperation *v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  struct IAppLayoutOperation *v13; // rbx
  unsigned int v14; // esi
  struct IAppLayoutOperation *v15; // rbx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v16; // r9
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int i; // r14d
  struct IAppLayoutOperation *v22; // rbx
  __int64 v23; // rbx
  struct IApplicationView *v24; // rdx
  struct IApplicationView *v25; // rdx
  struct IApplicationView *v26; // rdx
  struct IApplicationViewOperation *v27; // rbx
  struct IApplicationView *v28; // rdx
  TabletModePositioner *v29; // rcx
  int v30; // eax
  char IsOperableView; // al
  int v32; // ebx
  int v33; // eax
  struct IAppLayoutOperation *v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // cl
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct IAppLayoutOperation *v45; // [rsp+30h] [rbp-D0h] BYREF
  struct IApplicationViewOperation *v46; // [rsp+38h] [rbp-C8h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  TabletModePositionerHelpers *v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT v53; // [rsp+70h] [rbp-90h] BYREF
  __int128 v54; // [rsp+88h] [rbp-78h] BYREF
  int v55; // [rsp+98h] [rbp-68h]
  int v56; // [rsp+9Ch] [rbp-64h]
  __m128i si128; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B4h] [rbp-4Ch]
  _BYTE v60[40]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v61[40]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  if ( TabletModePositioner::IsTabletMode(this) )
  {
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
           &v45);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94E,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v5);
LABEL_72:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
      return v4;
    }
    v6 = v45;
    v51 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
    v7 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, &v51);
    v4 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x950,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_71:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
      goto LABEL_72;
    }
    v8 = v45;
    v49 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
    v9 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v49);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 2386LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)v10);
LABEL_70:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
      goto LABEL_71;
    }
    v12 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v45 + 96LL))(v45);
    v4 = v12;
    if ( v12 < 0 )
    {
      v10 = (unsigned int)v12;
      v11 = 2389LL;
      goto LABEL_13;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 31) + 200LL))(
            *((_QWORD *)this + 31),
            v51,
            3LL) )
    {
      v4 = -2147024809;
      v11 = 2392LL;
      v10 = 2147942487LL;
      goto LABEL_13;
    }
    v13 = v45;
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v61,
      (__int64)"ApplyLayoutOperationHelper");
    v61[0] = &TabletModeTraceLogging::ApplyLayoutOperationHelper::`vftable';
    TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
      (TabletModeTraceLogging::ApplyLayoutOperationHelper *)v61,
      v13);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v49 + 24LL))(v49, v60);
    v14 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v45 + 80LL))(v45);
    if ( (v14 & 0x10000) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut) >= 0 )
      {
        if ( (v14 & 0x2000000) != 0 )
        {
          v15 = v45;
          if ( *((struct IAppLayoutOperation **)this + 41) != v45 )
          {
            v46 = v45;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v46);
            v46 = (struct IApplicationViewOperation *)*((_QWORD *)this + 41);
            *((_QWORD *)this + 41) = v15;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
          }
        }
        else
        {
          CAutoAppTransitionRequest::CAutoAppTransitionRequest(
            (CAutoAppTransitionRequest *)&v53,
            *((struct IAppTransitionManager **)this + 49));
          CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
            (CAutoAppTransitionRequest *)&v53,
            v45,
            (struct IImmersiveMonitor *)ppvOut,
            v16);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 64LL))(*((_QWORD *)this + 54));
          CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)&v53);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (v14 & 1) == 0 )
      goto LABEL_68;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
    v17 = TabletModePositioner::HandleFlashDetection(this, v45);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x981,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v17);
    v18 = v49;
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v19 = (*(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v18 + 192LL))(
            v18,
            &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
            &ppvOut);
    v4 = v19;
    if ( v19 < 0 )
    {
      v20 = 2437LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_69:
      TabletModeTraceLogging::ApplyLayoutOperationHelper::~ApplyLayoutOperationHelper((TabletModeTraceLogging::ApplyLayoutOperationHelper *)v61);
      goto LABEL_70;
    }
    v19 = TabletModePositioner::SetAppLayout(this, (struct IAppLayout *)ppvOut);
    v4 = v19;
    if ( v19 < 0 )
    {
      v20 = 2438LL;
      goto LABEL_30;
    }
    v19 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)v45 + 24LL))(v45, &v52);
    v4 = v19;
    if ( v19 < 0 )
    {
      v20 = 2443LL;
      goto LABEL_30;
    }
    for ( i = 0; i < v52; ++i )
    {
      v22 = v45;
      v48 = 0LL;
      v50 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
      if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v22 + 32LL))(
             v22,
             i,
             &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
             &v48) >= 0
        && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 80LL))(v48)
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 88LL))(v48)) )
      {
        v23 = v48;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        if ( (*(int (__fastcall **)(__int64, GUID *, TabletModePositionerHelpers **))(*(_QWORD *)v23 + 32LL))(
               v23,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v50) >= 0
          && TabletModePositionerHelpers::IsControlledView(v50, v24) )
        {
          v46 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
          if ( (int)TabletModePositioner::CreateAndInitApplicationViewOperation(this, v25, &v46) >= 0 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 88LL))(v48) )
            {
              v27 = v46;
              (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v46 + 96LL))(v46, 1LL);
              if ( (v14 & 8) != 0 )
              {
                v55 = 0;
                v54 = 0LL;
                v58 = 0;
                si128 = _mm_load_si128((const __m128i *)&_xmm);
                v56 = 1;
                v59 = 1;
                (*(void (__fastcall **)(struct IApplicationViewOperation *, __int128 *))(*(_QWORD *)v27 + 144LL))(
                  v27,
                  &v54);
              }
              *(_QWORD *)&v53.left = 0LL;
              *(_QWORD *)&v53.right = 0LL;
              (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v48 + 72LL))(v48, 0LL, &v53);
              v30 = TabletModePositioner::PositionView(
                      v29,
                      v28,
                      &v53,
                      (const struct LAYOUT_ENVIRONMENT_DETAILS *)v60,
                      v27);
              if ( v30 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x9AD,
                  (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                  (const char *)(unsigned int)v30);
            }
            else
            {
              IsOperableView = TabletModePositionerHelpers::IsOperableView(
                                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v50,
                                 v26);
              v27 = v46;
              if ( IsOperableView )
                (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v46 + 96LL))(v46, 0LL);
            }
            (*(void (__fastcall **)(TabletModePositionerHelpers *, struct IApplicationViewOperation *))(*(_QWORD *)v50 + 320LL))(
              v50,
              v27);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
    }
    if ( (v14 & 0x20) != 0 )
    {
      v32 = v14 & 2;
    }
    else if ( TabletModePositioner::ShouldShowLauncher(this)
           || (v32 = v14 & 2, TabletModePositioner::ShouldShowSnapAssist(this, v32 != 0)) )
    {
      v33 = TabletModePositioner::ShowLauncherOrSnapAssistInHole(this, v14);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9CB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v33);
LABEL_60:
      v36 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39), v49);
      if ( v36 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9DD,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v36);
      if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v49 + 200LL))(v49, v51, 3LL) )
      {
        *((_BYTE *)this + 240) = 0;
        TabletModePositioner::HandleAutoRotationLock(this);
        v37 = TabletModePositioner::NotifyAppLayoutChanged(this, v45);
        if ( v37 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9EC,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v37);
        v40 = v49;
        v41 = v51;
        if ( TabletModeTelemetry::IsEnabled(v39, v38) )
        {
          wil::details::static_lazy<TabletModeTelemetry>::get(
            v42,
            lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_);
          TabletModeTelemetry::SplitViewCreated_(v43, v41, v40, v14);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_68:
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v61);
      v4 = 0;
      goto LABEL_69;
    }
    if ( v32 && !*((_QWORD *)this + 36) )
    {
      v34 = v45;
      v46 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
      v35 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IApplicationViewOperation **))(*(_QWORD *)v34 + 64LL))(
              v34,
              &v46);
      if ( v35 >= 0 )
        (*(void (__fastcall **)(struct IApplicationViewOperation *))(*(_QWORD *)v46 + 48LL))(v46);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9D5,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
    }
    goto LABEL_60;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94B,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007139FLL);
  return v4;
}
