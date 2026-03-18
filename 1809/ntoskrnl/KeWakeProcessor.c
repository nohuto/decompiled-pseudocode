/*
 * XREFs of KeWakeProcessor @ 0x140293B90
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401C1140 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C1430 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C1720 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1A10 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1D00 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C2A80 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C37E0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1401C8600 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401CC2C0 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rcx
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  _InterlockedAnd64(
    &qword_14041B468[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
  v2 = __readcr4();
  if ( (v2 & 0x20080) != 0 )
  {
    result = v2 ^ 0x80;
    __writecr4(v2 ^ 0x80);
    __writecr4(v2);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
