/*
 * XREFs of ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01BA588
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C01BBF68 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  char *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  char *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  LONG *p_bottom; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  LONG *p_right; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  LONG *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  LONG *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int v53; // [rsp+1C0h] [rbp+C0h] BYREF

  v53 = a3;
  v9 = pwsz;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v21 = v10;
      v23 = v10 + 8;
      v22 = 4LL;
      v25 = v10 + 16;
      v24 = 4LL;
      v27 = v10 + 20;
      v29 = v10 + 24;
      v13 = *(_DWORD *)(v10 + 12);
      v31 = &v13;
      v14 = *(_DWORD *)(v10 + 28);
      v33 = &v14;
      v35 = &v15;
      v37 = &v53;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v15 = v11;
      v36 = 4LL;
      v38 = 4LL;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateWsz(&v40, v9);
      v43 = &a7;
      v41 = &a6;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      bottom = a8->bottom;
      p_bottom = &bottom;
      right = a8->right;
      p_right = &right;
      v18 = a9->bottom;
      v49 = &v18;
      v19 = a9->right;
      v51 = &v19;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D41AD, 0LL, 0LL, 0x13u, &pData);
    }
  }
}
