/*
 * XREFs of ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x180086EF8
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180088A40 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180009D00 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000A60C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F7B8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18008AACC (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(
        WindowFrameLoggingTelemetry::StopWindowCapture *this,
        int a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  DWORD v9; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  void *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  DWORD *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  int *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  int *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int v23; // [rsp+D8h] [rbp+6Fh] BYREF
  int v24; // [rsp+E0h] [rbp+77h] BYREF

  v24 = a3;
  v23 = a2;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<WindowFrameLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v13 = 0;
    v11 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`19'::_TlgActivityPrivacyTag;
    v12 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v9 = CurrentThreadId;
    v14 = &v9;
    v17 = &v23;
    v20 = &v24;
    v15 = 4;
    v18 = 4;
    v21 = 4;
    v8 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1800C7FE4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::StopWindowCapture *)((char *)this + 8),
      v5);
}
