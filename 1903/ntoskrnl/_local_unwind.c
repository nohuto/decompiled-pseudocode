/*
 * XREFs of _local_unwind @ 0x14019F910
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x1400FE790 (IopIrpStackProfilerDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1400FEBF0 (ExpTimerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400FEFD0 (KiBalanceSetManagerDeferredRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14015BA00 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x140170400 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140170BE0 (ExpTimeZoneDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140170E70 (PopThermalZoneDpc.c)
 *     IopTimerDispatch @ 0x140293E10 (IopTimerDispatch.c)
 *     ExpCenturyDpcRoutine @ 0x140338290 (ExpCenturyDpcRoutine.c)
 *     ExpGetSubscriptionPfn @ 0x14090C6D4 (ExpGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A143E0 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A14580 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A145D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A14620 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A14670 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A146C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A14720 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A14780 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A147E0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A14840 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A149A0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A14A10 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A14A60 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A14ADC (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14013AC20 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
