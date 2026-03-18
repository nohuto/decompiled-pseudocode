/*
 * XREFs of HvMarkDirty @ 0x140839B70
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 * Callees:
 *     HvpMarkDirty @ 0x1405D58F0 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, unsigned int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
