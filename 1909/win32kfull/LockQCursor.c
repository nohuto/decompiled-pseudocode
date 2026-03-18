/*
 * XREFs of LockQCursor @ 0x1C0020550
 * Callers:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01CBE50 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  if ( dword_1C03202C0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 8uLL) )
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
    TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E4BD9, 0LL, 0LL, 5u, &pData);
  }
  v6[1] = a2;
  v6[0] = a1 + 384;
  return HMAssignmentLock(v6);
}
