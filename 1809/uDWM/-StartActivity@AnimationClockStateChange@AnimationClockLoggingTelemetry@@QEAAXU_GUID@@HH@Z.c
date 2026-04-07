/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180027AFC
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180027D30 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180027D9C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028034 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004D948 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        struct _GUID *a2,
        int a3,
        int a4)
{
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  DWORD v10; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  DWORD *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  struct _GUID *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  int *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  int *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  int v24; // [rsp+E8h] [rbp+77h] BYREF
  int v25; // [rsp+F0h] [rbp+7Fh] BYREF

  v25 = a4;
  v24 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<AnimationClockLogging>::get(
                                           v6,
                                           lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v10 = CurrentThreadId;
    v12 = &v10;
    v18 = &v24;
    v21 = &v25;
    v13 = 4;
    v15 = a2;
    v16 = 16;
    v19 = 4;
    v22 = 4;
    v9 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v7, &unk_1800C2FE9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AnimationClockLoggingTelemetry::AnimationClockStateChange *)((char *)this + 8));
}
