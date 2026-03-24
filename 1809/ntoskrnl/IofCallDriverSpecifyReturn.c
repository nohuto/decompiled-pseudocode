/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1401731D0
 * Callers:
 *     PopRequestPowerIrp @ 0x140172560 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x140932260 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x140932960 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1401731F4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140285378 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
