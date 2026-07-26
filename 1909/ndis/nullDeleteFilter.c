/*
 * XREFs of nullDeleteFilter @ 0x1C00A3978
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009A0C0 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C003E2A0 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *P)
{
  NdisFreeRWLock(P[36]);
  ExFreePoolWithTag(P, 0);
}
