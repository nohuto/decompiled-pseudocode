/*
 * XREFs of ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0145674
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x1C0148530 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C0148930 (RIMIDEInjectMouseInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessHidInput @ 0x1C0151984 (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0151A84 (rimProcessInjectedDeviceBuffers.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0152D34 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1C01458B4 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::DropInput(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r9
  unsigned int v3; // r10d
  const CHAR *v4; // rax
  __int64 v5; // r9
  unsigned int v6; // r10d
  const CHAR *v7; // rax
  __int64 v8; // r9
  unsigned int v9; // r10d
  const CHAR *v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r10d
  const CHAR *v13; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+27h]
  __int64 v18; // [rsp+68h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+37h] BYREF

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v1 )
  {
    if ( (_BYTE)v1 == 2 )
    {
      v1 = *(_DWORD *)(a1 + 200);
      if ( (v1 & 0x80u) == 0 )
      {
        if ( dword_1C020CB50 > 4u )
        {
          LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL);
          if ( (_BYTE)v1 )
          {
            v15[0] = v8;
            v17 = v15;
            v18 = 8LL;
            v10 = (const CHAR *)InputTraceLogging::DropReasonToString(v9);
            TlgCreateSz(&pDesc, v10);
            LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2E37, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      else if ( dword_1C020CB50 > 4u )
      {
        LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL);
        if ( (_BYTE)v1 )
        {
          v15[0] = v5;
          v17 = v15;
          v18 = 8LL;
          v7 = (const CHAR *)InputTraceLogging::DropReasonToString(v6);
          TlgCreateSz(&pDesc, v7);
          LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2E01, 0LL, 0LL, 4u, &pData);
        }
      }
    }
    else if ( (_BYTE)v1 == 1 && dword_1C020CB50 > 4u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL);
      if ( (_BYTE)v1 )
      {
        v15[0] = v11;
        v17 = v15;
        v18 = 8LL;
        v13 = (const CHAR *)InputTraceLogging::DropReasonToString(v12);
        TlgCreateSz(&pDesc, v13);
        LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2E69, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  else if ( dword_1C020CB50 > 4u )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL);
    if ( (_BYTE)v1 )
    {
      v15[0] = v2;
      v17 = v15;
      v18 = 8LL;
      v4 = (const CHAR *)InputTraceLogging::DropReasonToString(v3);
      TlgCreateSz(&pDesc, v4);
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E2DCD, 0LL, 0LL, 4u, &pData);
    }
  }
  return v1;
}
