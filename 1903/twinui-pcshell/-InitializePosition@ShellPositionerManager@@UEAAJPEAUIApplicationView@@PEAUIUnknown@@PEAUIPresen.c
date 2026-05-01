/*
 * XREFs of ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180046BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ @ 0x180047660 (-StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ??0srwlock@wil@@QEAA@XZ @ 0x180047F1C (--0srwlock@wil@@QEAA@XZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x180047F2C (--0StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ??0IFailureCallback@details@wil@@QEAA@XZ @ 0x180047F64 (--0IFailureCallback@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180048340 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180048508 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180048530 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180048814 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
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
__int64 __fastcall ShellPositionerManager::InitializePosition(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  int v4; // r15d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 *v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v19; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+80h] [rbp-80h]
  int *v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h] BYREF
  char v25; // [rsp+9Ch] [rbp-64h]
  _BYTE v26[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+C0h] [rbp-40h] BYREF
  const char *v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+D0h] [rbp-30h]
  char v30; // [rsp+D8h] [rbp-28h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[160]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v33[8]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v34; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  Context[1] = (LPVOID)-2LL;
  v4 = (int)a3;
  wil::details::IFailureCallback::IFailureCallback((wil::details::IFailureCallback *)&v19);
  v19 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v20[0] = 0LL;
  v20[1] = &v19;
  v20[2] = 0LL;
  v21 = 0;
  v22 = &v27;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "InitializePosition";
  v29 = 0LL;
  v31 = 1LL;
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v32);
  wil::srwlock::srwlock((wil::srwlock *)v33);
  v34 = 0LL;
  v19 = &ShellPositionerTelemetry::InitializePosition::`vftable';
  ShellPositionerTelemetry::InitializePosition::StartActivity((ShellPositionerTelemetry::InitializePosition *)&v19);
  v16 = 0LL;
  v7 = *((_QWORD *)this + 5);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v15 = &v16;
  v9 = v8(v7, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 513LL;
  }
  else
  {
    LODWORD(v15) = v4;
    v9 = ShellPositionerManager::HandleActivationRequest((char *)this - 112, 0LL, a2, v16);
    v10 = v9;
    if ( v9 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v19);
      v10 = 0;
      goto LABEL_4;
    }
    v12 = 514LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v9,
    (int)v15);
LABEL_4:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v19 = &ShellPositionerTelemetry::InitializePosition::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v19);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v34);
  wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)v32);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v27);
  if ( v24 == 1 )
  {
    v24 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      Context[0] = &unk_180599C78;
      v14 = operator new(v13, &unk_180599C78);
      *v14 = &ImmersiveIconsLogging::`vftable';
      v14[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v26);
  }
  v24 = 3;
  if ( v21 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
  return v10;
}
