/*
 * XREFs of ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C0162F04
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0163C70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C017A334 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFrame(const struct RIMDEV *a1, const struct CPointerInputFrame *a2)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  __int64 *v21; // [rsp+80h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+Fh]
  __int64 *v23; // [rsp+90h] [rbp+17h]
  __int64 v24; // [rsp+98h] [rbp+1Fh]
  __int64 v25; // [rsp+A0h] [rbp+27h]
  __int64 v26; // [rsp+A8h] [rbp+2Fh]
  __int64 v27; // [rsp+B0h] [rbp+37h]
  __int64 v28; // [rsp+B8h] [rbp+3Fh]

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 60) + 24LL);
  if ( (unsigned int)(v2 - 1) > 3 )
  {
    if ( (unsigned int)(v2 - 5) > 1 )
    {
      if ( v2 == 7 )
      {
        if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
        {
          v17[0] = v11;
          v19 = v17;
          v16 = *(_QWORD *)(v10 + 104);
          v21 = &v16;
          v15 = *(_QWORD *)(v10 + 72);
          v23 = &v15;
          v25 = v10 + 40;
          v27 = v10 + 48;
          v20 = 8LL;
          v22 = 8LL;
          v24 = 8LL;
          v26 = v9;
          v28 = v9;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6A34, 0LL, 0LL, 7u, &pData);
        }
      }
      else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
      {
        v17[0] = v14;
        v19 = v17;
        v16 = *(_QWORD *)(v13 + 104);
        v21 = &v16;
        v15 = *(_QWORD *)(v13 + 72);
        v23 = &v15;
        v25 = v13 + 40;
        v27 = v13 + 48;
        v20 = 8LL;
        v22 = 8LL;
        v24 = 8LL;
        v26 = v12;
        v28 = v12;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6A91, 0LL, 0LL, 7u, &pData);
      }
    }
    else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
    {
      v17[0] = v8;
      v19 = v17;
      v16 = *(_QWORD *)(v7 + 104);
      v21 = &v16;
      v15 = *(_QWORD *)(v7 + 72);
      v23 = &v15;
      v25 = v7 + 40;
      v27 = v7 + 48;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = v6;
      v28 = v6;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E69D7, 0LL, 0LL, 7u, &pData);
    }
  }
  else if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
    {
      v15 = v5;
      v19 = &v15;
      v16 = *(_QWORD *)(v4 + 104);
      v21 = &v16;
      v17[0] = *(_QWORD *)(v4 + 72);
      v23 = v17;
      v25 = v4 + 40;
      v27 = v4 + 48;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = v3;
      v28 = v3;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6978, 0LL, 0LL, 7u, &pData);
    }
  }
}
