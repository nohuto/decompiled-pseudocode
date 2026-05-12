/*
 * XREFs of StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004E078
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C000C98C (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataCriticalData(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const WCHAR *v6; // r9
  LPCWSTR v7; // r10
  __int64 v8; // r11
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  char v14; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  char *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  __int64 *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  int *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  int *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  int *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  int *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  __int64 *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  __int64 *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+220h] [rbp+120h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+230h] [rbp+130h]
  __int64 v69; // [rsp+238h] [rbp+138h]
  unsigned __int16 *v70; // [rsp+240h] [rbp+140h]
  __int64 v71; // [rsp+248h] [rbp+148h]
  __int64 v72; // [rsp+250h] [rbp+150h]
  int v73; // [rsp+258h] [rbp+158h]
  int v74; // [rsp+25Ch] [rbp+15Ch]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x800000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v16 = *(_DWORD *)(v5 + 56);
      v11 = *(_BYTE *)(v4 + 96);
      v12 = *(_BYTE *)(v4 + 97);
      v13 = *(_BYTE *)(v4 + 98);
      v17 = *(_DWORD *)(v5 + 4356);
      v6 = *(const WCHAR **)(v5 + 4800);
      v23 = g_SystemUptime_s;
      v14 = *(_BYTE *)(a2 + 296);
      v24 = *(_QWORD *)(a2 + 600);
      v18 = *(_DWORD *)(v4 + 556);
      v19 = *(_DWORD *)(v4 + 560);
      v20 = *(_DWORD *)(a2 + 616);
      v21 = *(_DWORD *)(v4 + 2008);
      v22 = *(_DWORD *)(v4 + 2016);
      v25 = *(_QWORD *)(a2 + 624);
      v26 = *(_QWORD *)(a2 + 632);
      *(_QWORD *)&hProvider.LevelPlus1 = *(_QWORD *)(a2 + 288) / 0x2710uLL;
      hProvider.CallbackContext = (void *)16;
      v29 = 16LL;
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))(v5 + 5128);
      p_EnableCallback = &a1[30].EnableCallback;
      v30 = &v16;
      v32 = &v11;
      v34 = &v12;
      v36 = &v13;
      v15 = 3 * qword_1C0061480;
      v38 = &v17;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 4LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v41, (LPCSTR)a2);
      TlgCreateSz(&v42, (LPCSTR)(a2 + 9));
      TlgCreateSz(&v43, (LPCSTR)(a2 + 26));
      v45 = 8LL;
      v46 = &v14;
      v44 = &v23;
      v47 = 1LL;
      v48 = &v24;
      v49 = 8LL;
      v50 = &v18;
      v51 = 4LL;
      v52 = &v19;
      v54 = &v20;
      v56 = &v21;
      v58 = &v22;
      v60 = &v25;
      v62 = &v26;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 8LL;
      v63 = 8LL;
      TlgCreateWsz(&v64, L"Read, Write");
      TlgCreateWsz(&v65, v7);
      TlgCreateWsz(&v66, L"Flush, Unmap");
      TlgCreateWsz(&v67, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v69 = 8LL;
      v70 = &v15;
      v73 = 8 * v15;
      p_hProvider = &hProvider;
      v71 = 2LL;
      v72 = v8;
      v74 = 0;
      TlgWrite(&hProvider, &unk_1C00574FB, v9, v10, 0x1Eu, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
