/*
 * XREFs of PsGetProcessStartKey @ 0x1400C9AF0
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1406380D4 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x1406536BC (EtwpInitStateChangeInfo.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1406D9FE4 (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1912) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
