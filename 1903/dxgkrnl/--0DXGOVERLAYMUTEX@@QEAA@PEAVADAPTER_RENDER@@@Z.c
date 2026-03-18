/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00239E4
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0254080 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C02546C0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0254C70 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255100 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255680 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 632), 0);
  return this;
}
