/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0023A34
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0254700 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0254D40 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C02552F0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255780 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255D00 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 632), 0);
  return this;
}
