/*
 * XREFs of _local_unwind @ 0x1401951C0
 * Callers:
 *     IopTimerDispatch @ 0x1400018F0 (IopTimerDispatch.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x140126C50 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140129840 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140136130 (ExpTimerDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139CC0 (ExpTimeZoneDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14013A5A0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401601C0 (ExpCenturyDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140177F30 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1401901D0 (PopThermalZoneDpc.c)
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1409CF8B4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x1409CFA40 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1409CFA90 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1409CFAE0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1409CFB30 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1409CFB80 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1409CFBE0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1409CFC40 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1409CFCA0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1409CFD00 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x1409CFE60 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1409CFED0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1409CFF20 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x1409CFF9C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x140137510 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
