/*
 * XREFs of ?StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ @ 0x18007E000
 * Callers:
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18007DE20 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007E0A8 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::InitializePositionWithShowCommand::StartActivity(
        ShellPositionerTelemetry::InitializePositionWithShowCommand *this)
{
  unsigned __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rdi
  _QWORD *v4; // rax
  const GUID *v5; // rax
  UINT32 cData; // edx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context[3]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+78h] [rbp+27h]
  int v12; // [rsp+80h] [rbp+2Fh]
  int v13; // [rsp+84h] [rbp+33h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+94h] [rbp+43h]

  Context[1] = (LPVOID)-2LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = &unk_1805C2098;
    v4 = operator new(v2, &unk_1805C2098);
    *v4 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v4 = &ImmersiveIconsLogging::`vftable';
    v4[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v11 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v12 = 8;
    v13 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v15 = 4;
    v16 = 0;
    v5 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v3, &unk_1805048A4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v5, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ShellPositionerTelemetry::InitializePositionWithShowCommand *)((char *)this + 8));
}
