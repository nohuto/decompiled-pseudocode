/*
 * XREFs of nullDeleteFilter @ 0x1C00F3F84
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00F01D8 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C00255E0 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *P)
{
  NdisFreeRWLock(P[36]);
  ExFreePoolWithTag(P, 0);
}
