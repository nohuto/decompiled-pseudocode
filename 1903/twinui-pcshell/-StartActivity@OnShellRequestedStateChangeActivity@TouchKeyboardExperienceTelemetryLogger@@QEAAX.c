/*
 * XREFs of ?StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBG_N22@Z @ 0x180325CB8
 * Callers:
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAI$$QEAPEBGAEA_N3$$QEA_N@Z @ 0x18031C014 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellReque.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetMessage@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXPEBDZZ @ 0x1803143D8 (-SetMessage@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18031B8D0 (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAA.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::StartActivity(
        __int64 a1,
        int a2,
        int a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  const struct _TlgProvider_t *v11; // rdi
  const GUID *v12; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-A1h] BYREF
  int v14; // [rsp+34h] [rbp-9Dh] BYREF
  int v15; // [rsp+38h] [rbp-99h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-91h] BYREF
  void *v17; // [rsp+60h] [rbp-71h]
  int v18; // [rsp+68h] [rbp-69h]
  int v19; // [rsp+6Ch] [rbp-65h]
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-61h]
  int v21; // [rsp+78h] [rbp-59h]
  int v22; // [rsp+7Ch] [rbp-55h]
  int *v23; // [rsp+80h] [rbp-51h]
  int v24; // [rsp+88h] [rbp-49h]
  int v25; // [rsp+8Ch] [rbp-45h]
  int *v26; // [rsp+90h] [rbp-41h]
  int v27; // [rsp+98h] [rbp-39h]
  int v28; // [rsp+9Ch] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-31h] BYREF
  char *v30; // [rsp+B0h] [rbp-21h]
  int v31; // [rsp+B8h] [rbp-19h]
  int v32; // [rsp+BCh] [rbp-15h]
  char *v33; // [rsp+C0h] [rbp-11h]
  int v34; // [rsp+C8h] [rbp-9h]
  int v35; // [rsp+CCh] [rbp-5h]
  char *v36; // [rsp+D0h] [rbp-1h]
  int v37; // [rsp+D8h] [rbp+7h]
  int v38; // [rsp+DCh] [rbp+Bh]

  v15 = a3;
  v14 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::SetMessage(
    a1,
    "View type: %u, input app state: %u, reason: %ls",
    a2,
    a3,
    a4);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v9,
          (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v11 = (const struct _TlgProvider_t *)v10[1];
  if ( *(_DWORD *)v11 > 5u && TlgKeywordOn((TraceLoggingHProvider)v10[1], 0x400000000000uLL) )
  {
    v19 = 0;
    v17 = &`Win32BackedViewHostItemTelemetry::PortFromHolographic::StopActivity'::`10'::_TlgActivityPrivacyTag;
    v18 = 8;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v23 = &v14;
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v26 = &v15;
    TlgCreateWsz(&pDesc, a4);
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v33 = &a6;
    v30 = &a5;
    v36 = &a7;
    v31 = 1;
    v34 = 1;
    v37 = 1;
    v12 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v11, &unk_1804DAED2, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v12, 0xAu, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
