/*
 * XREFs of ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180315780
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180038A20 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIObjectWithSite@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithSite@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030FFCC (--$As@UIObjectWithSite@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x18031034C (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180310AB0 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x1803112F4 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x18031286C (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ @ 0x1803143F0 (-StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180316E10 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::SubscribeToServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  struct IXamlLauncherState *v13; // [rsp+48h] [rbp-C0h] BYREF
  struct IServiceProvider *v14[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v15[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v14[1] = (struct IServiceProvider *)-2LL;
  v14[0] = a2;
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"SubscribeToServices");
  v15[0] = &StartWindowTelemetry::SubscribeToServices::`vftable';
  StartWindowTelemetry::SubscribeToServices::StartActivity((StartWindowTelemetry::SubscribeToServices *)v15);
  v11 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v11 + 24LL))(
           v11,
           &unk_18051FD40,
           1LL,
           ((unsigned __int64)this - 16) & -(__int64)(this != (XamlLauncher *)56),
           (char *)this + 108);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 377LL;
      goto LABEL_9;
    }
    v13 = (struct IXamlLauncherState *)*((_QWORD *)this + 27);
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((volatile int **)this + 12);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
           (ImmersiveMonitorHelper **)this + 12,
           v14,
           &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 379LL;
      goto LABEL_9;
    }
    v5 = ImmersiveMonitorHelper::SetSite(*((ImmersiveMonitorHelper **)this + 12), (struct IUnknown *)this - 7);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 380LL;
      goto LABEL_9;
    }
    v12 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27,
           &v12);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v12 + 24LL))(v12, a2);
      v6 = v8;
      if ( v8 >= 0 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
        v6 = 0;
        goto LABEL_16;
      }
      v9 = 383LL;
    }
    else
    {
      v9 = 382LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v8);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    goto LABEL_17;
  }
  v7 = 374LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  StartWindowTelemetry::SubscribeToServices::~SubscribeToServices((StartWindowTelemetry::SubscribeToServices *)v15);
  return v6;
}
