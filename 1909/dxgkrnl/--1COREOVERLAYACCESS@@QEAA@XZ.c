/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C002497C
 * Callers:
 *     DxgkFlipOverlay @ 0x1C02552F0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255780 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255D00 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
