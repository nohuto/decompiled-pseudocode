/*
 * XREFs of SendMsgCleanup @ 0x1C000E9F0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000DD50 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C000EAC4 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x1C002441C (UnlinkSendListSms.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
