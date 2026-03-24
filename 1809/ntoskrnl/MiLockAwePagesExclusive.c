/*
 * XREFs of MiLockAwePagesExclusive @ 0x1402B1294
 * Callers:
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408501F4 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x140850350 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140118FE0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 56, 0LL);
}
