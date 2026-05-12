/*
 * XREFs of StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000E0D8
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C000C98C (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataMeasures(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  const WCHAR *v7; // r9
  __int64 v8; // r10
  LPCWSTR v9; // r11
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  char v15; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int16 v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  char *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  char *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  __int64 *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  int *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  int *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  int *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  int *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  __int64 *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int16 *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  __int64 v65; // [rsp+1F0h] [rbp+F0h]
  int v66; // [rsp+1F8h] [rbp+F8h]
  int v67; // [rsp+1FCh] [rbp+FCh]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+220h] [rbp+120h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]
  unsigned __int16 *v73; // [rsp+240h] [rbp+140h]
  __int64 v74; // [rsp+248h] [rbp+148h]
  __int64 v75; // [rsp+250h] [rbp+150h]
  int v76; // [rsp+258h] [rbp+158h]
  int v77; // [rsp+25Ch] [rbp+15Ch]

  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v6 = *(_QWORD *)(a2 + 608);
      v18 = *(_DWORD *)(v5 + 56);
      v12 = *(_BYTE *)(v4 + 96);
      v13 = *(_BYTE *)(v4 + 97);
      v14 = *(_BYTE *)(v4 + 98);
      v7 = *(const WCHAR **)(v5 + 4800);
      v24 = g_SystemUptime_s;
      v15 = *(_BYTE *)(a2 + 296);
      v25 = *(_QWORD *)(a2 + 600);
      v19 = *(_DWORD *)(v4 + 556);
      v20 = *(_DWORD *)(v4 + 560);
      v21 = *(_DWORD *)(a2 + 616);
      v22 = *(_DWORD *)(v4 + 2008);
      v23 = *(_DWORD *)(v4 + 2016);
      v26 = *(_QWORD *)(a2 + 624);
      v27 = *(_QWORD *)(a2 + 632);
      v16 = WORD1(TelemetryPerfContext);
      *(_QWORD *)&hProvider.LevelPlus1 = *(_QWORD *)(a2 + 288) / 0x2710uLL;
      hProvider.CallbackContext = (void *)16;
      v30 = 16LL;
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))(v5 + 5128);
      p_EnableCallback = &a1[30].EnableCallback;
      v31 = &v18;
      v33 = &v12;
      v35 = &v13;
      v17 = 3 * qword_1C0061480;
      v37 = &v14;
      v32 = 4LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 1LL;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateSz(&v40, (LPCSTR)a2);
      TlgCreateSz(&v41, (LPCSTR)(a2 + 9));
      v43 = 8LL;
      v44 = &v15;
      v42 = &v24;
      v46 = &v25;
      v45 = 1LL;
      v47 = 8LL;
      v48 = &v19;
      v49 = 4LL;
      v50 = &v20;
      v51 = 4LL;
      v52 = &v21;
      v54 = &v22;
      v56 = &v23;
      v58 = &v26;
      v60 = &v27;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 8LL;
      v61 = 8LL;
      TlgCreateWsz(&v62, L"Read, Write");
      v63 = &v16;
      v66 = 8 * v16;
      v64 = 2LL;
      v65 = v8;
      v67 = 0;
      TlgCreateWsz(&v68, v9);
      TlgCreateWsz(&v69, L"Flush, Unmap");
      TlgCreateWsz(&v70, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v72 = 8LL;
      v73 = &v17;
      v76 = 8 * v17;
      p_hProvider = &hProvider;
      v74 = 2LL;
      v75 = v6;
      v77 = 0;
      TlgWrite(&hProvider, &unk_1C0058A2E, v10, v11, 0x1Eu, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
