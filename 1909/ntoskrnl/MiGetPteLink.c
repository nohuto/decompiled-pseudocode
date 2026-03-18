/*
 * XREFs of MiGetPteLink @ 0x140076E80
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400700C0 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140074DD0 (MmMapViewInSystemCache.c)
 *     InsertTailListPte @ 0x140076480 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x140076684 (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 *     RemoveListEntryPte @ 0x14012B0A0 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14013C980 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140465800 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140465800;
  }
  return a1 >> 28;
}
