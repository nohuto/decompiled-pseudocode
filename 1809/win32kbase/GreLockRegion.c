/*
 * XREFs of GreLockRegion @ 0x1C0107A00
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C0022520 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1)
{
  return HmgLock(a1, 4) != 0;
}
