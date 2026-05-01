/*
 * XREFs of ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18006EDE0
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
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x18003B9C4 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ @ 0x18006EFC8 (-StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ.c)
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
__int64 __fastcall ShellPositionerManager::InitializePosition(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IApplicationView *a5)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  struct IImmersiveMonitor **v17; // [rsp+20h] [rbp-E0h]
  struct IImmersiveMonitor *v18; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v21; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+80h] [rbp-80h]
  LPVOID *v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h] BYREF
  char v27; // [rsp+9Ch] [rbp-64h]
  _BYTE v28[32]; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID v29[3]; // [rsp+C0h] [rbp-40h] BYREF
  char v30; // [rsp+D8h] [rbp-28h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[160]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v33[8]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v34; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  Context[1] = (LPVOID)-2LL;
  wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v21);
  v21 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v22[0] = 0LL;
  v22[1] = &v21;
  v22[2] = 0LL;
  v23 = 0;
  v24 = v29;
  v25 = &v26;
  v26 = 0;
  v27 = 0;
  v30 = 0;
  LODWORD(v29[0]) = 0;
  v29[1] = "InitializePosition";
  v29[2] = 0LL;
  v31 = 1LL;
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v32);
  wil::srwlock::srwlock((wil::srwlock *)v33);
  v34 = 0LL;
  v21 = &ShellPositionerTelemetry::InitializePosition::`vftable';
  ShellPositionerTelemetry::InitializePosition::StartActivity((ShellPositionerTelemetry::InitializePosition *)&v21);
  v18 = 0LL;
  v9 = *((_QWORD *)this + 5);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v9 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  v17 = &v18;
  v11 = v10(v9, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  v12 = v11;
  if ( v11 < 0 )
  {
    v14 = 513LL;
  }
  else
  {
    v11 = ShellPositionerManager::HandleActivationRequest(
            (unsigned int *)this - 28,
            0,
            a2,
            v18,
            a3,
            (__int64)a4,
            (int)a5,
            0LL);
    v12 = v11;
    if ( v11 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v21);
      v12 = 0;
      goto LABEL_4;
    }
    v14 = 514LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v11,
    (int)v17);
LABEL_4:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  v21 = &ShellPositionerTelemetry::InitializePosition::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v21);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v34);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)v32);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v29);
  if ( v26 == 1 )
  {
    v26 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      Context[0] = &unk_1805C2098;
      v16 = operator new(v15, &unk_1805C2098);
      *v16 = &ImmersiveIconsLogging::`vftable';
      v16[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v28);
  }
  v26 = 3;
  if ( v23 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
  return v12;
}
