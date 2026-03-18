/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0149454
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0065250 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00FB094 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFillPath @ 0x1C01491B0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C01492A0 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C0149340 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0149490 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GrePolyDraw @ 0x1C026A524 (GrePolyDraw.c)
 *     NtGdiFlattenPath @ 0x1C02A6870 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A6930 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6BB0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6D00 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A6E90 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A6FF0 (NtGdiWidenPath.c)
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
