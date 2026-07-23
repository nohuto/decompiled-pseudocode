/*
 * XREFs of KeGetCurrentIrql @ 0x1400BC780
 * Callers:
 *     BgGetContext @ 0x14094F034 (BgGetContext.c)
 *     BgFreeContext @ 0x14094F1D4 (BgFreeContext.c)
 *     BgDisplayFade @ 0x14094F608 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x14094F81C (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x140951E10 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x14095442C (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14095449C (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
