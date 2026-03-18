/*
 * XREFs of ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800E4768
 * Callers:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800E4718 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801AEE84 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CSpriteVisualContent::GetBrushGraph(CSpriteVisualContent *this, __int64 a2)
{
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(CSpriteVisualContent *, __int64))(*(_QWORD *)this + 312LL))(this, a2);
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
}
