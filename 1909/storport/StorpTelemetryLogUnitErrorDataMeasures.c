/*
 * XREFs of StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000DE2C
 * Callers:
 *     StorpTelemetrySendUnitErrorData @ 0x1C000C148 (StorpTelemetrySendUnitErrorData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E520 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataMeasures(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r10d
  int v7; // r11d
  const WCHAR *v8; // rdx
  __int16 v9; // r10
  __int16 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  char *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  _QWORD *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  __int64 v59; // [rsp+1B0h] [rbp+B0h]
  _QWORD v60[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v61[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD *v62; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h]
  __int64 v64; // [rsp+1F0h] [rbp+F0h]
  _DWORD v65[2]; // [rsp+1F8h] [rbp+F8h] BYREF

  if ( (unsigned int)dword_1C0062058 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v6 = *(unsigned __int16 *)(a2 + 282);
      v7 = *(unsigned __int16 *)(a2 + 284);
      v13 = 4;
      v17 = *(_DWORD *)(v5 + 56);
      v14 = *(_BYTE *)(a1 + 96);
      v15 = *(_BYTE *)(a1 + 97);
      v16 = *(_BYTE *)(a1 + 98);
      v8 = *(const WCHAR **)(v5 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v18 = *(_DWORD *)(a1 + 2288);
      v19 = *(_DWORD *)(a1 + 2292);
      v20 = *(_DWORD *)(a1 + 2296);
      v21 = *(_DWORD *)(a1 + 2300);
      v22 = *(_DWORD *)(a1 + 2112);
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v13;
      v26 = v5 + 5128;
      v23 = v6;
      v28 = a1 + 1976;
      v30 = &v17;
      v32 = &v14;
      v34 = &v15;
      v36 = &v16;
      v24 = v7;
      hProvider.CallbackContext = (void *)1;
      v27 = 16LL;
      v29 = 16LL;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      TlgCreateWsz(&pDesc, v8);
      TlgCreateSz(&v39, (LPCSTR)a2);
      TlgCreateSz(&v40, (LPCSTR)(a2 + 9));
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
      v58 = 2LL;
      v57 = v60;
      v59 = a1 + 2304;
      v60[1] = v61;
      v60[3] = a1 + 2344;
      v60[0] = 40LL;
      v61[0] = (unsigned __int16)(40 * v9);
      v62 = v65;
      v64 = a1 + 2744;
      v60[2] = 2LL;
      v65[0] = (unsigned __int16)(40 * v10);
      v61[1] = 0;
      v63 = 2LL;
      v65[1] = 0;
      TlgWrite(&hProvider, &unk_1C0058741, v11, v12, 0x1Au, (EVENT_DATA_DESCRIPTOR *)&hProvider.ProviderMetadataPtr);
    }
  }
}
