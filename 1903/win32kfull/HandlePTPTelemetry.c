/*
 * XREFs of HandlePTPTelemetry @ 0x1C0161420
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C000FE40 (-EndShutdown@@YAXJ@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01CE114 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01CE9A8 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void *HandlePTPTelemetry()
{
  void *result; // rax

  if ( *((_DWORD *)&gTPTelemState + 23) )
  {
    TraceLoggingPTPGestureUsageEvent(gTPTelemState);
    if ( *((__int64 *)&gTPTelemState + 12) > 0
      || *((__int64 *)&gTPTelemState + 15) > 0
      || *((_DWORD *)&gTPTelemState + 4)
      || *((_DWORD *)&gTPTelemState + 6) )
    {
      TraceLoggingPTPUsageDetailsEvent(gTPTelemState, gliQpcFreq);
    }
    return memset(gTPTelemState, 0, 0x90uLL);
  }
  return result;
}
