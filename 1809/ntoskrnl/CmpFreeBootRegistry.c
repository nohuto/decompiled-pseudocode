/*
 * XREFs of CmpFreeBootRegistry @ 0x14026D9C4
 * Callers:
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1407378C8 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
