/*
 * XREFs of GreUnlockRegion @ 0x1C0131D30
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C00BE340 (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
