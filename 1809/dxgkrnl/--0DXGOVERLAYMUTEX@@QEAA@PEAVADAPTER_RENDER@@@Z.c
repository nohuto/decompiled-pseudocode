/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0020CD8
 * Callers:
 *     DxgkCreateOverlay @ 0x1C021FAE0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0220160 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0220700 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0220BA0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0221190 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 632), 0);
  return this;
}
