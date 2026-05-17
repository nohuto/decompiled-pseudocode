/*
 * XREFs of sub_1800FAB50 @ 0x1800FAB50
 * Callers:
 *     sub_1800FAF50 @ 0x1800FAF50 (sub_1800FAF50.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 sub_1800FAB50()
{
  return ZwFreeVirtualMemory();
}
