/*
 * XREFs of BgpFwLibraryDestroy @ 0x140990EAC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x14099355C (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x140990558 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140991158 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_14042C0D8 )
  {
    BgpFoDestroy(qword_14042C0D8);
    if ( *(_QWORD *)qword_14042C0D8 && (*(_DWORD *)(qword_14042C0D8 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_14042C0D8);
    BgpFwFreeMemory(qword_14042C0D8);
    qword_14042C0D8 = 0LL;
  }
  if ( qword_14042C060 )
  {
    BgpFwFreeMemory(qword_14042C060);
    qword_14042C060 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_14042C0E0 = 0LL;
    qword_14042C0F8 = 0LL;
    qword_14042C0F0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_14042C030 = 0;
  return 0LL;
}
