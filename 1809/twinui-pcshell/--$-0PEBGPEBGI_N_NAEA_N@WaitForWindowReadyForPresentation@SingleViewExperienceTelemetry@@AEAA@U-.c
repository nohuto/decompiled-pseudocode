/*
 * XREFs of ??$?0PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1$$QEAI$$QEA_N3AEA_N@Z @ 0x180018240
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180017940 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
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

__int64 __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::WaitForWindowReadyForPresentation(
        __int64 a1,
        __int64 a2,
        const WCHAR **a3,
        const WCHAR **a4,
        int *a5,
        char *a6,
        char *a7,
        char *a8)
{
  const WCHAR *v11; // rdi
  const WCHAR *v12; // r14
  const struct _TlgProvider_t *v13; // rbx
  DWORD CurrentThreadId; // eax
  int v16; // r10d
  const GUID *v17; // rax
  char v18; // [rsp+30h] [rbp-B9h] BYREF
  char v19; // [rsp+38h] [rbp-B1h] BYREF
  char v20; // [rsp+40h] [rbp-A9h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-A1h] BYREF
  DWORD v22; // [rsp+4Ch] [rbp-9Dh] BYREF
  int v23; // [rsp+50h] [rbp-99h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-91h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-89h] BYREF
  DWORD *v26; // [rsp+80h] [rbp-69h]
  int v27; // [rsp+88h] [rbp-61h]
  int v28; // [rsp+8Ch] [rbp-5Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-49h] BYREF
  int *v31; // [rsp+B0h] [rbp-39h]
  int v32; // [rsp+B8h] [rbp-31h]
  int v33; // [rsp+BCh] [rbp-2Dh]
  char *v34; // [rsp+C0h] [rbp-29h]
  int v35; // [rsp+C8h] [rbp-21h]
  int v36; // [rsp+CCh] [rbp-1Dh]
  char *v37; // [rsp+D0h] [rbp-19h]
  int v38; // [rsp+D8h] [rbp-11h]
  int v39; // [rsp+DCh] [rbp-Dh]
  char *v40; // [rsp+E0h] [rbp-9h]
  int v41; // [rsp+E8h] [rbp-1h]
  int v42; // [rsp+ECh] [rbp+3h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    "WaitForWindowReadyForPresentation");
  *(_QWORD *)a1 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  v11 = *a4;
  v12 = *a3;
  v20 = *a8;
  v19 = *a7;
  v18 = *a6;
  v23 = *a5;
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
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v28 = 0;
    v22 = CurrentThreadId;
    v27 = 4;
    v26 = &v22;
    TlgCreateWsz(&pDesc, v12);
    TlgCreateWsz(&v30, v11);
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v34 = &v18;
    v37 = &v19;
    v31 = &v23;
    v40 = &v20;
    v32 = v16;
    v35 = v16 - 3;
    v38 = v16 - 3;
    v41 = v16 - 3;
    v17 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v13, &unk_18046A54B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v17, 9u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  return a1;
}
