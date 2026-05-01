/*
 * XREFs of ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x180230AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$RunWhenCompleteAction@VFtmBase@WRL@Microsoft@@PEAUIAsyncAction@Foundation@Windows@@V?$function@$$A6AJJ@Z@wistd@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@$$QEAV?$function@$$A6AJJ@Z@wistd@@@Z @ 0x180229CE4 (--$RunWhenCompleteAction@VFtmBase@WRL@Microsoft@@PEAUIAsyncAction@Foundation@Windows@@V-$functio.c)
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af___ @ 0x18022AA40 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_5945374.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022AED8 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18022AED8.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18022AF8C (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18022AF8C.c)
 *     ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18022C5E4 (--1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802324EC (-StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationV.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180234DBC (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180236750 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortFromHolographic(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        unsigned __int8 *a2)
{
  unsigned int v4; // esi
  struct IWin32ApplicationView *v5; // rbx
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  int v10[2]; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Foundation::IAsyncAction *v11; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v14[15]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v15[40]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v16[40]; // [rsp+218h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v12[2] = -2LL;
  v4 = 0;
  *a2 = 0;
  v5 = (struct IWin32ApplicationView *)*((_QWORD *)this + 50);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PortFromHolographic");
  v15[0] = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  Win32BackedViewHostItemTelemetry::PortFromHolographic::StartActivity(
    (Win32BackedViewHostItemTelemetry::PortFromHolographic *)v15,
    v5);
  v10[0] = 0;
  v6 = (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this - 24);
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(v6, v10) < 0
    || !v10[0] )
  {
    v11 = 0LL;
    v7 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_HandleHolographicPortingAsync(v6, 0, &v11);
    if ( v7 >= 0 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v16,
        (__int64)v15);
      v16[0] = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
      holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_5945374297143300155349d30b4277af___(
        v12,
        (__int64)v6,
        (__int64)v16);
      Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic((Win32BackedViewHostItemTelemetry::PortFromHolographic *)v16);
      v14[0] = &off_18044DCD8;
      v14[1] = v12[0];
      v14[2] = v12[1];
      v14[13] = v14;
      v7 = wil::details::RunWhenCompleteAction<Microsoft::WRL::FtmBase,Windows::Foundation::IAsyncAction *,wistd::function<long (long)>>(
             (__int64)v11,
             (__int64)&v13);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)&v13);
      if ( v7 >= 0 )
      {
        *a2 = 1;
        goto LABEL_9;
      }
      v8 = 839LL;
    }
    else
    {
      v8 = 826LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v7);
    v4 = v7;
LABEL_9:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
  }
  Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic((Win32BackedViewHostItemTelemetry::PortFromHolographic *)v15);
  return v4;
}
