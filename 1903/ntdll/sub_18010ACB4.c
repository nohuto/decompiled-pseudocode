/*
 * XREFs of sub_18010ACB4 @ 0x18010ACB4
 * Callers:
 *     sub_18010A7B4 @ 0x18010A7B4 (sub_18010A7B4.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

__int64 sub_18010ACB4()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
