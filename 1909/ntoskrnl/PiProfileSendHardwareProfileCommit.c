/*
 * XREFs of PiProfileSendHardwareProfileCommit @ 0x14086C548
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14086C968 (PpProfileCancelTransitioningDock.c)
 * Callees:
 *     PnpRequestHwProfileChangeNotification @ 0x14085FAF4 (PnpRequestHwProfileChangeNotification.c)
 */

__int64 PiProfileSendHardwareProfileCommit()
{
  return PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
}
