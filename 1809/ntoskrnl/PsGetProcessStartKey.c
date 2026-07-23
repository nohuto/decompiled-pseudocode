/*
 * XREFs of PsGetProcessStartKey @ 0x1400CCC30
 * Callers:
 *     EtwpWriteAppStateChangeWithStats @ 0x1405B270C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteProcessStarted @ 0x1405B3408 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x14060EB80 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1864) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
