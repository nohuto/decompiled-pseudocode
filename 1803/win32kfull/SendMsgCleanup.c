/*
 * XREFs of SendMsgCleanup @ 0x1C000BBC0
 * Callers:
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C000BC90 (xxxReceiverDied.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
