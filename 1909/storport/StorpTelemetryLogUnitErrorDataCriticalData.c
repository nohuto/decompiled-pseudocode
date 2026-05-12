/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004EEB8
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C000C148 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E520 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataCriticalData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r10d
  int v9; // r11d
  const WCHAR *v10; // rdx
  __int16 v11; // r10
  __int16 v12; // r11
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  char v18; // [rsp+33h] [rbp-CDh] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  void *v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  void *v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  void *v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+130h] [rbp+30h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  _QWORD *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  __int64 v65; // [rsp+1D0h] [rbp+D0h]
  _QWORD v66[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD v67[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  __int64 v70; // [rsp+210h] [rbp+110h]
  _DWORD v71[2]; // [rsp+218h] [rbp+118h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0062058 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x800000000000uLL) )
    {
      v6 = *(_QWORD *)(v4 + 24);
      v7 = (unsigned int)((_DWORD)v5 + 3);
      v8 = *(unsigned __int16 *)(a2 + 282);
      v9 = *(unsigned __int16 *)(a2 + 284);
      v15 = (_BYTE)v5 + 3;
      v19 = *(_DWORD *)(v6 + 56);
      v16 = *(_BYTE *)(a1 + 96);
      v17 = *(_BYTE *)(a1 + 97);
      v18 = *(_BYTE *)(a1 + 98);
      v20 = *(_DWORD *)(v6 + 4356);
      v10 = *(const WCHAR **)(v6 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v21 = *(_DWORD *)(a1 + 2288);
      v22 = *(_DWORD *)(a1 + 2292);
      v23 = *(_DWORD *)(a1 + 2296);
      v24 = *(_DWORD *)(a1 + 2300);
      v25 = *(_DWORD *)(a1 + 2112);
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v15;
      v29 = v6 + 5128;
      v26 = v8;
      v31 = a1 + 1976;
      v33 = &v19;
      v35 = &v16;
      v37 = &v17;
      v39 = &v18;
      v41 = &v20;
      v27 = v9;
      hProvider.CallbackContext = v5;
      v30 = 16LL;
      v32 = 16LL;
      v34 = v7;
      v36 = v5;
      v38 = v5;
      v40 = v5;
      v42 = v7;
      TlgCreateWsz(&pDesc, v10);
      TlgCreateSz(&v44, (LPCSTR)a2);
      TlgCreateSz(&v45, (LPCSTR)(a2 + 9));
      TlgCreateSz(&v46, (LPCSTR)(a2 + 26));
      v48 = 8LL;
      v49 = &v21;
      p_hProvider = &hProvider;
      v51 = &v22;
      v53 = &v23;
      v55 = &v24;
      v50 = v7;
      v52 = v7;
      v54 = v7;
      v56 = v7;
      v57 = &v25;
      v59 = &v26;
      v61 = &v27;
      v63 = v66;
      v65 = a1 + 2304;
      v66[1] = v67;
      v66[3] = a1 + 2344;
      v58 = v7;
      v67[0] = (unsigned __int16)(40 * v11);
      v68 = v71;
      v70 = a1 + 2744;
      v60 = v7;
      v71[0] = (unsigned __int16)(40 * v12);
      v62 = v7;
      v64 = 2LL;
      v66[0] = 40LL;
      v66[2] = 2LL;
      v67[1] = 0;
      v69 = 2LL;
      v71[1] = 0;
      TlgWrite(&hProvider, &unk_1C0058334, v13, v14, 0x1Cu, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
