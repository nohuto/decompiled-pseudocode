/*
 * XREFs of KeIsExecutingInArbitraryThreadContext @ 0x1401B442C
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetNtProductType @ 0x14012AD10 (RtlGetNtProductType.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140159074 (MmIsSessionInCurrentServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016CC00 (RtlGetCurrentServiceSessionId.c)
 *     EtwpTraceFileName @ 0x140183ED0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140283ED8 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x140312510 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403125A0 (PerfInfoLogSysCallExit.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsExecutingInArbitraryThreadContext()
{
  return KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->NestingLevel;
}
