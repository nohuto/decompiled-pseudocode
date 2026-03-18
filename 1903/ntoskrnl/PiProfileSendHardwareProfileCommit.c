/*
 * XREFs of PiProfileSendHardwareProfileCommit @ 0x14086CE48
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14086D268 (PpProfileCancelTransitioningDock.c)
 * Callees:
 *     PnpRequestHwProfileChangeNotification @ 0x1408603F4 (PnpRequestHwProfileChangeNotification.c)
 */

__int64 PiProfileSendHardwareProfileCommit()
{
  return PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
}
