/*
 * XREFs of ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C01FD394
 * Callers:
 *     xxxClientCallDefaultInputHandler @ 0x1C0206618 (xxxClientCallDefaultInputHandler.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D4820 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::CallDefaultInputHandler(const struct tagMSG *a1)
{
  int v1; // ecx
  __int64 v2; // r10
  __int16 v3; // bx
  __int64 v4; // r9
  __int64 *v5; // r10
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // r10
  int v10; // r11d
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // r11d
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _QWORD *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 2)) )
  {
    v3 = *(_WORD *)(v2 + 16);
    if ( v3 == 1 )
    {
      if ( (unsigned int)dword_1C030D340 > 4 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
        {
          v7 = v5[2];
          v23 = (__int64 *)&v17;
          v25 = &v18;
          v19 = *v5;
          v27 = &v19;
          v29 = &v20;
          v31 = v5 + 3;
          v15 = *((_DWORD *)v5 + 8);
          v33 = &v15;
          v20 = v7;
          v16 = WORD1(v7);
          v35 = &v16;
          v17 = v6;
          v24 = v4;
          v18 = v6;
          v26 = v4;
          v28 = 8LL;
          v30 = 8LL;
          v32 = 8LL;
          v34 = v4;
          v36 = v4;
          TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D57EC, 0LL, 0LL, 9u, &pData);
        }
      }
    }
    else if ( (unsigned int)dword_1C030D340 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
    {
      v11 = v9[2];
      v23 = (__int64 *)&v17;
      v25 = &v16;
      v27 = (__int64 *)&v15;
      v20 = *v9;
      v29 = &v20;
      v31 = v21;
      v33 = (int *)(v9 + 3);
      v18 = *((_DWORD *)v9 + 8);
      v35 = &v18;
      v21[0] = v11;
      LODWORD(v19) = WORD1(v11);
      v37 = &v19;
      LOWORD(v17) = v3;
      v24 = 2LL;
      v16 = v10;
      v26 = v8;
      v15 = v10;
      v28 = v8;
      v30 = 8LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = v8;
      v38 = v8;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5880, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_1C030D340 > 4
         && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
  {
    LODWORD(v19) = v14;
    v24 = v12;
    v23 = &v19;
    v25 = &v16;
    v21[0] = *(_QWORD *)v13;
    v27 = v21;
    v20 = *(_QWORD *)(v13 + 16);
    v29 = &v20;
    v31 = (_QWORD *)(v13 + 24);
    v15 = *(_DWORD *)(v13 + 32);
    v33 = &v15;
    v16 = v14;
    v26 = v12;
    v30 = (unsigned int)(v12 + 4);
    v32 = v30;
    v34 = v12;
    TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5923, 0LL, 0LL, v12 + 4, &pData);
  }
}
