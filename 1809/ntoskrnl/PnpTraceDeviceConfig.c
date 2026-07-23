/*
 * XREFs of PnpTraceDeviceConfig @ 0x1406F7CE8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
        char a10,
        unsigned __int16 *a11,
        char a12,
        char a13,
        int a14)
{
  unsigned __int16 *v15; // r9
  const WCHAR *v16; // r10
  int v17; // eax
  LPCWSTR v18; // r11
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  char v21; // [rsp+32h] [rbp-CEh] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  _DWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  _DWORD v33[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  _DWORD v37[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+140h] [rbp+40h] BYREF
  char *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  char *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  char *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  int *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]

  if ( stru_140400B58.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400B58, 0x800000000000uLL) )
    {
      v19 = a10;
      v20 = a12;
      v21 = a13;
      v23 = a14;
      v26 = &v24;
      v28 = &v22;
      v30 = v33;
      v32 = *((_QWORD *)v15 + 1);
      v33[0] = *v15;
      v34 = v37;
      v36 = *((_QWORD *)a11 + 1);
      v17 = *a11;
      v22 = 0;
      v33[1] = 0;
      v37[1] = 0;
      v37[0] = v17;
      v24 = 2048LL;
      v27 = 8LL;
      v29 = 4LL;
      v31 = 2LL;
      v35 = 2LL;
      TlgCreateWsz(&pDesc, v16);
      TlgCreateWsz(&v39, v18);
      TlgCreateWsz(&v40, a4);
      TlgCreateWsz(&v41, pwsz);
      TlgCreateWsz(&v42, a6);
      TlgCreateWsz(&v43, a7);
      TlgCreateWsz(&v44, a8);
      TlgCreateWsz(&v45, a9);
      v47 = 1LL;
      v48 = &v20;
      v46 = &v19;
      v50 = &v21;
      v52 = &v23;
      v49 = 1LL;
      v51 = 1LL;
      v53 = 4LL;
      TlgWrite(&stru_140400B58, &unk_14036E7D5, 0LL, 0LL, 0x14u, &pData);
    }
  }
}
