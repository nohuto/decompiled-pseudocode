/*
 * XREFs of ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1803961E0
 * Callers:
 *     ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180397470 (-TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180173BB4 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::TMChangeHandler::StartActivity(
        ShellPositionerTelemetry::TMChangeHandler *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  const struct _TlgProvider_t *v6; // rdi
  const GUID *v7; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-35h] BYREF
  LPVOID Context[3]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+78h] [rbp+7h]
  int v13; // [rsp+80h] [rbp+Fh]
  int v14; // [rsp+84h] [rbp+13h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF

  Context[1] = (LPVOID)-2LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = &unk_180599C78;
    v5 = operator new(v4, &unk_180599C78);
    *v5 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v5 = &ImmersiveIconsLogging::`vftable';
    v5[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x400000000000uLL) )
  {
    v12 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v13 = 8;
    v14 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v16 = 4;
    v17 = 0;
    TlgCreateWsz(&pDesc, a2);
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1804DE041, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ShellPositionerTelemetry::TMChangeHandler *)((char *)this + 8));
}
