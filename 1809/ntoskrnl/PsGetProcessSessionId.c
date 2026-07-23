/*
 * XREFs of PsGetProcessSessionId @ 0x140092250
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1405B3408 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     EtwpInitStateChangeInfo @ 0x14060EB80 (EtwpInitStateChangeInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1406110F4 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     MiLogReserveVaFailed @ 0x14084F334 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x14085CB98 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140888F74 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
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
