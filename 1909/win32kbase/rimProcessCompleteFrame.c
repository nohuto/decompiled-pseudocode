/*
 * XREFs of rimProcessCompleteFrame @ 0x1C01512DC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C014CCB0 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018B400 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@_N@Z @ 0x1C014FD24 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@_N@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C01509D4 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1C015201C (rimQueueCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessCompleteFrame(HANDLE *a1, struct RIMDEV *a2, struct RIMCOMPLETEFRAME *a3)
{
  int v6; // eax
  int v7; // eax

  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (a1[80] || *((_DWORD *)a1 + 216))
    && (v6 = *((_DWORD *)a2 + 46), (v6 & 0x2000) != 0)
    && (v6 & 0x20000) != 0
    && (v6 & 0x400000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    v7 = *((_DWORD *)a2 + 46);
    if ( (v7 & 0x100000) == 0 )
    {
      *((_DWORD *)a2 + 46) = v7 | 0x100000;
      ZwSetEvent(a1[48], 0LL);
    }
  }
  else if ( *((_BYTE *)a1 + 584) )
  {
    *((_BYTE *)a1 + 584) = 0;
    InputTraceLogging::RIM::DispatchFrame(a2, a3, 0);
    rimDispatchCompleteFrame((struct RawInputManagerObject *)a1, a2, (LARGE_INTEGER *)a3);
  }
  else
  {
    rimQueueCompleteFrame(a1, a2, a3);
  }
}
