/*
 * XREFs of StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00503F8
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0010E10 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitSmartAttributesCriticalData(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  __int64 *v2; // r9
  __int64 v3; // r11
  __int64 v4; // rdx
  __int16 *v5; // r10
  const WCHAR *v6; // r8
  int v7; // eax
  int *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r10
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  bool v17; // [rsp+33h] [rbp-CDh] BYREF
  char v18; // [rsp+34h] [rbp-CCh] BYREF
  char v19; // [rsp+35h] [rbp-CBh] BYREF
  char v20; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  char *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  char *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  char *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+160h] [rbp+60h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  bool *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  int *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  char *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  char *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int16 *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int16 *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  int *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  __int16 *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  char *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  unsigned __int64 *p_KeywordAny; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  unsigned __int64 *p_KeywordAll; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  unsigned __int64 *p_RegHandle; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  void **p_CallbackContext; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  __int64 *v82; // [rsp+270h] [rbp+170h]
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
  __int64 v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x800000000000uLL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v5 = (__int16 *)v2[1];
      v24 = *(_DWORD *)(v4 + 56);
      v14 = *(_BYTE *)(v1 + 96);
      v15 = *(_BYTE *)(v1 + 97);
      v16 = *(_BYTE *)(v1 + 98);
      v6 = *(const WCHAR **)(v4 + 4864);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v7 = *(_DWORD *)(v1 + 1992);
      v8 = (int *)*v2;
      v17 = (v7 & 0x20) != 0;
      v25 = *v8;
      v18 = *((_BYTE *)v8 + 4);
      v19 = *((_BYTE *)v8 + 5);
      v21 = *v5;
      v22 = *((_WORD *)v2 + 8);
      v26 = *((_DWORD *)v2 + 5);
      v23 = *((_WORD *)v2 + 12);
      v20 = *((_BYTE *)v2 + 26);
      hProvider.ProviderMetadataPtr = (const unsigned __int16 *)v2[4];
      hProvider.KeywordAny = v2[5];
      hProvider.KeywordAll = v2[6];
      hProvider.RegHandle = v2[7];
      hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))v2[8];
      hProvider.CallbackContext = (void *)v2[9];
      v28 = v2[10];
      v29 = v2[11];
      v30 = v2[12];
      v31 = v2[13];
      v32 = v2[14];
      v33 = v2[15];
      v35 = v4 + 5256;
      v36 = 16LL;
      v37 = v3 + 1976;
      v39 = &v24;
      v41 = &v14;
      v43 = &v15;
      v45 = &v16;
      v38 = 16LL;
      v40 = 4LL;
      v42 = 1LL;
      v44 = 1LL;
      v46 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v48, (LPCSTR)(v9 + 160));
      TlgCreateSz(&v49, (LPCSTR)(v10 + 169));
      v51 = 8LL;
      v52 = &v17;
      p_hProvider = &hProvider;
      v54 = &v25;
      v56 = &v18;
      v58 = &v19;
      v60 = &v21;
      v62 = &v22;
      v64 = &v26;
      v66 = &v23;
      v68 = &v20;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      p_KeywordAny = &hProvider.KeywordAny;
      p_KeywordAll = &hProvider.KeywordAll;
      p_RegHandle = &hProvider.RegHandle;
      p_EnableCallback = &hProvider.EnableCallback;
      p_CallbackContext = &hProvider.CallbackContext;
      v82 = &v28;
      v84 = &v29;
      v86 = &v30;
      v88 = &v31;
      v90 = &v32;
      v92 = &v33;
      v94 = &v97;
      v53 = 1LL;
      v55 = 4LL;
      v57 = 1LL;
      v59 = 1LL;
      v61 = 2LL;
      v63 = 2LL;
      v65 = 4LL;
      v67 = 2LL;
      v69 = 1LL;
      v71 = 8LL;
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
      v95 = 2LL;
      v96 = v11;
      v97 = 512LL;
      TlgWrite(&hProvider, &unk_1C00577CD, v12, v13, 0x23u, &pData);
    }
  }
}
