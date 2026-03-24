/*
 * XREFs of KeGetCurrentIrql @ 0x1400BC840
 * Callers:
 *     BgGetContext @ 0x14094E034 (BgGetContext.c)
 *     BgFreeContext @ 0x14094E1D4 (BgFreeContext.c)
 *     BgDisplayFade @ 0x14094E608 (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x14094E81C (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x140950E10 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x14095342C (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14095349C (BgLibraryDestroy.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
