/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0023B70
 * Callers:
 *     GreSetBitmapOwner @ 0x1C001CA70 (GreSetBitmapOwner.c)
 *     EngLockSurface @ 0x1C0021210 (EngLockSurface.c)
 *     EngUnlockSurface @ 0x1C0021A50 (EngUnlockSurface.c)
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 *     bDfbSurfacesMigrated @ 0x1C0042950 (bDfbSurfacesMigrated.c)
 *     GreCreatePatternBrushInternal @ 0x1C00434E0 (GreCreatePatternBrushInternal.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C0043FFC (GreSetBitmapOwnerEx.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00449E0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C006D02C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     EngModifySurface @ 0x1C007FE60 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C0086A40 (EngAssociateSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C008C470 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C009CEA0 (bMigrateSurfaceForConversion.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00ACA58 (--1SURFREFGC@@QEAA@XZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00F5E40 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C00FF04C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     bInitBMOBJ @ 0x1C021A780 (bInitBMOBJ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  struct OBJECT *v2; // rcx

  v2 = (struct OBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  PopThreadGuardedObject(this);
}
