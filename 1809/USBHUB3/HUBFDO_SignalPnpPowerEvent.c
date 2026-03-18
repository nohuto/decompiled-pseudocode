/*
 * XREFs of HUBFDO_SignalPnpPowerEvent @ 0x1C000B7E0
 * Callers:
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0007960 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C00079A0 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_QueueingFakeStatusChangeOnResumeInS0 @ 0x1C0007AE0 (HUBHSM_QueueingFakeStatusChangeOnResumeInS0.c)
 *     HUBHSM_SignalingPnPPowerEventOnPendingStop @ 0x1C0008090 (HUBHSM_SignalingPnPPowerEventOnPendingStop.c)
 *     HUBHSM_SignalingPnPPowerEventOnStop @ 0x1C00080C0 (HUBHSM_SignalingPnPPowerEventOnStop.c)
 *     HUBHSM_WaitingForD0Entry @ 0x1C0008120 (HUBHSM_WaitingForD0Entry.c)
 *     HUBHSM_UnblockResumeWaitingForStop @ 0x1C0008160 (HUBHSM_UnblockResumeWaitingForStop.c)
 * Callees:
 *     <none>
 */

LONG __fastcall HUBFDO_SignalPnpPowerEvent(struct _KEVENT *a1)
{
  a1[49].Header.LockNV = 0;
  return KeSetEvent(a1 + 48, 0, 0);
}
