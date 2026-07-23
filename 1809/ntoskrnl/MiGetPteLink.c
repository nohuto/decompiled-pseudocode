/*
 * XREFs of MiGetPteLink @ 0x1400AD6E4
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     RemoveListEntryPte @ 0x14012980C (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1401392BC (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_14043B180 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_14043B180;
  }
  return a1 >> 28;
}
