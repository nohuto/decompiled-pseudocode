/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78
 * Callers:
 *     bDfbSurfacesMigrated @ 0x1C0042950 (bDfbSurfacesMigrated.c)
 *     GreCreatePatternBrushInternal @ 0x1C00434E0 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00449E0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C006D02C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     bMigrateSurfaceForConversion @ 0x1C009CEA0 (bMigrateSurfaceForConversion.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00F5E40 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C00FF04C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bInitBMOBJ @ 0x1C021A780 (bInitBMOBJ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00A97DC (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  unsigned int v2; // ebx

  v2 = (unsigned int)a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = HmgShareLockCheck(v2, 5);
  return this;
}
