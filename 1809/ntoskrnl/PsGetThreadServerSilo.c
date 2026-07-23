/*
 * XREFs of PsGetThreadServerSilo @ 0x14007E5D0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x14012AD10 (RtlGetNtProductType.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140159074 (MmIsSessionInCurrentServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016CC00 (RtlGetCurrentServiceSessionId.c)
 *     EtwpTraceIo @ 0x1401830E0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140183ED0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140283ED8 (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1403102E0 (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x140311C30 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x140311D70 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x140312310 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x140312510 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403125A0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14081E164 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1992) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1728LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1992));
}
