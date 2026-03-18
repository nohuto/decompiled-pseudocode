/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140180740
 * Callers:
 *     PopRequestPowerIrp @ 0x140172EB0 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x140970AE0 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x1409711E0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140180764 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14029A534 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140962E34 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
