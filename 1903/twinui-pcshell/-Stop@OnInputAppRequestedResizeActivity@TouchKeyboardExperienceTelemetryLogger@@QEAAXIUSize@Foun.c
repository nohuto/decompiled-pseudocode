/*
 * XREFs of ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foundation@Windows@@_N11J@Z @ 0x1803262FC
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180321DC0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013A4BC (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  int *v7; // rsi
  int v9; // eax
  int *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  TraceLoggingHProvider v19; // r10
  const struct _TlgProvider_t *v20; // rsi
  int v21; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  DWORD *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+D0h] [rbp-30h] BYREF
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+F0h] [rbp-10h] BYREF
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+110h] [rbp+10h] BYREF
  DWORD *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+140h] [rbp+40h] BYREF
  int *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+170h] [rbp+70h] BYREF
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  __int64 *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  char *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  char *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  char *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  char *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  char *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  int v69; // [rsp+238h] [rbp+138h] BYREF
  char v70; // [rsp+248h] [rbp+148h] BYREF

  v70 = a4;
  v69 = a2;
  v7 = *(int **)(a1 + 48);
  v25 = a3;
  v9 = v7[19];
  if ( v9 < 0 && v9 == v7[21] )
    v10 = v7 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v12 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v11,
          (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v10 )
  {
    if ( *(_DWORD *)v12[1] > 5u && TlgKeywordOn((TraceLoggingHProvider)v12[1], 0x400000000000uLL) )
    {
      v13 = (const CHAR *)*((_QWORD *)v10 + 6);
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v32 = 8LL;
      v33 = &v29;
      v26 = v10[1];
      v35 = (DWORD *)&v26;
      v29 = 0x1000000LL;
      v34 = 8LL;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v10 + 15);
      v38 = (__int64 *)(v10 + 14);
      v39 = 4LL;
      TlgCreateSz(&v40, v14);
      v15 = (const WCHAR *)*((_QWORD *)v10 + 2);
      v27 = *v10;
      v41 = &v27;
      v42 = 4LL;
      TlgCreateWsz(&v43, v15);
      v16 = (const CHAR *)*((_QWORD *)v10 + 8);
      v28 = v10[6];
      v44 = &v28;
      v45 = 4LL;
      TlgCreateSz(&v46, v16);
      v17 = (const CHAR *)*((_QWORD *)v10 + 10);
      v23 = v10[18];
      v47 = &v23;
      v48 = 4LL;
      TlgCreateSz(&v49, v17);
      TlgCreateWsz(&v50, *((LPCWSTR *)v10 + 11));
      v18 = (const CHAR *)*((_QWORD *)v10 + 13);
      v24 = v10[24];
      v51 = &v24;
      v52 = 4LL;
      TlgCreateSz(&v53, v18);
      TlgCreateWsz(&v54, *((LPCWSTR *)v10 + 14));
      v56 = 4LL;
      v57 = &v25;
      v55 = &v69;
      v59 = (char *)&v25 + 4;
      v63 = &a5;
      v61 = &v70;
      v58 = 4LL;
      v67 = &a7;
      v60 = 4LL;
      v62 = 1LL;
      v64 = 1LL;
      v65 = &a6;
      v66 = 1LL;
      v68 = 4LL;
      TlgWrite(v19, &unk_1804DC708, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x19u, &pData);
    }
  }
  else
  {
    v20 = (const struct _TlgProvider_t *)v12[1];
    if ( *(_DWORD *)v20 > 5u && TlgKeywordOn((TraceLoggingHProvider)v12[1], 0x400000000000uLL) )
    {
      v32 = 8LL;
      v31 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v33 = (__int64 *)&v24;
      v24 = v21;
      v34 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v36 = 4LL;
      v23 = CurrentThreadId;
      v43.Ptr = (ULONGLONG)&a5;
      v35 = &v23;
      v44 = (int *)&a6;
      pDesc.Ptr = (ULONGLONG)&v69;
      *(_QWORD *)&pDesc.Size = 4LL;
      v38 = &v25;
      v40.Ptr = (ULONGLONG)&v25 + 4;
      v41 = (int *)&v70;
      v46.Ptr = (ULONGLONG)&a7;
      v39 = 4LL;
      *(_QWORD *)&v40.Size = 4LL;
      v42 = 1LL;
      *(_QWORD *)&v43.Size = 1LL;
      v45 = 1LL;
      *(_QWORD *)&v46.Size = 4LL;
      TlgWrite(v20, &unk_1804DC64B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0xCu, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
