/*
 * XREFs of MiGetPteLink @ 0x140076C10
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     InsertTailListPte @ 0x140076210 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x140076414 (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     RemoveListEntryPte @ 0x14012A680 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14013C360 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140465B00 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140465B00;
  }
  return a1 >> 28;
}
