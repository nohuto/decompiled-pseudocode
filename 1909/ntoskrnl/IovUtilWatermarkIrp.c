/*
 * XREFs of IovUtilWatermarkIrp @ 0x1400ED744
 * Callers:
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x14071AB3C (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1407245A0 (IopFilterResourceRequirementsCall.c)
 *     IopEjectDevice @ 0x1408752C4 (IopEjectDevice.c)
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
