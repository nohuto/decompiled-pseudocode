/*
 * XREFs of StorpTelemetryNvmeHealthInfo @ 0x1C0051294
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C005159C (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryNvmeHealthInfo(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int16 a6,
        __int64 a7,
        unsigned __int16 a8,
        const unsigned __int16 *a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        unsigned __int64 a12,
        void (__fastcall *a13)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *a14)
{
  _UNKNOWN **v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rcx
  const WCHAR *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r10
  unsigned __int16 v22; // r11
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  __int16 v26; // [rsp+38h] [rbp-D0h] BYREF
  char v27; // [rsp+3Ah] [rbp-CEh] BYREF
  char v28; // [rsp+3Bh] [rbp-CDh] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  __int16 *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  char *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  char *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+128h] [rbp+20h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  char *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  _DWORD *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  __int64 v55; // [rsp+168h] [rbp+60h]
  _DWORD v56[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  __int16 *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  _DWORD *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  __int64 v63; // [rsp+1A8h] [rbp+A0h]
  _DWORD v64[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 *p_KeywordAny; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *p_KeywordAll; // [rsp+1D8h] [rbp+D0h]
  __int64 v70; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *p_RegHandle; // [rsp+1E8h] [rbp+E0h]
  __int64 v72; // [rsp+1F0h] [rbp+E8h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+1F8h] [rbp+F0h]
  __int64 v74; // [rsp+200h] [rbp+F8h]
  void **p_CallbackContext; // [rsp+208h] [rbp+100h]
  __int64 v76; // [rsp+210h] [rbp+108h]
  _UNKNOWN *retaddr; // [rsp+230h] [rbp+128h] BYREF

  v14 = &retaddr;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    LOBYTE(v14) = TlgKeywordOn(a1, 0x400000000000uLL);
    if ( (_BYTE)v14 )
    {
      v18 = *(_QWORD *)(v16 + 24);
      v31 = *(_DWORD *)(v18 + 56);
      v26 = *(_WORD *)(v17 + 96);
      v27 = *(_BYTE *)(v17 + 98);
      v19 = *(const WCHAR **)(v18 + 4864);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      v28 = *(_BYTE *)(v17 + 1996);
      LOBYTE(v29) = a5;
      v30 = a6;
      hProvider.ProviderMetadataPtr = a9;
      hProvider.KeywordAny = a10;
      hProvider.KeywordAll = a11;
      hProvider.RegHandle = a12;
      hProvider.EnableCallback = a13;
      hProvider.CallbackContext = a14;
      v34 = v18 + 5256;
      v35 = 16LL;
      v36 = v17 + 1976;
      v38 = &v31;
      v40 = &v26;
      v42 = (char *)&v26 + 1;
      v44 = &v27;
      v37 = 16LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      TlgCreateWsz(&pDesc, v19);
      TlgCreateSz(&v47, (LPCSTR)(v20 + 160));
      TlgCreateSz(&v48, (LPCSTR)(v21 + 169));
      v50 = 8LL;
      v51 = &v28;
      p_hProvider = &hProvider;
      v53 = v56;
      v56[0] = v22;
      v57 = &v29;
      v59 = &v30;
      v61 = v64;
      v63 = a7;
      v52 = 1LL;
      v54 = 2LL;
      v55 = a3;
      v56[1] = 0;
      v58 = 1LL;
      v60 = 2LL;
      v62 = 2LL;
      v64[0] = a8;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      p_KeywordAny = &hProvider.KeywordAny;
      p_KeywordAll = &hProvider.KeywordAll;
      p_RegHandle = &hProvider.RegHandle;
      p_EnableCallback = &hProvider.EnableCallback;
      p_CallbackContext = &hProvider.CallbackContext;
      v64[1] = 0;
      v66 = 8LL;
      v68 = 8LL;
      v70 = 8LL;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      LOBYTE(v14) = TlgWrite(&hProvider, &unk_1C0058B1D, v23, v24, 0x19u, &pData);
    }
  }
  return (char)v14;
}
