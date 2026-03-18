/*
 * XREFs of GreUnlockRegion @ 0x1C00D9D90
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C00766BC (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
