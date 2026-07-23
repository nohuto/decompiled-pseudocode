/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1401732D0
 * Callers:
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x140933260 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x140933960 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1401732F4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140285568 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
