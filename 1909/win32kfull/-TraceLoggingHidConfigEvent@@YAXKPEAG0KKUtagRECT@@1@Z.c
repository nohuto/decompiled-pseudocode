/*
 * XREFs of ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C01CD878
 * Callers:
 *     GetHidTelemetryData @ 0x1C01EF4A8 (GetHidTelemetryData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingHidConfigEvent(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        char a5,
        struct tagRECT *a6,
        struct tagRECT *a7)
{
  const WCHAR *v7; // r9
  LPCWSTR v8; // r11
  int v9; // r10d
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  LONG bottom; // [rsp+34h] [rbp-CCh] BYREF
  LONG right; // [rsp+38h] [rbp-C8h] BYREF
  LONG v13; // [rsp+3Ch] [rbp-C4h] BYREF
  LONG v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  int *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+A0h] [rbp-60h] BYREF
  int *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  char *v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  LONG *p_bottom; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+DCh] [rbp-24h]
  LONG *p_right; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  LONG *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  LONG *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  int v43; // [rsp+130h] [rbp+30h] BYREF

  v43 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v19 = 0;
      v22 = 0;
      v17 = &v15;
      v15 = 2048LL;
      v20 = &v43;
      v18 = 8;
      v21 = 4;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateWsz(&v24, v8);
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v25 = &v10;
      v28 = &a5;
      bottom = a6->bottom;
      p_bottom = &bottom;
      right = a6->right;
      p_right = &right;
      v13 = a7->bottom;
      v37 = &v13;
      v14 = a7->right;
      v40 = &v14;
      v10 = v9;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v41 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E50D6, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
