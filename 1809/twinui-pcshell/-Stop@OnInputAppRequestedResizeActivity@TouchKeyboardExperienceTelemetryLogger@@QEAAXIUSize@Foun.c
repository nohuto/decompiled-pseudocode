/*
 * XREFs of ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIUSize@Foundation@Windows@@_N11J@Z @ 0x1802C7414
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1802C41E0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180112D88 (-zInternalStop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1802BEB1C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
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
  LPVOID v12; // rax
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
  EVENT_DATA_DESCRIPTOR v29; // [rsp+50h] [rbp-B0h] BYREF
  int *v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  DWORD *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  int *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  char *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  char *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  int *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+150h] [rbp+50h] BYREF
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+170h] [rbp+70h] BYREF
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+190h] [rbp+90h] BYREF
  DWORD *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v69; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+208h] [rbp+108h]
  __int64 *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  char *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]
  char *v75; // [rsp+230h] [rbp+130h]
  __int64 v76; // [rsp+238h] [rbp+138h]
  char *v77; // [rsp+240h] [rbp+140h]
  __int64 v78; // [rsp+248h] [rbp+148h]
  char *v79; // [rsp+250h] [rbp+150h]
  __int64 v80; // [rsp+258h] [rbp+158h]
  char *v81; // [rsp+260h] [rbp+160h]
  __int64 v82; // [rsp+268h] [rbp+168h]
  int v83; // [rsp+2B8h] [rbp+1B8h] BYREF
  char v84; // [rsp+2C8h] [rbp+1C8h] BYREF

  v84 = a4;
  v83 = a2;
  v7 = *(int **)(a1 + 48);
  v25 = a3;
  v9 = v7[19];
  if ( v9 < 0 && v9 == v7[21] )
    v10 = v7 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  v12 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v11,
          (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v10 )
  {
    if ( **((_DWORD **)v12 + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v12 + 1), 0x400000000000uLL) )
    {
      v13 = (const CHAR *)*((_QWORD *)v10 + 6);
      v26 = v10[1];
      v49 = &v26;
      v50 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v10 + 15);
      v52 = v10 + 14;
      v53 = 4LL;
      TlgCreateSz(&v54, v14);
      v15 = (const WCHAR *)*((_QWORD *)v10 + 2);
      v27 = *v10;
      v55 = &v27;
      v56 = 4LL;
      TlgCreateWsz(&v57, v15);
      v16 = (const CHAR *)*((_QWORD *)v10 + 8);
      v28 = v10[6];
      v58 = &v28;
      v59 = 4LL;
      TlgCreateSz(&v60, v16);
      v17 = (const CHAR *)*((_QWORD *)v10 + 10);
      v23 = v10[18];
      v61 = &v23;
      v62 = 4LL;
      TlgCreateSz(&v63, v17);
      TlgCreateWsz(&v64, *((LPCWSTR *)v10 + 11));
      v18 = (const CHAR *)*((_QWORD *)v10 + 13);
      v24 = v10[24];
      v65 = &v24;
      v66 = 4LL;
      TlgCreateSz(&v67, v18);
      TlgCreateWsz(&v68, *((LPCWSTR *)v10 + 14));
      v70 = 4LL;
      v71 = &v25;
      v69 = &v83;
      v73 = (char *)&v25 + 4;
      v77 = &a5;
      v75 = &v84;
      v79 = &a6;
      v81 = &a7;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 1LL;
      v78 = 1LL;
      v80 = 1LL;
      v82 = 4LL;
      TlgWrite(v19, &unk_180463EBF, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    v20 = (const struct _TlgProvider_t *)*((_QWORD *)v12 + 1);
    if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v12 + 1), 0x400000000000uLL) )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v30 = &v24;
      v24 = v21;
      v31 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 4LL;
      v23 = CurrentThreadId;
      v42 = &a5;
      v32 = &v23;
      v44 = &a6;
      v34 = &v83;
      v35 = 4LL;
      v36 = &v25;
      v38 = (char *)&v25 + 4;
      v40 = &v84;
      v46 = &a7;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      TlgWrite(v20, &unk_1804640D2, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0xBu, &v29);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
