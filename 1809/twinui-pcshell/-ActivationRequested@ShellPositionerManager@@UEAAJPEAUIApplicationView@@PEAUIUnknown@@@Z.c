/*
 * XREFs of ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002EF80
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x18002F35C (-StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F540 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x18002FA6C (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAK@Z @ 0x18002FC70 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180077F78 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::ActivationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int v3; // r14d
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-E0h]
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-C0h] BYREF
  void **v14; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+70h] [rbp-90h]
  int *v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h] BYREF
  char v20; // [rsp+8Ch] [rbp-74h]
  _BYTE v21[32]; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+B0h] [rbp-50h] BYREF
  const char *v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  char v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  _BYTE v27[144]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v28; // [rsp+168h] [rbp+68h]
  __int64 v29; // [rsp+170h] [rbp+70h]
  __int64 v30; // [rsp+178h] [rbp+78h]
  __int64 v31; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  Context[1] = (LPVOID)-2LL;
  v3 = (int)a3;
  v14 = &wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v15[0] = 0LL;
  v15[1] = &v14;
  v15[2] = 0LL;
  v16 = 0;
  v17 = &v22;
  v18 = &v19;
  v19 = 0;
  v20 = 0;
  v25 = 0;
  v22 = 0;
  v23 = "ActivationRequested";
  v24 = 0LL;
  v26 = 1LL;
  v28 = 0LL;
  memset_0(v27, 0, sizeof(v27));
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v14 = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  ShellPositionerTelemetry::ActivationRequested::StartActivity((ShellPositionerTelemetry::ActivationRequested *)&v14);
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 506LL;
  }
  else
  {
    v10 = v3;
    v6 = ShellPositionerManager::HandleActivationRequest((char *)this - 112, 1LL, a2, v11);
    v7 = v6;
    if ( v6 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v14);
      v7 = 0;
      goto LABEL_4;
    }
    v9 = 507LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v6,
    v10);
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v14 = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v14);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v31);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)v27);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v22);
  if ( v19 == 1 )
  {
    v19 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      Context[0] = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v21);
  }
  v19 = 3;
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  return v7;
}
