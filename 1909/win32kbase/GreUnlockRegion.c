/*
 * XREFs of GreUnlockRegion @ 0x1C012F690
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C00BB334 (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
