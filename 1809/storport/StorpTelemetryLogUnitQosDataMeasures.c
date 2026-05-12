/*
 * XREFs of StorpTelemetryLogUnitQosDataMeasures @ 0x1C00500CC
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1C00519B4 (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitQosDataMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  const WCHAR *v5; // rdx
  bool v6; // al
  __int64 v7; // r10
  __int64 v8; // r10
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  bool v14; // [rsp+33h] [rbp-CDh] BYREF
  char v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE hProvider[60]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  char *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  char *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  char *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  _BYTE *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  _BYTE *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  _BYTE *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  _BYTE *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  _BYTE *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  bool *v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  _BYTE *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  char *v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  _BYTE *v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  __int64 *v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  _BYTE *v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]

  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v16 = *(_DWORD *)(v4 + 56);
      v11 = *(_BYTE *)(v3 + 96);
      v12 = *(_BYTE *)(v3 + 97);
      v13 = *(_BYTE *)(v3 + 98);
      v5 = *(const WCHAR **)(v4 + 4864);
      *(_DWORD *)hProvider = *(_DWORD *)(v3 + 3196);
      *(_DWORD *)&hProvider[4] = *(_DWORD *)(v3 + 3200);
      *(_QWORD *)&hProvider[8] = *(_QWORD *)(v3 + 3204);
      *(_QWORD *)&hProvider[16] = *(_QWORD *)(v3 + 3212);
      v6 = (*(_BYTE *)(v3 + 450) & 2) != 0;
      v21 = 16LL;
      v14 = v6;
      *(_OWORD *)&hProvider[36] = *(_OWORD *)(v3 + 2080);
      v15 = *(_BYTE *)(v2 + 8);
      *(_QWORD *)&hProvider[52] = *(_QWORD *)(v3 + 2096);
      v18 = *(_QWORD *)(v3 + 2104);
      *(_QWORD *)&hProvider[24] = *(_QWORD *)(v3 + 2112);
      *(_DWORD *)&hProvider[32] = *(_DWORD *)v2;
      v20 = v4 + 5256;
      v23 = 16LL;
      v22 = v3 + 1976;
      v24 = &v16;
      v26 = &v11;
      v28 = &v12;
      v30 = &v13;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 1LL;
      v31 = 1LL;
      TlgCreateWsz(&pDesc, v5);
      TlgCreateSz(&v33, (LPCSTR)(v7 + 160));
      TlgCreateSz(&v34, (LPCSTR)(v8 + 169));
      v36 = 4LL;
      v37 = &hProvider[4];
      v35 = hProvider;
      v39 = &hProvider[8];
      v41 = &hProvider[12];
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v43 = &hProvider[16];
      v45 = &hProvider[20];
      v47 = &v14;
      v49 = &hProvider[36];
      v51 = &hProvider[44];
      v53 = &v15;
      v55 = &hProvider[52];
      v57 = &v18;
      v59 = &hProvider[24];
      v61 = &hProvider[28];
      v63 = &hProvider[32];
      v46 = 4LL;
      v48 = 1LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 1LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      TlgWrite((TraceLoggingHProvider)hProvider, &unk_1C00582D0, v9, v10, 0x1Au, &pData);
    }
  }
}
