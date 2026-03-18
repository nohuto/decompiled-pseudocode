/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C011CF20
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C011B600 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C011B8A0 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C011CE20 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C011CF50 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GrePolyDraw @ 0x1C026F8F8 (GrePolyDraw.c)
 *     NtGdiFlattenPath @ 0x1C027DB90 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C027DC40 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C027DE80 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C027DFA0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C027E100 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C027E230 (NtGdiWidenPath.c)
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
