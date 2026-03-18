/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C009983C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099260 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C00994A0 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009CB5C (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AEED0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))HalPrivateDispatchTable[62])(0LL, a1);
  return result;
}
