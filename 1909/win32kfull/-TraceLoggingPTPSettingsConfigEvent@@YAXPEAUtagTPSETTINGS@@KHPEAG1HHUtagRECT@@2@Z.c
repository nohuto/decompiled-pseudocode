/*
 * XREFs of ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01CE5E4
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C020F544 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPSettingsConfigEvent(
        struct tagTPSETTINGS *a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        LPCWSTR pwsz,
        char a6,
        char a7,
        struct tagRECT *a8,
        struct tagRECT *a9)
{
  const WCHAR *v9; // rbx
  __int64 v10; // r9
  int v11; // r10d
  const WCHAR *v12; // r11
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  LONG bottom; // [rsp+3Ch] [rbp-C4h] BYREF
  LONG right; // [rsp+40h] [rbp-C0h] BYREF
  LONG v18; // [rsp+44h] [rbp-BCh] BYREF
  LONG v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  int *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  char *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  char *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  LONG *p_bottom; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  LONG *p_right; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  LONG *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  LONG *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  int v56; // [rsp+1E0h] [rbp+E0h] BYREF

  v56 = a3;
  v9 = pwsz;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v20 = 2048LL;
      v22 = &v20;
      v23 = 8LL;
      v26 = v10 + 8;
      v24 = v10;
      v28 = v10 + 16;
      v30 = v10 + 20;
      v32 = v10 + 24;
      v13 = *(_DWORD *)(v10 + 12);
      v34 = &v13;
      v14 = *(_DWORD *)(v10 + 28);
      v36 = &v14;
      v38 = &v15;
      v40 = &v56;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v15 = v11;
      v39 = 4LL;
      v41 = 4LL;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateWsz(&v43, v9);
      v46 = &a7;
      v44 = &a6;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      bottom = a8->bottom;
      p_bottom = &bottom;
      right = a8->right;
      p_right = &right;
      v18 = a9->bottom;
      v52 = &v18;
      v19 = a9->right;
      v54 = &v19;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5BE4, 0LL, 0LL, 0x14u, &pData);
    }
  }
}
