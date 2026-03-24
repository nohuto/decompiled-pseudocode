/*
 * XREFs of PsGetProcessStartKey @ 0x1400CCBB0
 * Callers:
 *     EtwpWriteAppStateChangeWithStats @ 0x1405B170C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteProcessStarted @ 0x1405B2408 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x14060DB80 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4C80 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1864) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
