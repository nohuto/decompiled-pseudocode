/*
 * XREFs of IovUtilWatermarkIrp @ 0x14000EAC8
 * Callers:
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FBB10 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1406FCC24 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x14083AE20 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140930534 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409306B4 (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
