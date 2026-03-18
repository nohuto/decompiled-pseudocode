/*
 * XREFs of KeWakeProcessor @ 0x1402AA3D0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401C8C70 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401C8F50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C9230 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C9510 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C97F0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401D3140 (KiMcheckAbort.c)
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
    &qword_140446DC8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
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
