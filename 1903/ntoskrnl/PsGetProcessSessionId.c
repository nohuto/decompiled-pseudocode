/*
 * XREFs of PsGetProcessSessionId @ 0x14008BFD0
 * Callers:
 *     EtwpWriteProcessStarted @ 0x14063531C (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14063FB6C (EtwpInitStateChangeInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1406429E8 (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x140695344 (PspEstablishJobHierarchy.c)
 *     MiLogReserveVaFailed @ 0x140889D54 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408984C8 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C60F0 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
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
