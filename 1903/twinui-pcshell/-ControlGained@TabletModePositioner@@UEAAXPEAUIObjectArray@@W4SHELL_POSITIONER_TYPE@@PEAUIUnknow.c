/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803AAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180048340 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180048530 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007B7F0 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007B9B4 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1803AA5C0 (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803AB820 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1803AD064 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803ADEB4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1803B0050 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803B1BE4 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803B4A1C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803B4D50 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 */

void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  struct IUnknown *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  struct IUnknown *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char v17; // r12
  bool v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct IApplicationView *v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rbx
  struct IApplicationView *v26; // rdx
  int inited; // eax
  __int64 v28; // rbx
  struct IApplicationViewOperation *v29; // rbx
  int v30; // eax
  int ScaleFactor; // eax
  int v32; // eax
  __int64 v33; // rdx
  struct tagRECT *p_rc; // r9
  struct IUnknown *v35; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v36; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationViewOperation *v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v43[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v43,
    (__int64)"TMPControlGained");
  v43[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v43, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v38);
  if ( v38 == *(_DWORD *)(a1 + 108) )
  {
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL))(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v35);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x43C,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v15);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      goto LABEL_63;
    }
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v16, 3u);
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v35->lpVtbl[9].QueryInterface)(v35, &v40) < 0 || !v40 )
      goto LABEL_62;
    v41 = 0LL;
    v17 = 1;
    v18 = 1;
    v19 = 0LL;
    rc = 0LL;
    if ( a3 != 3 )
    {
      if ( a3 != 5 )
        goto LABEL_53;
      v39 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)(a1 - 128),
                 v26,
                 &v39);
      if ( inited >= 0 )
      {
        v28 = *(_QWORD *)(a1 + 208);
        v36 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
        if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v28 + 72LL))(v28, &v36) >= 0 )
          v18 = (unsigned int)SHIsSameObject(v36, v35) != 0;
        v29 = v39;
        (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v39 + 96LL))(v39, 0LL);
        v30 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v35->lpVtbl[13].AddRef)(
                v35,
                v29);
        if ( v30 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x481,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v30);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x474,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v35->lpVtbl[5].AddRef)(v35, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v37[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor((TabletModePositioner *)(a1 - 128), v37);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x48C,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right += 2 * (v37[0] * GetSystemMetrics(5) / -100);
      rc.bottom += 2 * (v37[0] * GetSystemMetrics(6) / -100);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
LABEL_49:
      if ( !v18 )
        goto LABEL_61;
      if ( v19 )
      {
        v32 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v19);
        if ( v32 < 0 )
        {
          v33 = 1173LL;
LABEL_60:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v33,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v32);
        }
LABEL_61:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
        goto LABEL_62;
      }
LABEL_53:
      if ( rc.left < rc.right && rc.top < rc.bottom )
        v17 = 0;
      p_rc = &rc;
      if ( v17 )
        p_rc = 0LL;
      v32 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v35, 2LL, p_rc, 0LL);
      if ( v32 >= 0 )
        goto LABEL_61;
      v33 = 1180LL;
      goto LABEL_60;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), (__int64 *)&v35);
    v20 = *(_QWORD *)(a1 + 136);
    if ( v20 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v20 + 184LL))(v20, v35) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v41, (__int64 *)(a1 + 136));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
      v19 = v41;
    }
    v21 = *(_QWORD *)(a1 + 208);
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v21 + 72LL))(v21, &v36) < 0
      || (unsigned int)SHIsSameObject(v36, v35) )
    {
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      goto LABEL_49;
    }
    *(_QWORD *)v37 = 0LL;
    v18 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
    v23 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            (TabletModePositioner *)(a1 - 128),
            v22,
            (struct IApplicationViewOperation **)v37);
    if ( v23 >= 0 )
    {
      v25 = *(_QWORD *)v37;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v37 + 96LL))(*(_QWORD *)v37, 0LL);
      v23 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v35->lpVtbl[13].AddRef)(v35, v25);
      if ( v23 >= 0 )
      {
LABEL_36:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v37);
        goto LABEL_37;
      }
      v24 = 1132LL;
    }
    else
    {
      v24 = 1126LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_36;
  }
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  v6 = *(_QWORD *)(a1 + 320);
  if ( v6 )
  {
    v35 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v6 + 32LL))(v6, 2LL, &v35);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x401,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v35->lpVtbl[1].Release)(v35, 3LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x402,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v8);
    v9 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    }
  }
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v38);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v11 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x413,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v10, 3u);
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  v12 = *(_QWORD *)(a1 + 320);
  if ( v12 )
  {
    v35 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v12 + 32LL))(v12, 1LL, &v35) >= 0 )
    {
      v13 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v35->lpVtbl[1].Release)(v35, 0LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x426,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v13);
    }
    v14 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    }
  }
  *(_BYTE *)(a1 + 112) = 1;
LABEL_63:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v43);
  v43[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v43);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v43);
}
