/*
 * XREFs of ??$?0PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1$$QEAI$$QEA_N3AEA_N@Z @ 0x180012074
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800149C0 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180013464 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001358C (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18001358C.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
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
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+38h] [rbp-C8h] BYREF
  char v20; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  DWORD *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  char *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  char *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  char *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    "WaitForWindowReadyForPresentation");
  *(_QWORD *)a1 = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  v11 = *a4;
  v12 = *a3;
  v20 = *a8;
  v19 = *a7;
  v18 = *a6;
  v23 = *a5;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
  {
    v28 = 0;
    v26 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v27 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v31 = 0;
    v22 = CurrentThreadId;
    v30 = 4;
    v29 = &v22;
    TlgCreateWsz(&pDesc, v12);
    TlgCreateWsz(&v33, v11);
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v37 = &v18;
    v40 = &v19;
    v34 = &v23;
    v43 = &v20;
    v35 = v16;
    v38 = v16 - 3;
    v41 = v16 - 3;
    v44 = v16 - 3;
    v17 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v13, &unk_18050B44D, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v17, 0xAu, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  return a1;
}
