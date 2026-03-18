/*
 * XREFs of SetContentOrientation @ 0x1C0182574
 * Callers:
 *     NtSetShellCursorState @ 0x1C0113CF0 (NtSetShellCursorState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     SendOrientationChanged @ 0x1C0182420 (SendOrientationChanged.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0185FA0 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall SetContentOrientation(unsigned int a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  const CHAR *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *(_DWORD *)(MouseProcessor + 2672) = a1;
    v5 = a1 - 1;
    if ( a1 != 1 )
    {
      v5 = a1 - 2;
      if ( a1 != 2 )
      {
        v5 = a1 - 3;
        if ( (unsigned int)v5 >= 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      }
    }
    LOBYTE(MouseProcessor) = SendOrientationChanged(v5);
    if ( dword_1C020CB50 > 4u )
    {
      LOBYTE(MouseProcessor) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL);
      if ( (_BYTE)MouseProcessor )
      {
        v6 = InputTraceLogging::OrientationToString(a1);
        TlgCreateSz(&pDesc, v6);
        LOBYTE(MouseProcessor) = TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E626B, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  return MouseProcessor;
}
