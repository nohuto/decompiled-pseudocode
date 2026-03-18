/*
 * XREFs of MiGetPteLink @ 0x1400AD784
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795B0 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400AD200 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400AD910 (MmMapViewInSystemCache.c)
 *     RemoveListEntryPte @ 0x14012971C (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14013919C (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_14043A0C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_14043A0C0;
  }
  return a1 >> 28;
}
