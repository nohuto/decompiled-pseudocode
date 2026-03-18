/*
 * XREFs of BgpFwLibraryDestroy @ 0x140950E4C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x14095349C (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x140950508 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140950F24 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409510F8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140405B78 )
  {
    BgpFoDestroy(qword_140405B78);
    if ( *(_QWORD *)qword_140405B78 && (*(_DWORD *)(qword_140405B78 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140405B78);
    BgpFwFreeMemory(qword_140405B78);
    qword_140405B78 = 0LL;
  }
  if ( qword_140405B00 )
  {
    BgpFwFreeMemory(qword_140405B00);
    qword_140405B00 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140405B80 = 0LL;
    qword_140405B98 = 0LL;
    qword_140405B90 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140405AD0 = 0;
  return 0LL;
}
