/*
 * XREFs of PiProfileSendHardwareProfileCancel @ 0x14086C520
 * Callers:
 *     PpProfileCancelHardwareProfileTransition @ 0x14086C8F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14086C968 (PpProfileCancelTransitioningDock.c)
 * Callees:
 *     PnpRequestHwProfileChangeNotification @ 0x14085FAF4 (PnpRequestHwProfileChangeNotification.c)
 */

__int64 PiProfileSendHardwareProfileCancel()
{
  return PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
}
