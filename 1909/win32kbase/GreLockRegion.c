/*
 * XREFs of GreLockRegion @ 0x1C012F670
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C001DB10 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1)
{
  return HmgLock(a1, 4) != 0;
}
