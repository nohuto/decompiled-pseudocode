/*
 * XREFs of nullDeleteFilter @ 0x1C00A37A8
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C0099EF0 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C003E2B0 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *P)
{
  NdisFreeRWLock(P[36]);
  ExFreePoolWithTag(P, 0);
}
