/*
 * XREFs of ??$?0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1AEBQEAUHWND__@@@Z @ 0x180061D28
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018E30 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_180018E30.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180044A08 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

__int64 __fastcall SingleViewExperienceTelemetry::Launch::Launch(
        __int64 a1,
        __int64 a2,
        const WCHAR **a3,
        const WCHAR **a4,
        __int64 *a5)
{
  const WCHAR *v8; // rdi
  const WCHAR *v9; // r14
  const struct _TlgProvider_t *v10; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v13; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-61h] BYREF
  DWORD v15; // [rsp+34h] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-59h] BYREF
  __int64 v17; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-41h] BYREF
  DWORD *v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+7Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+90h] [rbp-1h] BYREF
  __int64 *v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+ACh] [rbp+1Bh]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    (__int64)"Launch");
  *(_QWORD *)a1 = &SingleViewExperienceTelemetry::Launch::`vftable';
  v8 = *a4;
  v9 = *a3;
  v17 = *a5;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v21 = 0;
    v15 = CurrentThreadId;
    v20 = 4;
    v19 = &v15;
    TlgCreateWsz(&pDesc, v9);
    TlgCreateWsz(&v23, v8);
    v26 = 0;
    v24 = &v17;
    v25 = 8;
    v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v10, &unk_18046A975, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v13, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  return a1;
}
