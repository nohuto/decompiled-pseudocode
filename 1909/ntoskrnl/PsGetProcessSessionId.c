/*
 * XREFs of PsGetProcessSessionId @ 0x1400C8670
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1406380D4 (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x1406536BC (EtwpInitStateChangeInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140656538 (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x1406888B4 (PspEstablishJobHierarchy.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     MiLogReserveVaFailed @ 0x140889574 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x140897CE8 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C59D0 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx(a1);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
