/*
 * XREFs of ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0152AD8
 * Callers:
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01345B0 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::SkipReadComplete(
        const struct RawInputManagerObject *a1,
        const struct RIMDEV *a2)
{
  char v2; // al
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rax
  const char *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  UINT32 cData; // r10d
  __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  v2 = *((_BYTE *)a2 + 48);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
      {
        if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
        {
          v13 = *(_QWORD *)(v11 + 472);
          v20 = &v17;
          v22 = &v18;
          v24 = v11 + 16;
          v17 = v11;
          v21 = 8LL;
          v18 = v12;
          v23 = 8LL;
          v25 = 8LL;
          LODWORD(v16) = *(unsigned __int16 *)(v13 + 16);
          pDesc.Ptr = (ULONGLONG)&v16;
          *(_QWORD *)&pDesc.Size = 4LL;
          v15 = *(unsigned __int16 *)(v13 + 18);
          v27 = &v15;
          v28 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E58D1, 0LL, 0LL, 7u, &v19);
        }
      }
      else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
      {
        v18 = v4;
        v21 = 8LL;
        v20 = &v18;
        v22 = &v17;
        v24 = v4 + 16;
        v6 = *(_QWORD *)(v4 + 480);
        v17 = v5;
        v23 = 8LL;
        v25 = 8LL;
        v7 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v6 + 24));
        TlgCreateSz(&pDesc, v7);
        v9 = *(_QWORD *)(v8 + 472);
        v15 = *(unsigned __int16 *)(v9 + 16);
        v27 = &v15;
        v28 = 4LL;
        LODWORD(v16) = *(unsigned __int16 *)(v9 + 18);
        v29 = &v16;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E5861, 0LL, 0LL, cData, &v19);
      }
    }
    else if ( v2 == 1 && dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v17 = v14;
      v32 = &v17;
      v33 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E592A, 0LL, 0LL, 3u, &pData);
    }
  }
  else if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v16 = v3;
      v32 = &v16;
      v33 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E582E, 0LL, 0LL, 3u, &pData);
    }
  }
}
