/*
 * XREFs of StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004FD70
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C0006510 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataCriticalData(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r11
  __int64 v4; // r8
  const WCHAR *v5; // r9
  LPCWSTR v6; // r10
  __int64 v7; // r11
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+31h] [rbp-CFh] BYREF
  char v12; // [rsp+32h] [rbp-CEh] BYREF
  char v13; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  char *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  __int64 *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  int *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  int *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  __int64 *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  __int64 *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+200h] [rbp+100h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+210h] [rbp+110h]
  __int64 v65; // [rsp+218h] [rbp+118h]
  unsigned __int16 *v66; // [rsp+220h] [rbp+120h]
  __int64 v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+230h] [rbp+130h]
  int v69; // [rsp+238h] [rbp+138h]
  int v70; // [rsp+23Ch] [rbp+13Ch]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x800000000000uLL) )
    {
      v4 = *(_QWORD *)(v2 + 24);
      v15 = *(_DWORD *)(v4 + 56);
      v10 = *(_BYTE *)(v2 + 96);
      v11 = *(_BYTE *)(v2 + 97);
      v12 = *(_BYTE *)(v2 + 98);
      v5 = *(const WCHAR **)(v4 + 4864);
      v21 = g_SystemUptime_s;
      v13 = *(_BYTE *)(v3 + 8);
      v22 = *(_QWORD *)(v3 + 312);
      v16 = *(_DWORD *)(v2 + 788);
      v17 = *(_DWORD *)(v2 + 792);
      v18 = *(_DWORD *)(v3 + 328);
      v19 = *(_DWORD *)(v2 + 2280);
      v20 = *(_DWORD *)(v2 + 2288);
      v23 = *(_QWORD *)(v3 + 336);
      v24 = *(_QWORD *)(v3 + 344);
      *(_QWORD *)&hProvider.LevelPlus1 = *(_QWORD *)v3 / 0x2710uLL;
      v26 = 16LL;
      hProvider.CallbackContext = (void *)(v4 + 5256);
      v27 = a1 + 1976;
      v29 = &v15;
      v31 = &v10;
      v33 = &v11;
      v14 = 3 * qword_1C0061560;
      v35 = &v12;
      v28 = 16LL;
      v30 = 4LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      TlgCreateWsz(&pDesc, v5);
      TlgCreateSz(&v38, (LPCSTR)(a1 + 160));
      TlgCreateSz(&v39, (LPCSTR)(a1 + 169));
      v41 = 8LL;
      v42 = &v13;
      v40 = &v21;
      v44 = &v22;
      v46 = &v16;
      v43 = 1LL;
      v45 = 8LL;
      v47 = 4LL;
      v48 = &v17;
      v49 = 4LL;
      v50 = &v18;
      v51 = 4LL;
      v52 = &v19;
      v54 = &v20;
      v56 = &v23;
      v58 = &v24;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 8LL;
      v59 = 8LL;
      TlgCreateWsz(&v60, L"Read, Write");
      TlgCreateWsz(&v61, v6);
      TlgCreateWsz(&v62, L"Flush, Unmap");
      TlgCreateWsz(&v63, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v65 = 8LL;
      v66 = &v14;
      v69 = 8 * v14;
      p_hProvider = &hProvider;
      v67 = 2LL;
      v68 = v7;
      v70 = 0;
      TlgWrite(&hProvider, &unk_1C0058730, v8, v9, 0x1Cu, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
}
