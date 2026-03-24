/*
 * XREFs of PsGetThreadServerSilo @ 0x14007E5E0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x14007E4E0 (MmGetSessionById.c)
 *     RtlGetNtProductType @ 0x14012AC40 (RtlGetNtProductType.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140158F74 (MmIsSessionInCurrentServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016CB00 (RtlGetCurrentServiceSessionId.c)
 *     EtwpTraceIo @ 0x140182FA0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140183D90 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x140186DC0 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x140283CE8 (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1403100F0 (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x140311A40 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x140311B80 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x140312120 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x140312320 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403123B0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14081CF64 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FD30 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1992) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1728LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1992));
}
