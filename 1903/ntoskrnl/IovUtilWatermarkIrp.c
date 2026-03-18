/*
 * XREFs of IovUtilWatermarkIrp @ 0x1400998EC
 * Callers:
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x140718D4C (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140722700 (IopFilterResourceRequirementsCall.c)
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x14096EDB0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x14096EF3C (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
