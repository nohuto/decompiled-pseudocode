/*
 * XREFs of ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800806DC
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180081BD0 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028034 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002AD60 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004D948 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180083D60 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::StartActivity(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this,
        int a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  DWORD v9; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  DWORD *v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+6Ch] [rbp+13h]
  int *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  int *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  int v21; // [rsp+D0h] [rbp+77h] BYREF

  v21 = a3;
  v20 = a2;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<WindowFrameLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v9 = CurrentThreadId;
    v11 = &v9;
    v14 = &v20;
    v17 = &v21;
    v12 = 4;
    v15 = 4;
    v18 = 4;
    v8 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1800C1DD5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::StopDisplayCapture *)((char *)this + 8),
      v5);
}
