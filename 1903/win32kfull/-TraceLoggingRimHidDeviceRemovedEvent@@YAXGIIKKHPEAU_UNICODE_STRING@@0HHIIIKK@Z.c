/*
 * XREFs of ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01CEE78
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01D45B0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingRimHidDeviceRemovedEvent(
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
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  int *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  char *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  char *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  _DWORD *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  PWSTR Buffer; // [rsp+E8h] [rbp-20h]
  _DWORD v36[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  PWSTR v39; // [rsp+108h] [rbp+0h]
  _DWORD v40[2]; // [rsp+110h] [rbp+8h] BYREF
  char *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  char *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  char *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  char *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  char *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  char *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  char *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  int v55; // [rsp+1B0h] [rbp+A8h] BYREF
  int v56; // [rsp+1B8h] [rbp+B0h] BYREF
  int v57; // [rsp+1C0h] [rbp+B8h] BYREF

  v57 = a4;
  v56 = a3;
  v55 = a2;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v19 = &v17;
      LODWORD(v16) = v15;
      v21 = &v16;
      v23 = &v55;
      v25 = &v56;
      v27 = &v57;
      v29 = &a5;
      v31 = &a6;
      v33 = v36;
      Buffer = a7->Buffer;
      v36[0] = a7->Length;
      v37 = v40;
      v17 = 2048LL;
      v39 = a8->Buffer;
      v40[0] = a8->Length;
      v41 = &a9;
      v43 = &a10;
      v45 = &a11;
      v47 = &a12;
      v49 = &a13;
      v51 = &a14;
      v53 = &a15;
      v20 = 8LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 2LL;
      v36[1] = 0;
      v38 = 2LL;
      v40[1] = 0;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5CC2, 0LL, 0LL, 0x14u, &pData);
    }
  }
}
