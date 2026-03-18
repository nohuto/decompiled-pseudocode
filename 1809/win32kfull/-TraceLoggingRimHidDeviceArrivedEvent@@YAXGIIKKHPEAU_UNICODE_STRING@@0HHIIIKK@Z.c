/*
 * XREFs of ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01BA958
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingRimHidDeviceArrivedEvent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        struct _UNICODE_STRING *a7,
        struct _UNICODE_STRING *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  unsigned __int16 v15; // r9
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  _DWORD *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  PWSTR Buffer; // [rsp+D0h] [rbp-30h]
  _DWORD v33[2]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  PWSTR v36; // [rsp+F0h] [rbp-10h]
  _DWORD v37[2]; // [rsp+F8h] [rbp-8h] BYREF
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  char *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  char *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  char *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  char *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  char *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  int v52; // [rsp+198h] [rbp+98h] BYREF
  int v53; // [rsp+1A0h] [rbp+A0h] BYREF
  int v54; // [rsp+1A8h] [rbp+A8h] BYREF

  v54 = a4;
  v53 = a3;
  v52 = a2;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v16 = v15;
      v18 = &v16;
      v20 = &v52;
      v22 = &v53;
      v24 = &v54;
      v26 = &a5;
      v28 = &a6;
      v30 = v33;
      Buffer = a7->Buffer;
      v33[0] = a7->Length;
      v34 = v37;
      v19 = 4LL;
      v36 = a8->Buffer;
      v37[0] = a8->Length;
      v38 = &a9;
      v40 = &a10;
      v42 = &a11;
      v44 = &a12;
      v46 = &a13;
      v48 = &a14;
      v50 = &a15;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 2LL;
      v33[1] = 0;
      v35 = 2LL;
      v37[1] = 0;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3A34, 0LL, 0LL, 0x13u, &pData);
    }
  }
}
