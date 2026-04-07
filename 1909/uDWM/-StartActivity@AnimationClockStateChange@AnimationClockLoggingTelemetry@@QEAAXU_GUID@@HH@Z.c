/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x1800085EC
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180008334 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000882C (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000889C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180008AEC (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F688 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
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
  DWORD v10; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v12; // [rsp+68h] [rbp-19h]
  int v13; // [rsp+70h] [rbp-11h]
  int v14; // [rsp+74h] [rbp-Dh]
  DWORD *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  struct _GUID *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  int *v21; // [rsp+98h] [rbp+17h]
  int v22; // [rsp+A0h] [rbp+1Fh]
  int v23; // [rsp+A4h] [rbp+23h]
  int *v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]
  int v27; // [rsp+F8h] [rbp+77h] BYREF
  int v28; // [rsp+100h] [rbp+7Fh] BYREF

  v28 = a4;
  v27 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<AnimationClockLogging>::get(
                                           v6,
                                           lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    v14 = 0;
    v12 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`28'::_TlgActivityPrivacyTag;
    v13 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v10 = CurrentThreadId;
    v15 = &v10;
    v21 = &v27;
    v24 = &v28;
    v16 = 4;
    v18 = a2;
    v19 = 16;
    v22 = 4;
    v25 = 4;
    v9 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v7, &unk_1800C9351, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AnimationClockLoggingTelemetry::AnimationClockStateChange *)((char *)this + 8));
}
