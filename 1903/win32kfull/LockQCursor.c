/*
 * XREFs of LockQCursor @ 0x1C0011F20
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01CBFE0 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LockQCursor(__int64 a1, struct tagCURSOR *a2)
{
  const CHAR *v5; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-29h] BYREF
  struct tagCURSOR *v7; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  struct tagCURSOR **v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  _QWORD *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  if ( (*(_DWORD *)(a1 + 396) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( dword_1C03222C0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 8uLL) )
  {
    v5 = InputTraceLogging::CursorToString(a2);
    TlgCreateSz(&pDesc, v5);
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    v13 = v6;
    v7 = a2;
    v11 = 8;
    v6[0] = a1;
    v14 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E5619, 0LL, 0LL, 5u, &pData);
  }
  v6[1] = a2;
  v6[0] = a1 + 384;
  return HMAssignmentLock(v6);
}
