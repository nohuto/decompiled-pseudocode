/*
 * XREFs of ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@_N@Z @ 0x1C012612C
 * Callers:
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A730 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::ReadComplete(const struct RawInputManagerObject *a1, const struct RIMDEV *a2)
{
  char v2; // al
  __int64 cData; // r9
  __int64 v5; // r10
  unsigned __int8 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int8 v9; // r11
  __int64 v10; // rax
  const char *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int8 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r9
  const struct RawInputManagerObject *v20; // r10
  unsigned __int8 v21; // r11
  int v22; // [rsp+30h] [rbp-69h] BYREF
  int v23; // [rsp+34h] [rbp-65h] BYREF
  __int64 v24; // [rsp+38h] [rbp-61h] BYREF
  const struct RawInputManagerObject *v25; // [rsp+40h] [rbp-59h] BYREF
  const struct RawInputManagerObject *v26; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  const struct RawInputManagerObject **v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  const struct RawInputManagerObject **v30; // [rsp+80h] [rbp-19h]
  __int64 v31; // [rsp+88h] [rbp-11h]
  __int64 *v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  __int64 v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+17h] BYREF
  int *v37; // [rsp+C0h] [rbp+27h]
  __int64 v38; // [rsp+C8h] [rbp+2Fh]
  __int64 *v39; // [rsp+D0h] [rbp+37h]
  __int64 v40; // [rsp+D8h] [rbp+3Fh]

  v2 = *((_BYTE *)a2 + 48);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
      {
        if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
        {
          v18 = *(_QWORD *)(v16 + 472);
          v28 = &v25;
          v25 = (const struct RawInputManagerObject *)v16;
          v30 = &v26;
          LODWORD(v24) = v17;
          v32 = &v24;
          v34 = v16 + 16;
          v29 = 8LL;
          v26 = a1;
          v31 = 8LL;
          v33 = v15;
          v35 = 8LL;
          v23 = *(unsigned __int16 *)(v18 + 16);
          pDesc.Ptr = (ULONGLONG)&v23;
          *(_QWORD *)&pDesc.Size = v15;
          v22 = *(unsigned __int16 *)(v18 + 18);
          v37 = &v22;
          v38 = v15;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F95D, 0LL, 0LL, 8u, &pData);
        }
      }
      else if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
      {
        v26 = (const struct RawInputManagerObject *)v8;
        v28 = &v26;
        v30 = &v25;
        v22 = v9;
        v32 = (__int64 *)&v22;
        v34 = v8 + 16;
        v10 = *(_QWORD *)(v8 + 480);
        v29 = 8LL;
        v25 = a1;
        v31 = 8LL;
        v33 = v7;
        v35 = 8LL;
        v11 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v10 + 24));
        TlgCreateSz(&pDesc, v11);
        v13 = *(_QWORD *)(v12 + 472);
        v23 = *(unsigned __int16 *)(v13 + 16);
        v37 = &v23;
        v38 = v14;
        LODWORD(v24) = *(unsigned __int16 *)(v13 + 18);
        v39 = &v24;
        v40 = v14;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F8E8, 0LL, 0LL, 9u, &pData);
      }
    }
    else if ( v2 == 1 && dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v25 = v20;
      v28 = &v25;
      LODWORD(v24) = v21;
      v30 = (const struct RawInputManagerObject **)&v24;
      v29 = 8LL;
      v31 = v19;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F9BB, 0LL, 0LL, v19, &pData);
    }
  }
  else if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v24 = v5;
      v28 = (const struct RawInputManagerObject **)&v24;
      v22 = v6;
      v30 = (const struct RawInputManagerObject **)&v22;
      v29 = 8LL;
      v31 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F8B0, 0LL, 0LL, cData, &pData);
    }
  }
}
