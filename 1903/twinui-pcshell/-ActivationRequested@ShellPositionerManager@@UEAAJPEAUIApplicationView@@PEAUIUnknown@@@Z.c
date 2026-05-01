/*
 * XREFs of ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180047D40
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0srwlock@wil@@QEAA@XZ @ 0x180047F1C (--0srwlock@wil@@QEAA@XZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x180047F2C (--0StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ??0IFailureCallback@details@wil@@QEAA@XZ @ 0x180047F64 (--0IFailureCallback@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x180048144 (-StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180048340 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180048508 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180048530 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180048814 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007C32C (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
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
  __int64 v8; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v17; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[3]; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+80h] [rbp-80h]
  int *v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h] BYREF
  char v23; // [rsp+9Ch] [rbp-64h]
  _BYTE v24[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+C0h] [rbp-40h] BYREF
  const char *v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  char v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h]
  _BYTE v30[160]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v31[8]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v32; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  Context[1] = (LPVOID)-2LL;
  v3 = (int)a3;
  wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v17);
  v17 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v18[0] = 0LL;
  v18[1] = &v17;
  v18[2] = 0LL;
  v19 = 0;
  v20 = &v25;
  v21 = &v22;
  v22 = 0;
  v23 = 0;
  v28 = 0;
  v25 = 0;
  v26 = "ActivationRequested";
  v27 = 0LL;
  v29 = 1LL;
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v30);
  wil::srwlock::srwlock((wil::srwlock *)v31);
  v32 = 0LL;
  v17 = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  ShellPositionerTelemetry::ActivationRequested::StartActivity((ShellPositionerTelemetry::ActivationRequested *)&v17);
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 545LL;
  }
  else
  {
    v13 = v3;
    v6 = ShellPositionerManager::HandleActivationRequest((char *)this - 112, 1LL, a2, v14);
    v7 = v6;
    if ( v6 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v17);
      v7 = 0;
      goto LABEL_4;
    }
    v10 = 546LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v6,
    v13);
LABEL_4:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v17 = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v17);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v32);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)v30);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v25);
  if ( v22 == 1 )
  {
    v22 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      Context[0] = &unk_180599C78;
      v12 = operator new(v11, &unk_180599C78);
      *v12 = &ImmersiveIconsLogging::`vftable';
      v12[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v24);
  }
  v22 = 3;
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  return v7;
}
