/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014A204
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C01272B4 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFillPath @ 0x1C0149F60 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C014A050 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C014A0F0 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C014A240 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GrePolyDraw @ 0x1C0269DF4 (GrePolyDraw.c)
 *     NtGdiFlattenPath @ 0x1C02A63C0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A6480 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6700 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6850 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A69E0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A6B40 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((char *)this + 80);
    *((_DWORD *)this + 28) = 0;
  }
}
