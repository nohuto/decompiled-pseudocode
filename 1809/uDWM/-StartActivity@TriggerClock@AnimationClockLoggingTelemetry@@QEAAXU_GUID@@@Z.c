/*
 * XREFs of ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800397D8
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180039610 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180027D30 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180027D9C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028034 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004D948 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall AnimationClockLoggingTelemetry::TriggerClock::StartActivity(
        AnimationClockLoggingTelemetry::TriggerClock *this,
        struct _GUID *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rdi
  const GUID *v7; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  struct _GUID *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<AnimationClockLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    v12 = 0;
    v15 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v11 = 4;
    v13 = a2;
    v14 = 16;
    v7 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v6, &unk_1800C3042, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (AnimationClockLoggingTelemetry::TriggerClock *)((char *)this + 8),
      v5);
}
