/*
 * XREFs of ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01CE3B0
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01CE234 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D4820 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::DManip::ReassignMessage(const struct tagQMSG *a1)
{
  int v1; // ecx
  int v2; // r9d
  int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rax
  UINT32 cData; // r9d
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rax
  __int16 v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  __int16 *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  __int64 v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  int *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  int *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C030D340 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x1000uLL) )
      {
        v5 = *(_QWORD *)(v4 + 136);
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v13[0] = v5;
        v15 = v13;
        v10 = *(_WORD *)(v4 + 32);
        v18 = &v10;
        v21 = v4 + 40;
        v12 = *(unsigned __int16 *)(v4 + 34);
        v24 = &v12;
        v27 = &v11;
        v16 = 8;
        v19 = 2;
        v22 = 8;
        v25 = v2;
        v11 = v3;
        v28 = v2;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5472, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_1C030D340 > 4
         && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x1000uLL) )
  {
    v9 = *(_QWORD *)(v8 + 136);
    v17 = 0;
    v20 = 0;
    v13[0] = v9;
    v15 = v13;
    v18 = (__int16 *)&v11;
    v16 = 8;
    v11 = v7;
    v19 = cData;
    TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D54DB, 0LL, 0LL, cData, &pData);
  }
}
