/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0011CA4
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C002AAD0 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryLogUnitErrorDataMeasures(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rcx
  unsigned __int16 *v4; // r9
  __int64 v5; // rcx
  int v6; // r10d
  int v7; // r11d
  const WCHAR *v8; // rdx
  __int16 v9; // r10
  __int16 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+39h] [rbp-CFh] BYREF
  char v16; // [rsp+3Bh] [rbp-CDh] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int16 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  char *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  char *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+128h] [rbp+20h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  int *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  int *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  int *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  int *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  int *v54; // [rsp+188h] [rbp+80h]
  __int64 v55; // [rsp+190h] [rbp+88h]
  int *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  int *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  _QWORD *v60; // [rsp+1B8h] [rbp+B0h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  __int64 v62; // [rsp+1C8h] [rbp+C0h]
  _QWORD v63[4]; // [rsp+1D0h] [rbp+C8h] BYREF
  _DWORD v64[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  _DWORD *v65; // [rsp+1F8h] [rbp+F0h]
  __int64 v66; // [rsp+200h] [rbp+F8h]
  __int64 v67; // [rsp+208h] [rbp+100h]
  _DWORD v68[2]; // [rsp+210h] [rbp+108h] BYREF
  int *v69; // [rsp+218h] [rbp+110h]
  __int64 v70; // [rsp+220h] [rbp+118h]
  __int64 *v71; // [rsp+228h] [rbp+120h]
  __int64 v72; // [rsp+230h] [rbp+128h]
  _UNKNOWN *retaddr; // [rsp+250h] [rbp+148h] BYREF

  v1 = &retaddr;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v5 = *(_QWORD *)(v3 + 24);
      v6 = *v4;
      v7 = v4[1];
      v14 = 5;
      v17 = *(_DWORD *)(v5 + 56);
      v15 = *(_WORD *)(a1 + 96);
      v16 = *(_BYTE *)(a1 + 98);
      v8 = *(const WCHAR **)(v5 + 4864);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v18 = *(_DWORD *)(a1 + 2304);
      v19 = *(_DWORD *)(a1 + 2308);
      v20 = *(_DWORD *)(a1 + 2312);
      v21 = *(_DWORD *)(a1 + 2316);
      v22 = *(_DWORD *)(a1 + 2112);
      v25 = *(_DWORD *)(a1 + 2136);
      LODWORD(v26) = *(_DWORD *)(a1 + 2132);
      hProvider.CallbackContext = &v14;
      v29 = v5 + 5256;
      v23 = v6;
      v31 = a1 + 1976;
      v33 = &v17;
      v35 = &v15;
      v37 = (char *)&v15 + 1;
      v39 = &v16;
      v24 = v7;
      v28 = 1LL;
      v30 = 16LL;
      v32 = 16LL;
      v34 = 4LL;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 1LL;
      TlgCreateWsz(&pDesc, v8);
      TlgCreateSz(&v42, (LPCSTR)(a1 + 160));
      TlgCreateSz(&v43, (LPCSTR)(a1 + 169));
      v45 = 8LL;
      v46 = &v18;
      p_hProvider = &hProvider;
      v48 = &v19;
      v50 = &v20;
      v52 = &v21;
      v54 = &v22;
      v56 = &v23;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v58 = &v24;
      v60 = v63;
      v62 = a1 + 2320;
      v63[1] = v64;
      v63[3] = a1 + 2360;
      v61 = 2LL;
      v64[0] = (unsigned __int16)(40 * v9);
      v65 = v68;
      v67 = a1 + 2760;
      v63[0] = 40LL;
      v68[0] = (unsigned __int16)(40 * v10);
      v69 = &v25;
      v71 = &v26;
      v63[2] = 2LL;
      v64[1] = 0;
      v66 = 2LL;
      v68[1] = 0;
      v70 = 4LL;
      v72 = 4LL;
      LOBYTE(v1) = TlgWrite(&hProvider, &unk_1C00588DF, v11, v12, 0x1Cu, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
  *(_QWORD *)(a1 + 2132) = 0LL;
  return (char)v1;
}
