/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C002492C
 * Callers:
 *     DxgkFlipOverlay @ 0x1C0254C70 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255100 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255680 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
