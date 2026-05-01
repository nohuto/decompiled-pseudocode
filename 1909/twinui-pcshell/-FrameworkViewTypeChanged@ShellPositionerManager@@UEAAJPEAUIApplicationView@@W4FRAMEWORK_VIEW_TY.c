/*
 * XREFs of ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180070150
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003B0D0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0srwlock@wil@@QEAA@XZ @ 0x18003B63C (--0srwlock@wil@@QEAA@XZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x18003B64C (--0StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ??0IFailureCallback@details@wil@@QEAA@XZ @ 0x18003B684 (--0IFailureCallback@details@wil@@QEAA@XZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x18003B6BC (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003B6E4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180040810 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ @ 0x180070300 (-StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007E8C0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::FrameworkViewTypeChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall *v6)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID Context[2]; // [rsp+30h] [rbp-D0h] BYREF
  void **v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  LPVOID *v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h] BYREF
  char v22; // [rsp+7Ch] [rbp-84h]
  _BYTE v23[32]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v24[3]; // [rsp+A0h] [rbp-60h] BYREF
  char v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  _BYTE v27[160]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v28[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v29; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  Context[1] = (LPVOID)-2LL;
  wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v16);
  v16 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v17[0] = 0LL;
  v17[1] = &v16;
  v17[2] = 0LL;
  v18 = 0;
  v19 = v24;
  v20 = &v21;
  v21 = 0;
  v22 = 0;
  v25 = 0;
  LODWORD(v24[0]) = 0;
  v24[1] = "FrameworkViewTypeChanged";
  v24[2] = 0LL;
  v26 = 1LL;
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v27);
  wil::srwlock::srwlock((wil::srwlock *)v28);
  v29 = 0LL;
  v16 = &ShellPositionerTelemetry::FrameworkViewTypeChanged::`vftable';
  ShellPositionerTelemetry::FrameworkViewTypeChanged::StartActivity((ShellPositionerTelemetry::FrameworkViewTypeChanged *)&v16);
  *(_QWORD *)v13 = 0LL;
  v6 = (*a2)[10];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v13);
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))v6)(
         a2,
         v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 560LL;
  }
  else
  {
    v7 = ShellPositionerManager::HandleFrameworkViewTypeChange(
           (ShellPositionerManager *)(a1 - 120),
           a3,
           a2,
           *(IUnknown **)v13);
    v8 = v7;
    if ( v7 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v16);
      v8 = 0;
      goto LABEL_4;
    }
    v10 = 561LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v7,
    v13[0]);
LABEL_4:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v13);
  v16 = &ShellPositionerTelemetry::FrameworkViewTypeChanged::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v16);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v29);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)v27);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v24);
  if ( v21 == 1 )
  {
    v21 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      Context[0] = &unk_1805C2098;
      v12 = operator new(v11, &unk_1805C2098);
      *v12 = &ImmersiveIconsLogging::`vftable';
      v12[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v23);
  }
  v21 = 3;
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  return v8;
}
