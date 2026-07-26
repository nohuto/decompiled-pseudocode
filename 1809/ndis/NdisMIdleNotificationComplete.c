/*
 * XREFs of NdisMIdleNotificationComplete @ 0x1C0073C70
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIdleNotificationCompleteEx @ 0x1C0073C90 (NdisMIdleNotificationCompleteEx.c)
 */

__int64 __fastcall NdisMIdleNotificationComplete(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return NdisMIdleNotificationCompleteEx(a1);
}
