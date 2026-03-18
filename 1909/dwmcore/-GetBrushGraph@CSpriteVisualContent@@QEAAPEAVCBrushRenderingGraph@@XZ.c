/*
 * XREFs of ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18007BD9C
 * Callers:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x180034298 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18007B8BC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F1514 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CSpriteVisualContent::GetBrushGraph(CSpriteVisualContent *this, __int64 a2)
{
  if ( *((_BYTE *)this + 72) && !*((_QWORD *)this + 8) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CSpriteVisualContent *, __int64))(*(_QWORD *)this + 376LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
}
