/*
 * XREFs of MiLockAwePagesExclusive @ 0x1402D6E5C
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x140896B9C (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140115F50 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
