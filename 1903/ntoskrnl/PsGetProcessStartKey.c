/*
 * XREFs of PsGetProcessStartKey @ 0x14008D450
 * Callers:
 *     EtwpWriteProcessStarted @ 0x14063531C (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140637274 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14063FB6C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1912) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
