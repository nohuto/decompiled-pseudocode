/*
 * XREFs of CmpFreeBootRegistry @ 0x1402812A8
 * Callers:
 *     HvHiveCleanup @ 0x14062E130 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x140757D54 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
