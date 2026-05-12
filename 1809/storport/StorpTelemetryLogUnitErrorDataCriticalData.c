/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004FA4C
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C002AAD0 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryLogUnitErrorDataCriticalData(__int64 a1)
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
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int16 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  char *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  char *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+118h] [rbp+10h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  int *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  int *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  int *v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  int *v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+170h] [rbp+68h]
  int *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  int *v53; // [rsp+188h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+88h]
  __int64 *v55; // [rsp+198h] [rbp+90h]
  __int64 v56; // [rsp+1A0h] [rbp+98h]
  _QWORD *v57; // [rsp+1A8h] [rbp+A0h]
  __int64 v58; // [rsp+1B0h] [rbp+A8h]
  __int64 v59; // [rsp+1B8h] [rbp+B0h]
  _QWORD v60[4]; // [rsp+1C0h] [rbp+B8h] BYREF
  _DWORD v61[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _DWORD *v62; // [rsp+1E8h] [rbp+E0h]
  __int64 v63; // [rsp+1F0h] [rbp+E8h]
  __int64 v64; // [rsp+1F8h] [rbp+F0h]
  _DWORD v65[2]; // [rsp+200h] [rbp+F8h] BYREF
  _UNKNOWN *retaddr; // [rsp+220h] [rbp+118h] BYREF

  v1 = &retaddr;
  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)a1, 0x800000000000uLL);
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
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v14;
      v26 = v5 + 5256;
      v23 = v6;
      v28 = a1 + 1976;
      v30 = &v17;
      v32 = &v15;
      v34 = (char *)&v15 + 1;
      v36 = &v16;
      LODWORD(v24) = v7;
      hProvider.CallbackContext = (void *)1;
      v27 = 16LL;
      v29 = 16LL;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      TlgCreateWsz(&pDesc, v8);
      TlgCreateSz(&v39, (LPCSTR)(a1 + 160));
      TlgCreateSz(&v40, (LPCSTR)(a1 + 169));
      v42 = 8LL;
      v43 = &v18;
      p_hProvider = &hProvider;
      v45 = &v19;
      v47 = &v20;
      v49 = &v21;
      v51 = &v22;
      v53 = &v23;
      v55 = &v24;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v57 = v60;
      v59 = a1 + 2320;
      v60[1] = v61;
      v60[3] = a1 + 2360;
      v58 = 2LL;
      v61[0] = (unsigned __int16)(40 * v9);
      v62 = v65;
      v64 = a1 + 2760;
      v60[0] = 40LL;
      v65[0] = (unsigned __int16)(40 * v10);
      v60[2] = 2LL;
      v61[1] = 0;
      v63 = 2LL;
      v65[1] = 0;
      LOBYTE(v1) = TlgWrite(
                     &hProvider,
                     &unk_1C0058500,
                     v11,
                     v12,
                     0x1Au,
                     (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
  return (char)v1;
}
