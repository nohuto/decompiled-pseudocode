/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC
 * Callers:
 *     GreSetBitmapOwner @ 0x1C001CA70 (GreSetBitmapOwner.c)
 *     EngLockSurface @ 0x1C0021210 (EngLockSurface.c)
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C0043FFC (GreSetBitmapOwnerEx.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     EngModifySurface @ 0x1C007FE60 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C0086A40 (EngAssociateSurface.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC84C (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00A97DC (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
