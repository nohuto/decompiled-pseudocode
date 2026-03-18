/*
 * XREFs of _local_unwind @ 0x1401A0030
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140101190 (IopIrpStackProfilerDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1401015F0 (ExpTimerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1401019D0 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14015C0A0 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140170AF0 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1401712D0 (ExpTimeZoneDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140171560 (PopThermalZoneDpc.c)
 *     IopTimerDispatch @ 0x140293B70 (IopTimerDispatch.c)
 *     ExpCenturyDpcRoutine @ 0x140337CF0 (ExpCenturyDpcRoutine.c)
 *     ExpGetSubscriptionPfn @ 0x14090C134 (ExpGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A14B80 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A14D20 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A14D70 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A14DC0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A14E10 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A14E60 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A14EC0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A14F20 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A14F80 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A14FE0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A15140 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A151B0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A15200 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A1527C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14013B070 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
