/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0037820
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0075388 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007597C (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
