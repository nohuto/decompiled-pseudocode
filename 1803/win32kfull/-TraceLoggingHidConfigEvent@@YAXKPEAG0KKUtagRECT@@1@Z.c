/*
 * XREFs of ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C019881C
 * Callers:
 *     GetHidTelemetryData @ 0x1C01B7508 (GetHidTelemetryData.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  LONG bottom; // [rsp+34h] [rbp-CCh] BYREF
  LONG right; // [rsp+38h] [rbp-C8h] BYREF
  LONG v15; // [rsp+3Ch] [rbp-C4h] BYREF
  LONG v16; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  int v20; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp-70h] BYREF
  int *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  char *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  LONG *p_bottom; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  LONG *p_right; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  LONG *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  LONG *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]
  int v41; // [rsp+120h] [rbp+20h] BYREF

  v41 = a1;
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v20 = 0;
      v18 = &v41;
      v19 = 4;
      TlgCreateWsz(&pDesc, v7);
      TlgCreateWsz(&v22, v8);
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v23 = &v12;
      v26 = &a5;
      bottom = a6->bottom;
      p_bottom = &bottom;
      right = a6->right;
      p_right = &right;
      v15 = a7->bottom;
      v35 = &v15;
      v16 = a7->right;
      v38 = &v16;
      v12 = v9;
      v24 = 4;
      v27 = 4;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v39 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E20D5, v10, v11, 0xBu, &pData);
    }
  }
}
