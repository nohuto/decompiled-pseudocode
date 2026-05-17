/*
 * XREFs of sub_1800DCA58 @ 0x1800DCA58
 * Callers:
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 *     sub_1800DC748 @ 0x1800DC748 (sub_1800DC748.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_1800DCA58(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
