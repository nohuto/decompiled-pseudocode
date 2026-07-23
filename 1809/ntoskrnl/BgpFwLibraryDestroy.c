/*
 * XREFs of BgpFwLibraryDestroy @ 0x140951E4C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x14095449C (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x140951508 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409520F8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140406B78 )
  {
    BgpFoDestroy(qword_140406B78);
    if ( *(_QWORD *)qword_140406B78 && (*(_DWORD *)(qword_140406B78 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140406B78);
    BgpFwFreeMemory(qword_140406B78);
    qword_140406B78 = 0LL;
  }
  if ( qword_140406B00 )
  {
    BgpFwFreeMemory(qword_140406B00);
    qword_140406B00 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140406B80 = 0LL;
    qword_140406B98 = 0LL;
    qword_140406B90 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140406AD0 = 0;
  return 0LL;
}
