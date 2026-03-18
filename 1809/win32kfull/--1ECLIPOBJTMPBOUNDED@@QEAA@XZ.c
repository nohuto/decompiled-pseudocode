/*
 * XREFs of ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C0161FF4
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

void __fastcall ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED(ECLIPOBJTMPBOUNDED *this)
{
  RGNMEMOBJTMP::~RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
}
