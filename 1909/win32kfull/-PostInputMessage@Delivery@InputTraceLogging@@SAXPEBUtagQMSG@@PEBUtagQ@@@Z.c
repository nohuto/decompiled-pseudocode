/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C002A7CC
 * Callers:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C002AA20 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v3; // ecx
  int v4; // r10d
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // r11
  bool v8; // cf
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // r11
  __int64 v13; // r9
  int v14; // r10d
  __int64 v15; // r11
  __int64 v17; // r9
  __int64 v18; // r11
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  const struct tagQ *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  const struct tagQ **v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int64 *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
    {
      v22 = *(_QWORD *)(v7 + 136);
      v27 = &v22;
      v29 = &v23;
      v20 = *(_WORD *)(v7 + 32);
      v31 = (int *)&v20;
      v33 = (__int64 *)(v7 + 40);
      v25 = *(unsigned __int16 *)(v7 + 34);
      v35 = &v25;
      v37 = &v21;
      v24 = *(_QWORD *)(v7 + 16);
      v39 = &v24;
      v8 = __CFSHR__(*(_DWORD *)(v7 + 100), 6);
      v28 = 8LL;
      v23 = a2;
      v19 = -v8;
      v41 = &v19;
      v30 = 8LL;
      v32 = 2LL;
      v34 = 8LL;
      v36 = v5;
      v21 = v6;
      v38 = v5;
      v40 = 8LL;
      v42 = v5;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6B6A, 0LL, 0LL, 0xAu, &pData);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v3) )
  {
    if ( dword_1C03202C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
      {
        v24 = *(_QWORD *)(v11 + 136);
        v27 = &v24;
        v29 = &v23;
        v31 = &v19;
        v22 = *(_QWORD *)(v11 + 16);
        v33 = &v22;
        v8 = __CFSHR__(*(_DWORD *)(v11 + 100), 6);
        v28 = 8LL;
        v23 = a2;
        v21 = -v8;
        v35 = &v21;
        v30 = 8LL;
        v19 = v10;
        v32 = v9;
        v34 = 8LL;
        v36 = v9;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6BF6, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( (unsigned int)(v4 - 256) > 9 )
  {
    if ( v4 == 255 && dword_1C03202C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
      {
        v24 = *(_QWORD *)(v18 + 136);
        v27 = &v24;
        v29 = &v23;
        v31 = &v19;
        v22 = *(_QWORD *)(v18 + 16);
        v33 = &v22;
        v28 = 8LL;
        v23 = a2;
        v30 = 8LL;
        v19 = 255;
        v32 = v17;
        v34 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6CB4, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else if ( dword_1C03202C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
    {
      v24 = *(_QWORD *)(v15 + 136);
      v27 = &v24;
      v29 = &v23;
      v31 = &v19;
      v22 = *(_QWORD *)(v15 + 16);
      v33 = &v22;
      v28 = 8LL;
      v23 = a2;
      v30 = 8LL;
      v19 = v14;
      v32 = v13;
      v34 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6C59, 0LL, 0LL, 6u, &pData);
    }
  }
}
