/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180345220
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F540 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180306034 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803060CC (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x180344D60 (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180345F50 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180347574 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803483A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18034A4D0 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18034C288 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18034EB68 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18034EE9C (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 */

void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  char v17; // r12
  bool v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct IApplicationView *v22; // rdx
  TabletModePositioner *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  struct IApplicationView *v27; // rdx
  TabletModePositioner *v28; // rcx
  int inited; // eax
  __int64 v30; // rbx
  struct IApplicationViewOperation *v31; // rbx
  int v32; // eax
  int ScaleFactor; // eax
  int v34; // eax
  __int64 v35; // rdx
  struct tagRECT *p_rc; // r9
  struct IUnknown *v37; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v38; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v39[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  struct IApplicationViewOperation *v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT *v49; // [rsp+90h] [rbp-70h]
  struct tagRECT rc; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v51[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v51,
    (__int64)"TMPControlGained");
  v51[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v51, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v41);
  if ( v41 == *(_DWORD *)(a1 + 108) )
  {
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL))(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v37);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1048LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v15);
LABEL_57:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
      goto LABEL_58;
    }
    v16 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v37->lpVtbl[18].QueryInterface)(v37, 0LL);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1053LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v16);
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v37->lpVtbl[9].QueryInterface)(v37, &v43) < 0 || !v43 )
      goto LABEL_57;
    v40 = 0LL;
    v17 = 1;
    v18 = 1;
    v19 = 0LL;
    rc = 0LL;
    if ( a3 != 3 )
    {
      if ( a3 != 5 )
        goto LABEL_48;
      v42 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(v28, v27, &v42);
      if ( inited >= 0 )
      {
        v30 = *(_QWORD *)(a1 + 208);
        v38 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
        if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v30 + 72LL))(v30, &v38) >= 0 )
          v18 = (unsigned int)SHIsSameObject(v38, v37) != 0;
        v31 = v42;
        (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v42 + 96LL))(v42, 0LL);
        v32 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v37->lpVtbl[13].AddRef)(
                v37,
                v31);
        if ( v32 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1114LL,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v32);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1101LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v37->lpVtbl[5].AddRef)(v37, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v39[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor((TabletModePositioner *)(a1 - 128), v39);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1125LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right += 2 * (v39[0] * GetSystemMetrics(5) / -100);
      rc.bottom += 2 * (v39[0] * GetSystemMetrics(6) / -100);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
LABEL_44:
      if ( !v18 )
        goto LABEL_56;
      if ( v19 )
      {
        v34 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v19);
        if ( v34 < 0 )
        {
          v35 = 1134LL;
LABEL_55:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            v35,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v34);
        }
LABEL_56:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
        goto LABEL_57;
      }
LABEL_48:
      if ( rc.left < rc.right && rc.top < rc.bottom )
        v17 = 0;
      p_rc = &rc;
      if ( v17 )
        p_rc = 0LL;
      v34 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v37, 2LL, p_rc, 0LL);
      if ( v34 >= 0 )
        goto LABEL_56;
      v35 = 1141LL;
      goto LABEL_55;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), (__int64 *)&v37);
    v20 = *(_QWORD *)(a1 + 136);
    if ( v20 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v20 + 184LL))(v20, v37) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v40, (__int64 *)(a1 + 136));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
      v19 = v40;
    }
    v21 = *(_QWORD *)(a1 + 208);
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
    if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v21 + 72LL))(v21, &v38) < 0
      || (unsigned int)SHIsSameObject(v38, v37) )
    {
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
      goto LABEL_44;
    }
    *(_QWORD *)v39 = 0LL;
    v18 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
    v24 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            v23,
            v22,
            (struct IApplicationViewOperation **)v39);
    if ( v24 >= 0 )
    {
      v26 = *(_QWORD *)v39;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v39 + 96LL))(*(_QWORD *)v39, 0LL);
      v24 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v37->lpVtbl[13].AddRef)(v37, v26);
      if ( v24 >= 0 )
      {
LABEL_31:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
        goto LABEL_32;
      }
      v25 = 1093LL;
    }
    else
    {
      v25 = 1087LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v25,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_31;
  }
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(v7, v6, v8);
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v41);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v9 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1010LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
  }
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&rc,
    a2);
  LODWORD(v44) = 0;
  v46 = &rc;
  v45 = 0LL;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v44);
  LODWORD(v47) = rc.right;
  v49 = &rc;
  v48 = 0LL;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v47);
  while ( (_DWORD)v44 != (_DWORD)v47 || v46 != v49 )
  {
    v10 = v45;
    v40 = v45;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v40);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 432LL))(v10, 0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1016LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    LODWORD(v44) = v44 + 1;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v44);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc.left);
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(v13, v12, v14);
  *(_BYTE *)(a1 + 112) = 1;
LABEL_58:
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v51);
  v51[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v51);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v51);
}
