/*
 * XREFs of CmpFreeBootRegistry @ 0x14026D6D4
 * Callers:
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1407366F8 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
