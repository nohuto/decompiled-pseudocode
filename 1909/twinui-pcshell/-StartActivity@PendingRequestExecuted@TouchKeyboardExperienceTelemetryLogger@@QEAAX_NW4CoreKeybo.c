/*
 * XREFs of ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x180345744
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x18033F8F0 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18033B120 (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAA.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(
        __int64 a1,
        char a2,
        int a3,
        char a4,
        char a5)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  const struct _TlgProvider_t *v9; // rdi
  const GUID *v10; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-61h] BYREF
  int v12; // [rsp+3Ch] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  void *v14; // [rsp+68h] [rbp-31h]
  int v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+74h] [rbp-25h]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp-21h]
  int v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+84h] [rbp-15h]
  char *v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+94h] [rbp-5h]
  int *v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A4h] [rbp+Bh]
  char *v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B4h] [rbp+1Bh]
  char *v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C4h] [rbp+2Bh]
  char v32; // [rsp+100h] [rbp+67h] BYREF
  char v33; // [rsp+110h] [rbp+77h] BYREF

  v33 = a4;
  v32 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v8 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         v7,
         (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)v8[1];
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn((TraceLoggingHProvider)v8[1], 0x400000000000uLL) )
  {
    v16 = 0;
    v14 = &`Win32BackedViewHostItemTelemetry::PortFromHolographic::StopActivity'::`10'::_TlgActivityPrivacyTag;
    v15 = 8;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v20 = &v32;
    v23 = &v12;
    v26 = &v33;
    v29 = &a5;
    v18 = 4;
    v21 = 1;
    v12 = a3;
    v24 = 4;
    v27 = 1;
    v30 = 4;
    v10 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v9, &unk_1805017BA, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v10, 8u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
