/*
 * XREFs of MiLockAwePagesExclusive @ 0x1402D6BBC
 * Callers:
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408963BC (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x140896518 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
