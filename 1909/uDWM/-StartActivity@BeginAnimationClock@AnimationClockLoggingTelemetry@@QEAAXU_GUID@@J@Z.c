/*
 * XREFs of ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180007260
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180006E34 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000882C (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000889C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180008AEC (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F688 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
        AnimationClockLoggingTelemetry::BeginAnimationClock *this,
        struct _GUID *a2,
        int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  DWORD v10; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  void *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  DWORD *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  struct _GUID *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  __int64 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]

  v3 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<AnimationClockLogging>::get(
                                           v6,
                                           lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 4u )
  {
    v15 = 0;
    v13 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`28'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v10 = CurrentThreadId;
    v16 = &v10;
    v22 = &v11;
    v17 = 4;
    v19 = a2;
    v20 = 16;
    v11 = v3;
    v23 = 8;
    v9 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v7, &unk_1800C92FB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AnimationClockLoggingTelemetry::BeginAnimationClock *)((char *)this + 8));
}
