/*
 * XREFs of ?StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802326CC
 * Callers:
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x180230CA0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIWin32ApplicationView@@@Z @ 0x1800A67C0 (--$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802364E8 (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 *     ?zInternalStart@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180237A78 (-zInternalStart@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32BackedViewHostItemTelemetry::PortToHolographic::StartActivity(
        Win32BackedViewHostItemTelemetry::PortToHolographic *this,
        struct IWin32ApplicationView *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, LPCWSTR *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  const GUID *v9; // rax
  LPCWSTR pwsz; // [rsp+38h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-61h] BYREF
  __int64 v12; // [rsp+48h] [rbp-59h] BYREF
  struct IWin32ApplicationView *v13; // [rsp+50h] [rbp-51h] BYREF
  HWND hWnd[2]; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  void *v16; // [rsp+88h] [rbp-19h]
  int v17; // [rsp+90h] [rbp-11h]
  int v18; // [rsp+94h] [rbp-Dh]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-9h]
  int v20; // [rsp+A0h] [rbp-1h]
  int v21; // [rsp+A4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+7h] BYREF
  __int64 *v23; // [rsp+B8h] [rbp+17h]
  int v24; // [rsp+C0h] [rbp+1Fh]
  int v25; // [rsp+C4h] [rbp+23h]
  struct IWin32ApplicationView **v26; // [rsp+C8h] [rbp+27h]
  int v27; // [rsp+D0h] [rbp+2Fh]
  int v28; // [rsp+D4h] [rbp+33h]

  hWnd[1] = (HWND)-2LL;
  v13 = a2;
  hWnd[0] = 0LL;
  if ( (*(int (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, hWnd) >= 0 )
  {
    pwsz = 0LL;
    v3 = wil::com_query_failfast<IApplicationView,IWin32ApplicationView * &>((__int64)&v12, &v13);
    v4 = *(_QWORD *)v3;
    v5 = *(int (__fastcall **)(__int64, LPCWSTR *))(**(_QWORD **)v3 + 136LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&pwsz,
      0LL);
    LOBYTE(v5) = v5(v4, &pwsz) >= 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
    if ( (_BYTE)v5 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
      v7 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
             v6,
             lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
      v8 = *(const struct _TlgProvider_t **)(v7 + 8);
      if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
      {
        v16 = &`Win32BackedViewHostItemTelemetry::PortFromHolographic::StopActivity'::`10'::_TlgActivityPrivacyTag;
        v17 = 8;
        v18 = 0;
        CurrentThreadId = GetCurrentThreadId();
        p_CurrentThreadId = &CurrentThreadId;
        v20 = 4;
        v21 = 0;
        TlgCreateWsz(&pDesc, pwsz);
        LODWORD(v12) = hWnd[0];
        v23 = &v12;
        v24 = 4;
        v25 = 0;
        LODWORD(v13) = IsWindowVisible(hWnd[0]);
        v26 = &v13;
        v27 = 4;
        v28 = 0;
        v9 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
        TlgWrite(v8, &unk_1804F0510, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 7u, &pData);
      }
      if ( !*((_DWORD *)this + 8) )
        wil::details::ThreadFailureCallbackHolder::StartWatching((Win32BackedViewHostItemTelemetry::PortToHolographic *)((char *)this + 8));
    }
    if ( pwsz )
      CoTaskMemFree((LPVOID)pwsz);
  }
}
