/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0140BAC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C0140390 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C0140710 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C0140A20 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0140C0C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFlattenPath @ 0x1C0290C20 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C0290D10 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C0290FA0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C0291100 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02912A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02913E0 (NtGdiWidenPath.c)
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
