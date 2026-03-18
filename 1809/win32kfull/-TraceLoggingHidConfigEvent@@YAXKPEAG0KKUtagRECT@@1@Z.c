/*
 * XREFs of ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C01B98FC
 * Callers:
 *     GetHidTelemetryData @ 0x1C01D9D38 (GetHidTelemetryData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-70h] BYREF
  int *v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+ACh] [rbp-54h]
  char *v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+BCh] [rbp-44h]
  LONG *p_bottom; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+CCh] [rbp-34h]
  LONG *p_right; // [rsp+D0h] [rbp-30h]
  int v31; // [rsp+D8h] [rbp-28h]
  int v32; // [rsp+DCh] [rbp-24h]
  LONG *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  LONG *v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]
  int v39; // [rsp+120h] [rbp+20h] BYREF

  v39 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v18 = 0;
      v16 = &v39;
      v17 = 4;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateWsz(&v20, v8);
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v21 = &v10;
      v24 = &a5;
      bottom = a6->bottom;
      p_bottom = &bottom;
      right = a6->right;
      p_right = &right;
      v13 = a7->bottom;
      v33 = &v13;
      v14 = a7->right;
      v36 = &v14;
      v10 = v9;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D37CF, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
