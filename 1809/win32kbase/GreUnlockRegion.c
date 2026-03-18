/*
 * XREFs of GreUnlockRegion @ 0x1C0107A20
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C00AACB0 (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
