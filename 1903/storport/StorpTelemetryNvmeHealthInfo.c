/*
 * XREFs of StorpTelemetryNvmeHealthInfo @ 0x1C004F60C
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004F914 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeHealthInfo(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        __int64 a3,
        const CHAR *a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int16 a8,
        __int64 a9,
        unsigned __int16 a10,
        const unsigned __int16 *a11,
        unsigned __int64 a12,
        unsigned __int64 a13,
        unsigned __int64 a14,
        void (__fastcall *a15)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *a16)
{
  __int64 v17; // rcx
  _BYTE *v18; // r9
  __int64 v19; // rcx
  const WCHAR *v20; // rdx
  LPCSTR v21; // r10
  LPCSTR v22; // r11
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  char v27; // [rsp+32h] [rbp-CEh] BYREF
  char v28; // [rsp+33h] [rbp-CDh] BYREF
  char v29; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _BYTE *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  char *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  char *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+130h] [rbp+30h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  _DWORD *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  __int64 v56; // [rsp+170h] [rbp+70h]
  _DWORD v57[2]; // [rsp+178h] [rbp+78h] BYREF
  char *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  __int16 *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  _DWORD *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  __int64 v64; // [rsp+1B0h] [rbp+B0h]
  _DWORD v65[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *p_KeywordAny; // [rsp+1D0h] [rbp+D0h]
  __int64 v69; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *p_KeywordAll; // [rsp+1E0h] [rbp+E0h]
  __int64 v71; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *p_RegHandle; // [rsp+1F0h] [rbp+F0h]
  __int64 v73; // [rsp+1F8h] [rbp+F8h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+200h] [rbp+100h]
  __int64 v75; // [rsp+208h] [rbp+108h]
  void **p_CallbackContext; // [rsp+210h] [rbp+110h]
  __int64 v77; // [rsp+218h] [rbp+118h]

  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v19 = *(_QWORD *)(v17 + 24);
      v31 = *(_DWORD *)(v19 + 56);
      v25 = v18[96];
      v26 = v18[97];
      v27 = v18[98];
      v20 = *(const WCHAR **)(v19 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v28 = v18[1740];
      v29 = a7;
      v30 = a8;
      hProvider.ProviderMetadataPtr = a11;
      hProvider.KeywordAny = a12;
      hProvider.KeywordAll = a13;
      hProvider.RegHandle = a14;
      hProvider.EnableCallback = a15;
      hProvider.CallbackContext = a16;
      v34 = v19 + 5128;
      v35 = 16LL;
      v36 = v18 + 1720;
      v38 = &v31;
      v40 = &v25;
      v42 = &v26;
      v44 = &v27;
      v37 = 16LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      TlgCreateWsz(&pDesc, v20);
      TlgCreateSz(&v47, v21);
      TlgCreateSz(&v48, v22);
      TlgCreateSz(&v49, a4);
      v51 = 8LL;
      v52 = &v28;
      p_hProvider = &hProvider;
      v54 = v57;
      v56 = a5;
      v57[0] = a6;
      v58 = &v29;
      v60 = &v30;
      v62 = v65;
      v53 = 1LL;
      v55 = 2LL;
      v57[1] = 0;
      v59 = 1LL;
      v61 = 2LL;
      v64 = a9;
      v65[0] = a10;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      p_KeywordAny = &hProvider.KeywordAny;
      p_KeywordAll = &hProvider.KeywordAll;
      p_RegHandle = &hProvider.RegHandle;
      p_EnableCallback = &hProvider.EnableCallback;
      p_CallbackContext = &hProvider.CallbackContext;
      v63 = 2LL;
      v65[1] = 0;
      v67 = 8LL;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      TlgWrite(&hProvider, &unk_1C0057AC2, v23, v24, 0x1Au, &pData);
    }
  }
}
