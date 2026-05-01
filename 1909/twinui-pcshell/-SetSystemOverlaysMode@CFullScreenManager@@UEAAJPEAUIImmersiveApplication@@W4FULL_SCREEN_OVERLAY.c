/*
 * XREFs of ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1801910E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CPropertyStoreHelper@@QEAA@XZ @ 0x180069D30 (--1CPropertyStoreHelper@@QEAA@XZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180069D68 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018F0AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18018F6C4 (--1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180191778 (-StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplicati.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18019195C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 */

__int64 __fastcall CFullScreenManager::SetSystemOverlaysMode(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IApplicationView **v9; // r9
  int ViewForApplication; // eax
  __int64 v11; // rbx
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-A0h]
  _QWORD v23[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"FSMSetSystemOverlaysMode");
  v23[0] = &FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::`vftable';
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::StartActivity(v23, a2, a3);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))a2->lpVtbl[2].QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v20,
      v19);
    v22 = a3;
    v21 = 3;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v20 + 48LL))(
           v20,
           &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
           &v21);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12C,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_18:
      CPropertyStoreHelper::~CPropertyStoreHelper((CPropertyStoreHelper *)&v20);
      goto LABEL_19;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *(IUnknown **)(a1 - 72),
                           a2,
                           (struct IImmersiveApplication *)&v16,
                           v9);
    v7 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x131,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)ViewForApplication);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_18;
    }
    punk = 0LL;
    v11 = v16;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v12 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v11 + 80LL))(v11, &punk);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x134,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_16:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      goto LABEL_17;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            punk,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &ppvOut);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v16);
      v7 = v13;
      if ( v13 >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
        v7 = 0;
        goto LABEL_15;
      }
      v14 = 312LL;
    }
    else
    {
      v14 = 311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::~FSMSetSystemOverlaysMode((FullScreenManagerTelemetry::FSMSetSystemOverlaysMode *)v23);
  return v7;
}
