/*
 * XREFs of BgpFwLibraryDestroy @ 0x140990EAC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x14099355C (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x140990558 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140991158 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_14042C0B8 )
  {
    BgpFoDestroy(qword_14042C0B8);
    if ( *(_QWORD *)qword_14042C0B8 && (*(_DWORD *)(qword_14042C0B8 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_14042C0B8);
    BgpFwFreeMemory(qword_14042C0B8);
    qword_14042C0B8 = 0LL;
  }
  if ( qword_14042C040 )
  {
    BgpFwFreeMemory(qword_14042C040);
    qword_14042C040 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_14042C0C0 = 0LL;
    qword_14042C0D8 = 0LL;
    qword_14042C0D0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_14042C010 = 0;
  return 0LL;
}
