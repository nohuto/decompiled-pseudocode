/*
 * XREFs of CmpFreeBootRegistry @ 0x140281008
 * Callers:
 *     HvHiveCleanup @ 0x140631FB0 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14075C5E8 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
