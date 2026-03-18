/*
 * XREFs of KeWakeProcessor @ 0x1402AA670
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401C80F0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C83D0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C86B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C8990 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C8C70 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1401CEC40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401D2540 (KiMcheckAbort.c)
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
    &qword_1404470C8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
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
