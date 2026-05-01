/*
 * XREFs of ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180370150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180191B20 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA?AV01@XZ @ 0x1802FB568 (--$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA-AV01@XZ.c)
 *     ??1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802FB9B0 (--1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ??$As@UIFrameInteractionEvents@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameInteractionEvents@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036D184 (--$As@UIFrameInteractionEvents@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$As@UISwitchItemController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036D1C8 (--$As@UISwitchItemController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ??$As@UIMultitaskingViewManagerInternal@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036EE10 (--$As@UIMultitaskingViewManagerInternal@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ??$As@UISnapAssistViewController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISnapAssistViewController@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036F268 (--$As@UISnapAssistViewController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x18036FC58 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18036FC58.c)
 *     ?CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18037701C (-CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApp.c)
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x180378CC8 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 *     ?CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@AEBU_GUID@@PEAPEAX@Z @ 0x18037A984 (-CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewC.c)
 *     ?SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18037EBA4 (-SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReferenc.c)
 */

__int64 __fastcall CSnapAssistViewHost::Show(__int64 a1, _QWORD *a2, int a3)
{
  char v4; // r15
  char v5; // di
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  const struct _GUID *v10; // r8
  int v11; // eax
  struct IWeakReference *v12; // rbx
  const struct _GUID *v13; // rdx
  int Instance; // eax
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rax
  unsigned __int64 v21; // r9
  _QWORD *v22; // r13
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  struct IWeakReference *v27; // [rsp+50h] [rbp-B0h] BYREF
  void *v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  int v33[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  struct IApplicationViewIconLoader *v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  int v37; // [rsp+A0h] [rbp-60h]
  _QWORD *v38; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B4h] [rbp-4Ch]
  _BYTE v41[120]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+1A0h] [rbp+A0h]
  __int64 v45; // [rsp+248h] [rbp+148h]
  __int64 v46; // [rsp+2E8h] [rbp+1E8h]
  __int64 v47; // [rsp+360h] [rbp+260h]
  __int64 v48; // [rsp+428h] [rbp+328h]
  __int64 v49; // [rsp+4E0h] [rbp+3E0h]
  _BYTE v50[320]; // [rsp+560h] [rbp+460h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6E8h] [rbp+5E8h]

  v38 = a2;
  v30 = a3;
  v4 = 1;
  v5 = a3;
  v36 = (a1 + 24) & -(__int64)(a1 != 0);
  v37 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v36, 1);
  MultitaskingViewTelemetry::ShowSnapAssist::Start<>((MultitaskingViewTelemetry::ShowSnapAssist *)v50);
  v29 = 0LL;
  v34 = 0LL;
  v6 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewManagerInternal>((_QWORD *)(a1 + 80), &v34);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 140LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_43;
  }
  v9 = v34;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v29);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 141LL;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(_QWORD, struct IApplicationViewIconLoader **))(**(_QWORD **)(a1 + 160) + 88LL))(
    *(_QWORD *)(a1 + 160),
    &v35);
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  LODWORD(v27) = ((v5 & 2) != 0) + 1;
  v11 = CSwitchItemElementFactory_CreateInstance(
          (const struct SwitchItemElementFactoryCreateParams *)&v27,
          v35,
          v10,
          &v28);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    MultitaskingViewConfigHelpers::GetConfigFromRegistry(2LL, v41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 200));
    v27 = *(struct IWeakReference **)(a1 + 184);
    v12 = v27;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    Instance = SnapAssistViewInvocationAnimationCoordinator_CreateInstance(v12, v13, (void **)(a1 + 200));
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    *(_QWORD *)v33 = 0LL;
    v15 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISwitchItemController>(
            (_QWORD *)(a1 + 176),
            (__int64 *)v33);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 159LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v15);
LABEL_41:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v33);
      goto LABEL_42;
    }
    v17 = (_QWORD *)(a1 + 168);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 168));
    v15 = CMultitaskingViewFrame_CreateInstance(9LL, v41, v29, v28, *(_QWORD *)v33, 0LL, *(_QWORD *)(a1 + 200));
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 168LL;
      goto LABEL_16;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v17 + 40LL))(*v17, *(_QWORD *)(a1 + 192));
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 170LL;
      goto LABEL_16;
    }
    v32 = 0LL;
    v18 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IFrameInteractionEvents>((_QWORD *)(a1 + 176), &v32);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 173LL;
LABEL_31:
      v21 = (unsigned int)v18;
      goto LABEL_32;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v17 + 144LL))(*v17, v32);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 174LL;
      goto LABEL_31;
    }
    v20 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, struct IWeakReference **))(**(_QWORD **)(a1 + 160) + 48LL))(
                       *(_QWORD *)(a1 + 160),
                       &v27);
    v7 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1(
           (_QWORD *)(a1 + 216),
           *v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    if ( v7 < 0 )
    {
      v21 = (unsigned int)v7;
      v19 = 176LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)v21);
      goto LABEL_40;
    }
    v22 = v38;
    v23 = *v17;
    v38 = (_QWORD *)*v38;
    v39 = *((_DWORD *)v22 + 2);
    v40 = *((_DWORD *)v22 + 3);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD **, _QWORD))(*(_QWORD *)v23 + 24LL))(v23, &v38, 0LL);
    v7 = v18;
    if ( v18 == -2147024809 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v50);
      v7 = 0;
LABEL_40:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_41;
    }
    if ( v18 < 0 )
    {
      v19 = 187LL;
      goto LABEL_31;
    }
    if ( (v30 & 1) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v17 + 96LL))(*v17, 1LL, 7LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 56LL))(*v17);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 193LL;
      goto LABEL_31;
    }
    v31 = 0LL;
    *(_BYTE *)(a1 + 112) = 1;
    v24 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISnapAssistViewController>((_QWORD *)(a1 + 176), &v31);
    v7 = v24;
    if ( v24 >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v31 + 24LL))(v31, v22);
      v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 88LL))(*v17);
      v7 = v24;
      if ( v24 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          *(unsigned int *)(a1 + 72));
        v4 = 0;
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v50);
        v7 = 0;
        goto LABEL_39;
      }
      v25 = 200LL;
    }
    else
    {
      v25 = 197LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v24);
LABEL_39:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
    (const char *)(unsigned int)v11);
LABEL_42:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
LABEL_43:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  if ( v4 )
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
  MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v50);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v36);
  return (unsigned int)v7;
}
