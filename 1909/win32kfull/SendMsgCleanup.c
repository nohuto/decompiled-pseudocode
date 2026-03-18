/*
 * XREFs of SendMsgCleanup @ 0x1C000E0A0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C000E174 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x1C002A88C (UnlinkSendListSms.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
