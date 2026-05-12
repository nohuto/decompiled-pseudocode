/*
 * XREFs of StorpTelemetryLogUnitPerfDataMeasures @ 0x1C00117AC
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C0006510 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitPerfDataMeasures(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const WCHAR *v6; // r9
  unsigned __int64 v7; // kr00_8
  __int64 v8; // rbx
  __int64 v9; // r10
  LPCWSTR v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int16 v17; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  char *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  char *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  __int64 *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  int *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  __int64 *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  __int64 *v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int16 *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  __int64 v66; // [rsp+1F0h] [rbp+F0h]
  int v67; // [rsp+1F8h] [rbp+F8h]
  int v68; // [rsp+1FCh] [rbp+FCh]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+220h] [rbp+120h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+230h] [rbp+130h]
  __int64 v73; // [rsp+238h] [rbp+138h]
  unsigned __int16 *v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]
  __int64 v76; // [rsp+250h] [rbp+150h]
  int v77; // [rsp+258h] [rbp+158h]
  int v78; // [rsp+25Ch] [rbp+15Ch]

  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v19 = *(_DWORD *)(v5 + 56);
      v13 = *(_BYTE *)(v4 + 96);
      v14 = *(_BYTE *)(v4 + 97);
      v15 = *(_BYTE *)(v4 + 98);
      v6 = *(const WCHAR **)(v5 + 4864);
      v25 = g_SystemUptime_s;
      v16 = *((_BYTE *)a2 + 8);
      v26 = a2[39];
      v20 = *(_DWORD *)(v4 + 788);
      v21 = *(_DWORD *)(v4 + 792);
      v22 = *((_DWORD *)a2 + 82);
      v23 = *(_DWORD *)(v4 + 2280);
      v24 = *(_DWORD *)(v4 + 2288);
      v27 = a2[42];
      v28 = a2[43];
      v17 = WORD1(TelemetryPerfContext);
      v7 = *a2;
      v8 = a2[40];
      *(_QWORD *)&hProvider.LevelPlus1 = v7 / 0x2710;
      hProvider.CallbackContext = (void *)16;
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))(v5 + 5256);
      v30 = a1 + 1976;
      v32 = &v19;
      v34 = &v13;
      v36 = &v14;
      v18 = 3 * qword_1C0061560;
      v38 = &v15;
      v31 = 16LL;
      v33 = 4LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v41, (LPCSTR)(a1 + 160));
      TlgCreateSz(&v42, (LPCSTR)(a1 + 169));
      v44 = 8LL;
      v45 = &v16;
      v43 = &v25;
      v47 = &v26;
      v46 = 1LL;
      v48 = 8LL;
      v49 = &v20;
      v50 = 4LL;
      v51 = &v21;
      v52 = 4LL;
      v53 = &v22;
      v55 = &v23;
      v57 = &v24;
      v59 = &v27;
      v61 = &v28;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 8LL;
      v62 = 8LL;
      TlgCreateWsz(&v63, L"Read, Write");
      v64 = &v17;
      v67 = 8 * v17;
      v65 = 2LL;
      v66 = v9;
      v68 = 0;
      TlgCreateWsz(&v69, v10);
      TlgCreateWsz(&v70, L"Flush, Unmap");
      TlgCreateWsz(&v71, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v73 = 8LL;
      v74 = &v18;
      v77 = 8 * v18;
      p_hProvider = &hProvider;
      v75 = 2LL;
      v76 = v8;
      v78 = 0;
      TlgWrite(&hProvider, &unk_1C0059A5F, v11, v12, 0x1Eu, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
