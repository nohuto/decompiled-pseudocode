/*
 * XREFs of ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0147CE4
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x1C014ABA0 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C014AFA0 (RIMIDEInjectMouseInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessHidInput @ 0x1C0153B7C (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0153C7C (rimProcessInjectedDeviceBuffers.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0154F2C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1C0147F24 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z.c)
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
        if ( dword_1C020FB50 > 4u )
        {
          LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL);
          if ( (_BYTE)v1 )
          {
            v15[0] = v8;
            v17 = v15;
            v18 = 8LL;
            v10 = (const CHAR *)InputTraceLogging::DropReasonToString(v9);
            TlgCreateSz(&pDesc, v10);
            LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4DF7, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      else if ( dword_1C020FB50 > 4u )
      {
        LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL);
        if ( (_BYTE)v1 )
        {
          v15[0] = v5;
          v17 = v15;
          v18 = 8LL;
          v7 = (const CHAR *)InputTraceLogging::DropReasonToString(v6);
          TlgCreateSz(&pDesc, v7);
          LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4DC1, 0LL, 0LL, 4u, &pData);
        }
      }
    }
    else if ( (_BYTE)v1 == 1 && dword_1C020FB50 > 4u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL);
      if ( (_BYTE)v1 )
      {
        v15[0] = v11;
        v17 = v15;
        v18 = 8LL;
        v13 = (const CHAR *)InputTraceLogging::DropReasonToString(v12);
        TlgCreateSz(&pDesc, v13);
        LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4E29, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  else if ( dword_1C020FB50 > 4u )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL);
    if ( (_BYTE)v1 )
    {
      v15[0] = v2;
      v17 = v15;
      v18 = 8LL;
      v4 = (const CHAR *)InputTraceLogging::DropReasonToString(v3);
      TlgCreateSz(&pDesc, v4);
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4D8D, 0LL, 0LL, 4u, &pData);
    }
  }
  return v1;
}
