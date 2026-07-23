/*
 * XREFs of IovUtilWatermarkIrp @ 0x14000EAC8
 * Callers:
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FCD90 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1406FDEA4 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x14083C060 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140931534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409316B4 (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
