/*
 * XREFs of _local_unwind @ 0x140195300
 * Callers:
 *     IopTimerDispatch @ 0x1400018F0 (IopTimerDispatch.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x140126D20 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140129910 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140136230 (ExpTimerDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139DC0 (ExpTimeZoneDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14013A6A0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401602C0 (ExpCenturyDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x140178030 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140190310 (PopThermalZoneDpc.c)
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x1409D08B4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x1409D0A40 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1409D0A90 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1409D0AE0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1409D0B30 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1409D0B80 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1409D0BE0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1409D0C40 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1409D0CA0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1409D0D00 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x1409D0E60 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1409D0ED0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1409D0F20 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x1409D0F9C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x140137610 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
