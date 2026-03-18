/*
 * XREFs of PsGetProcessSessionId @ 0x140092310
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1405B2408 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x140604FE0 (PspEstablishJobHierarchy.c)
 *     EtwpInitStateChangeInfo @ 0x14060DB80 (EtwpInitStateChangeInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1406100F4 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     MiLogReserveVaFailed @ 0x14084E0F4 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x14085B958 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140887D34 (PspTerminateSiloSubsystemProcesses.c)
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
