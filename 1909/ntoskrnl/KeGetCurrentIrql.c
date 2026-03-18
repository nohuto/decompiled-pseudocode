/*
 * XREFs of KeGetCurrentIrql @ 0x1400E3A00
 * Callers:
 *     BgGetContext @ 0x14098E034 (BgGetContext.c)
 *     BgFreeContext @ 0x14098E1D4 (BgFreeContext.c)
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x14098E830 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x140990E70 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1409934EC (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14099355C (BgLibraryDestroy.c)
 *     BgSetBootGraphicsInformation @ 0x140993600 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
