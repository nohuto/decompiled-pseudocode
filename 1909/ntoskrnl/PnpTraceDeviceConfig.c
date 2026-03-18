/*
 * XREFs of PnpTraceDeviceConfig @ 0x1406FEEA8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14008BAAC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDeviceConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4,
        const WCHAR *pwsz,
        const WCHAR *a6,
        const WCHAR *a7,
        const WCHAR *a8,
        const WCHAR *a9,
        const WCHAR *a10,
        char a11,
        unsigned __int16 *a12,
        char a13,
        char a14,
        int a15,
        __int64 *a16)
{
  unsigned __int16 *v17; // r9
  const WCHAR *v18; // r10
  int v19; // eax
  LPCWSTR v20; // r11
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  char v23; // [rsp+32h] [rbp-CEh] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  int *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  _DWORD *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  _DWORD v36[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  _DWORD v40[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+150h] [rbp+50h] BYREF
  char *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  char *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  char *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  int *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  __int64 *v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]

  v26 = 0LL;
  if ( a16 )
    v26 = *a16;
  if ( stru_140425CB0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425CB0, 0x800000000000uLL) )
    {
      v21 = a11;
      v22 = a13;
      v23 = a14;
      v25 = a15;
      v29 = &v27;
      v31 = &v24;
      v33 = v36;
      v35 = *((_QWORD *)v17 + 1);
      v36[0] = *v17;
      v37 = v40;
      v39 = *((_QWORD *)a12 + 1);
      v19 = *a12;
      v24 = 0;
      v36[1] = 0;
      v40[1] = 0;
      v40[0] = v19;
      v27 = 2048LL;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 2LL;
      v38 = 2LL;
      TlgCreateWsz(&pDesc, v18);
      TlgCreateWsz(&v42, v20);
      TlgCreateWsz(&v43, a4);
      TlgCreateWsz(&v44, pwsz);
      TlgCreateWsz(&v45, a6);
      TlgCreateWsz(&v46, a7);
      TlgCreateWsz(&v47, a8);
      TlgCreateWsz(&v48, a9);
      TlgCreateWsz(&v49, a10);
      v51 = 1LL;
      v52 = &v22;
      v50 = &v21;
      v54 = &v23;
      v56 = &v25;
      v58 = &v26;
      v53 = 1LL;
      v55 = 1LL;
      v57 = 4LL;
      v59 = 8LL;
      TlgWrite(&stru_140425CB0, &unk_14038D4ED, 0LL, 0LL, 0x16u, &pData);
    }
  }
}
