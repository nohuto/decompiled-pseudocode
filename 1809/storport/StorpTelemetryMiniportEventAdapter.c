/*
 * XREFs of StorpTelemetryMiniportEventAdapter @ 0x1C0050B34
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C0022D08 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryMiniportEventAdapter(const struct _TlgProvider_t *a1, int *a2)
{
  __int64 v3; // rcx
  const WCHAR *v4; // rdx
  __int64 v5; // r10
  int v6; // r11d
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+F0h] [rbp-10h] BYREF
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  int *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  _DWORD *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int64 v37; // [rsp+140h] [rbp+40h]
  _DWORD v38[2]; // [rsp+148h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v43; // [rsp+180h] [rbp+80h]
  __int64 v44; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v49; // [rsp+1C0h] [rbp+C0h]
  __int64 v50; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v52; // [rsp+1E0h] [rbp+E0h]
  __int64 v53; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v55; // [rsp+200h] [rbp+100h]
  __int64 v56; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v58; // [rsp+220h] [rbp+120h]
  __int64 v59; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+230h] [rbp+130h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+240h] [rbp+140h]
  __int64 v62; // [rsp+248h] [rbp+148h]

  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v4 = *(const WCHAR **)(v3 + 4864);
      v9 = *(_DWORD *)(v3 + 4420);
      v10 = *a2;
      v11 = a2[1];
      v12 = a2[10];
      v13 = a2[11];
      v14 = *((_QWORD *)a2 + 12);
      v15 = *((_QWORD *)a2 + 17);
      v16 = *((_QWORD *)a2 + 22);
      v17 = *((_QWORD *)a2 + 27);
      v18 = *((_QWORD *)a2 + 32);
      v19 = *((_QWORD *)a2 + 37);
      v20 = *((_QWORD *)a2 + 42);
      *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)a2 + 47);
      hProvider.CallbackContext = (void *)(v3 + 5256);
      v22 = 16LL;
      TlgCreateWsz(&pDesc, v4);
      v25 = 4LL;
      v24 = &v9;
      v26 = &v10;
      v27 = 4LL;
      TlgCreateSz(&v28, (LPCSTR)a2 + 8);
      v30 = 4LL;
      v31 = &v12;
      v29 = &v11;
      v33 = &v13;
      v32 = 4LL;
      v35 = v38;
      v34 = 4LL;
      v36 = 2LL;
      v37 = v5;
      v38[0] = v6;
      v38[1] = 0;
      TlgCreateSz(&v39, (LPCSTR)a2 + 64);
      v41 = 8LL;
      v40 = &v14;
      TlgCreateSz(&v42, (LPCSTR)a2 + 104);
      v44 = 8LL;
      v43 = &v15;
      TlgCreateSz(&v45, (LPCSTR)a2 + 144);
      v47 = 8LL;
      v46 = &v16;
      TlgCreateSz(&v48, (LPCSTR)a2 + 184);
      v49 = &v17;
      v50 = 8LL;
      TlgCreateSz(&v51, (LPCSTR)a2 + 224);
      v53 = 8LL;
      v52 = &v18;
      TlgCreateSz(&v54, (LPCSTR)a2 + 264);
      v56 = 8LL;
      v55 = &v19;
      TlgCreateSz(&v57, (LPCSTR)a2 + 304);
      v59 = 8LL;
      v58 = &v20;
      TlgCreateSz(&v60, (LPCSTR)a2 + 344);
      v62 = 8LL;
      p_hProvider = &hProvider;
      TlgWrite(&hProvider, &unk_1C0057DA0, v7, v8, 0x1Cu, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
}
