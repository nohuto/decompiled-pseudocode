/*
 * XREFs of ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802BAA68
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B99E0 (-PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1802BEB1C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802BED2C (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *this)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rdi
  const GUID *v4; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                           v2,
                                           lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v9 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v8 = 4;
    v4 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v3, &unk_180462CC8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v4, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)((char *)this + 8));
}
