/*
 * XREFs of ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800B2FA0
 * Callers:
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800B29AC (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000A34C (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000A3BC (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000A60C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F7B8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall AnimationClockLoggingTelemetry::GetCommitHandle::StartActivity(
        AnimationClockLoggingTelemetry::GetCommitHandle *this,
        struct _GUID *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rdi
  const GUID *v7; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  void *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  struct _GUID *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<AnimationClockLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u )
  {
    v12 = 0;
    v10 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`19'::_TlgActivityPrivacyTag;
    v11 = 8;
    v15 = 0;
    v18 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v14 = 4;
    v16 = a2;
    v17 = 16;
    v7 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1800C925C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (AnimationClockLoggingTelemetry::GetCommitHandle *)((char *)this + 8),
      v5);
}
