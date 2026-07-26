/*
 * XREFs of NdisMIdleNotificationComplete @ 0x1C00B6E70
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6E90 (NdisMIdleNotificationCompleteEx.c)
 */

__int64 __fastcall NdisMIdleNotificationComplete(char a1)
{
  return NdisMIdleNotificationCompleteEx(a1, 0);
}
