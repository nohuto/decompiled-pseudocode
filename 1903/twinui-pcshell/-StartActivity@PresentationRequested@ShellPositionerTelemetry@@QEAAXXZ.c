/*
 * XREFs of ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x18039607C
 * Callers:
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180395450 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B918 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::PresentationRequested::StartActivity(
        ShellPositionerTelemetry::PresentationRequested *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  const struct _TlgProvider_t *v4; // rdi
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
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = &unk_180599C78;
    v3 = operator new(v2, &unk_180599C78);
    *v3 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v3 = &ImmersiveIconsLogging::`vftable';
    v3[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v11 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v12 = 8;
    v13 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v15 = 4;
    v16 = 0;
    v5 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v4, &unk_1804DDFF4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v5, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ShellPositionerTelemetry::PresentationRequested *)((char *)this + 8));
}
