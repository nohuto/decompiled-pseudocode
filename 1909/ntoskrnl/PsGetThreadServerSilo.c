/*
 * XREFs of PsGetThreadServerSilo @ 0x1400024F0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x14008CB84 (MiGetNextSession.c)
 *     SepAdtLogAuditRecord @ 0x14012D67C (SepAdtLogAuditRecord.c)
 *     RtlGetNtProductType @ 0x14012E9E0 (RtlGetNtProductType.c)
 *     EtwpTraceIo @ 0x140157B60 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140157DC0 (EtwpTraceFileName.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140168FBC (MmIsSessionInCurrentServerSilo.c)
 *     RtlGetCurrentServiceSessionId @ 0x1401813D0 (RtlGetCurrentServiceSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x140298E48 (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x14032D81C (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x14032F5D0 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x14032F710 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x14032FCE0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x140330020 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403300C0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14085670C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400EAEE0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 2008) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1776LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 2008));
}
