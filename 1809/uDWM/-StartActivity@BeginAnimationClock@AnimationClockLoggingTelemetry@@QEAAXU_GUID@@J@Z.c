/*
 * XREFs of ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18002E9E0
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18002E8C0 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180027D30 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180027D9C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028034 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004D948 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
        AnimationClockLoggingTelemetry::BeginAnimationClock *this,
        struct _GUID *a2,
        int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v8; // rdi
  const GUID *v9; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-29h] BYREF
  __int64 v11; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  struct _GUID *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  __int64 *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  v3 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<AnimationClockLogging>::get(
                                        v6,
                                        (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v19 = &v11;
    v14 = 4;
    v16 = a2;
    v17 = 16;
    v11 = v3;
    v20 = 8;
    v9 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v8, &unk_1800C2FA3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (AnimationClockLoggingTelemetry::BeginAnimationClock *)((char *)this + 8),
      v7);
}
