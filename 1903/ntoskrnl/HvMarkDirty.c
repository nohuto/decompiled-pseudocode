/*
 * XREFs of HvMarkDirty @ 0x14083A510
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 * Callees:
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, unsigned int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
