/*
 * XREFs of NdisMIdleNotificationComplete @ 0x1C00B6CA0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6CC0 (NdisMIdleNotificationCompleteEx.c)
 */

__int64 __fastcall NdisMIdleNotificationComplete(char a1)
{
  return NdisMIdleNotificationCompleteEx(a1, 0);
}
