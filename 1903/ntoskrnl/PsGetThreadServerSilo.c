/*
 * XREFs of PsGetThreadServerSilo @ 0x1400024F0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x14008B884 (MiGetNextSession.c)
 *     SepAdtLogAuditRecord @ 0x14012CBAC (SepAdtLogAuditRecord.c)
 *     RtlGetNtProductType @ 0x14012E090 (RtlGetNtProductType.c)
 *     EtwpTraceIo @ 0x1401574C0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140157720 (EtwpTraceFileName.c)
 *     MmIsSessionInCurrentServerSilo @ 0x14016956C (MmIsSessionInCurrentServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x140180CE0 (RtlGetCurrentServiceSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x1402990E8 (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x14032DDBC (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x14032FB70 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x14032FCB0 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x140330280 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1403305C0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x140330660 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14085700C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 2008) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1776LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 2008));
}
