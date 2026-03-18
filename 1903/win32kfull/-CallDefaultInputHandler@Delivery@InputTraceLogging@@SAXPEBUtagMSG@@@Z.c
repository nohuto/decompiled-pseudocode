/*
 * XREFs of ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C02148D4
 * Callers:
 *     xxxClientCallDefaultInputHandler @ 0x1C021DD78 (xxxClientCallDefaultInputHandler.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00245B0 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::CallDefaultInputHandler(const struct tagMSG *a1)
{
  int v1; // ecx
  __int64 v2; // r10
  __int16 v3; // bx
  __int64 v4; // r9
  __int64 *v5; // r10
  int v6; // r11d
  __int64 v7; // r9
  __int64 *v8; // r10
  int v9; // r11d
  int v10; // edx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r11d
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  _QWORD *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 2)) )
  {
    v3 = *(_WORD *)(v2 + 16);
    if ( v3 == 1 )
    {
      if ( dword_1C03222C0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
        {
          v16 = v6;
          v22 = (__int64 *)&v16;
          v24 = &v17;
          v18 = *v5;
          v26 = &v18;
          v19 = v5[2];
          v28 = &v19;
          v30 = v5 + 3;
          v14 = *((_DWORD *)v5 + 8);
          v32 = &v14;
          v15 = *((unsigned __int16 *)v5 + 9);
          v34 = &v15;
          v23 = v4;
          v17 = v6;
          v25 = v4;
          v27 = 8LL;
          v29 = 8LL;
          v31 = 8LL;
          v33 = v4;
          v35 = v4;
          TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E8434, 0LL, 0LL, 9u, &pData);
        }
      }
    }
    else if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
    {
      LOWORD(v16) = v3;
      v22 = (__int64 *)&v16;
      v24 = &v15;
      v26 = (__int64 *)&v14;
      v19 = *v8;
      v28 = &v19;
      v20[0] = v8[2];
      v30 = v20;
      v32 = (int *)(v8 + 3);
      v17 = *((_DWORD *)v8 + 8);
      v34 = &v17;
      LODWORD(v18) = *((unsigned __int16 *)v8 + 9);
      v36 = &v18;
      v23 = 2LL;
      v15 = v9;
      v25 = v7;
      v14 = v9;
      v27 = v7;
      v29 = 8LL;
      v31 = 8LL;
      v33 = 8LL;
      v35 = v7;
      v37 = v7;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E84C8, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && dword_1C03222C0 > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x10uLL) )
  {
    LODWORD(v18) = v13;
    v23 = v11;
    v22 = &v18;
    v24 = &v15;
    v20[0] = *(_QWORD *)v12;
    v26 = v20;
    v19 = *(_QWORD *)(v12 + 16);
    v28 = &v19;
    v30 = (_QWORD *)(v12 + 24);
    v14 = *(_DWORD *)(v12 + 32);
    v32 = &v14;
    v15 = v13;
    v25 = v11;
    v29 = (unsigned int)(v10 - 8);
    v31 = v29;
    v33 = v11;
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E856B, 0LL, 0LL, v10 - 8, &pData);
  }
}
