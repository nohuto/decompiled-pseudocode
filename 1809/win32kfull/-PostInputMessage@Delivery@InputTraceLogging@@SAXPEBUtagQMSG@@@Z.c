/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C00D46FC
 * Callers:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D4820 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(const struct tagQMSG *a1)
{
  unsigned int v1; // ecx
  int v2; // edx
  int v3; // r9d
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rax
  int v7; // edx
  int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  __int64 v11; // rax
  __int16 v12; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+34h] [rbp-55h] BYREF
  int v14; // [rsp+38h] [rbp-51h] BYREF
  __int64 v15; // [rsp+40h] [rbp-49h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  __int16 *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  __int64 *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]
  int *v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+ACh] [rbp+23h]
  int *v30; // [rsp+B0h] [rbp+27h]
  int v31; // [rsp+B8h] [rbp+2Fh]
  int v32; // [rsp+BCh] [rbp+33h]
  __int64 *v33; // [rsp+C0h] [rbp+37h]
  int v34; // [rsp+C8h] [rbp+3Fh]
  int v35; // [rsp+CCh] [rbp+43h]

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
    {
      v6 = *(_QWORD *)(v4 + 136);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v15 = v6;
      v18 = &v15;
      v12 = *(_WORD *)(v4 + 32);
      v21 = &v12;
      v24 = (__int64 *)(v4 + 40);
      v14 = *(unsigned __int16 *)(v4 + 34);
      v27 = &v14;
      v30 = &v13;
      v16 = *(_QWORD *)(v4 + 16);
      v33 = &v16;
      v19 = v2 - 8;
      v22 = 2;
      v25 = v2 - 8;
      v28 = v3;
      v13 = v5;
      v31 = v3;
      v34 = v2 - 8;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4FA6, 0LL, 0LL, v2 - 8, &pData);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1) && dword_1C030D340 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x10uLL) )
    {
      v11 = *(_QWORD *)(v9 + 136);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v16 = v11;
      v18 = &v16;
      v21 = (__int16 *)&v13;
      v15 = *(_QWORD *)(v9 + 16);
      v24 = &v15;
      v19 = v7 - 8;
      v13 = v10;
      v22 = v8;
      v25 = v7 - 8;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5020, 0LL, 0LL, 5u, &pData);
    }
  }
}
