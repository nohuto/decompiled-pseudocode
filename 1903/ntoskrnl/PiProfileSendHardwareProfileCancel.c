/*
 * XREFs of PiProfileSendHardwareProfileCancel @ 0x14086CE20
 * Callers:
 *     PpProfileCancelHardwareProfileTransition @ 0x14086D1F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14086D268 (PpProfileCancelTransitioningDock.c)
 * Callees:
 *     PnpRequestHwProfileChangeNotification @ 0x1408603F4 (PnpRequestHwProfileChangeNotification.c)
 */

__int64 PiProfileSendHardwareProfileCancel()
{
  return PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
}
