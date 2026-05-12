/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0038C10
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00762B4 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0076920 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
