/*
 * XREFs of StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C004E730
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C000260C (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitSmartAttributesCriticalData(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // rdx
  __int16 *v5; // r10
  const WCHAR *v6; // r8
  int v7; // eax
  int *v8; // rcx
  LPCSTR v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r10
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  bool v18; // [rsp+33h] [rbp-CDh] BYREF
  char v19; // [rsp+34h] [rbp-CCh] BYREF
  char v20; // [rsp+35h] [rbp-CBh] BYREF
  char v21; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  char *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  char *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  char *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+170h] [rbp+70h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  bool *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  int *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  char *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  char *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int16 *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  __int16 *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  int *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  __int16 *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  char *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  unsigned __int64 *p_KeywordAny; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  unsigned __int64 *p_KeywordAll; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  unsigned __int64 *p_RegHandle; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  void **p_CallbackContext; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  __int64 *v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  __int64 *v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  __int64 *v88; // [rsp+2A0h] [rbp+1A0h]
  __int64 v89; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v90; // [rsp+2B0h] [rbp+1B0h]
  __int64 v91; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v92; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v94; // [rsp+2D0h] [rbp+1D0h]
  __int64 v95; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  __int64 v98; // [rsp+2F0h] [rbp+1F0h]
  __int64 v99; // [rsp+2F8h] [rbp+1F8h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x800000000000uLL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v5 = *(__int16 **)(v3 + 296);
      v25 = *(_DWORD *)(v4 + 56);
      v15 = *(_BYTE *)(v1 + 96);
      v16 = *(_BYTE *)(v1 + 97);
      v17 = *(_BYTE *)(v1 + 98);
      v6 = *(const WCHAR **)(v4 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v7 = *(_DWORD *)(v1 + 1736);
      v8 = *(int **)(v3 + 288);
      v18 = (v7 & 0x10) != 0;
      v26 = *v8;
      v19 = *((_BYTE *)v8 + 4);
      v20 = *((_BYTE *)v8 + 5);
      v22 = *v5;
      v23 = *(_WORD *)(v3 + 304);
      v27 = *(_DWORD *)(v3 + 308);
      v24 = *(_WORD *)(v3 + 312);
      v21 = *(_BYTE *)(v3 + 314);
      hProvider.ProviderMetadataPtr = *(const unsigned __int16 **)(v3 + 320);
      hProvider.KeywordAny = *(_QWORD *)(v3 + 328);
      hProvider.KeywordAll = *(_QWORD *)(v3 + 336);
      hProvider.RegHandle = *(_QWORD *)(v3 + 344);
      hProvider.EnableCallback = *(void (__fastcall **)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))(v3 + 352);
      hProvider.CallbackContext = *(void **)(v3 + 360);
      v29 = *(_QWORD *)(v3 + 368);
      v30 = *(_QWORD *)(v3 + 376);
      v31 = *(_QWORD *)(v3 + 384);
      v32 = *(_QWORD *)(v3 + 392);
      v33 = *(_QWORD *)(v3 + 400);
      v34 = *(_QWORD *)(v3 + 408);
      v36 = v4 + 5128;
      v37 = 16LL;
      v38 = v2 + 1720;
      v40 = &v25;
      v42 = &v15;
      v44 = &v16;
      v46 = &v17;
      v39 = 16LL;
      v41 = 4LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v49, v9);
      TlgCreateSz(&v50, (LPCSTR)(v10 + 9));
      TlgCreateSz(&v51, (LPCSTR)(v11 + 26));
      v53 = 8LL;
      v54 = &v18;
      p_hProvider = &hProvider;
      v56 = &v26;
      v58 = &v19;
      v60 = &v20;
      v62 = &v22;
      v64 = &v23;
      v66 = &v27;
      v68 = &v24;
      v70 = &v21;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      p_KeywordAny = &hProvider.KeywordAny;
      p_KeywordAll = &hProvider.KeywordAll;
      p_RegHandle = &hProvider.RegHandle;
      p_EnableCallback = &hProvider.EnableCallback;
      p_CallbackContext = &hProvider.CallbackContext;
      v84 = &v29;
      v86 = &v30;
      v88 = &v31;
      v90 = &v32;
      v92 = &v33;
      v94 = &v34;
      v96 = &v99;
      v55 = 1LL;
      v57 = 4LL;
      v59 = 1LL;
      v61 = 1LL;
      v63 = 2LL;
      v65 = 2LL;
      v67 = 4LL;
      v69 = 2LL;
      v71 = 1LL;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 8LL;
      v89 = 8LL;
      v91 = 8LL;
      v93 = 8LL;
      v95 = 8LL;
      v97 = 2LL;
      v98 = v12;
      v99 = 512LL;
      TlgWrite(&hProvider, &unk_1C0056565, v13, v14, 0x24u, &pData);
    }
  }
}
