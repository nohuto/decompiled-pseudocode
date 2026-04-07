/*
 * XREFs of ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x180086B54
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087160 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087360 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180009D00 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000A60C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F7B8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18008AACC (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this,
        HMONITOR a2,
        int a3,
        int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  DWORD v11; // [rsp+38h] [rbp-49h] BYREF
  HMONITOR v12; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v14; // [rsp+68h] [rbp-19h]
  int v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+74h] [rbp-Dh]
  DWORD *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  HMONITOR *v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+94h] [rbp+13h]
  int *v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A4h] [rbp+23h]
  int *v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+B0h] [rbp+2Fh]
  int v28; // [rsp+B4h] [rbp+33h]
  int v29; // [rsp+F8h] [rbp+77h] BYREF
  int v30; // [rsp+100h] [rbp+7Fh] BYREF

  v30 = a4;
  v29 = a3;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<WindowFrameLogging>::get(
                                        v6,
                                        (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v16 = 0;
    v14 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`19'::_TlgActivityPrivacyTag;
    v15 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v11 = CurrentThreadId;
    v17 = &v11;
    v20 = &v12;
    v23 = &v29;
    v26 = &v30;
    v18 = 4;
    v12 = a2;
    v21 = 8;
    v24 = 4;
    v27 = 4;
    v10 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v8, &unk_1800C7F70, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::StartDisplayCapture *)((char *)this + 8),
      v7);
}
