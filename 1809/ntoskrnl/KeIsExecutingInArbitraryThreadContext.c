/*
 * XREFs of KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     MmGetSessionById @ 0x14007E4E0 (MmGetSessionById.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetNtProductType @ 0x14012AC20 (RtlGetNtProductType.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140158F54 (MmIsSessionInCurrentServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016CAE0 (RtlGetCurrentServiceSessionId.c)
 *     EtwpTraceFileName @ 0x140183D70 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x140186DA0 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140283BE8 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x140312220 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403122B0 (PerfInfoLogSysCallExit.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsExecutingInArbitraryThreadContext()
{
  return KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->NestingLevel;
}
