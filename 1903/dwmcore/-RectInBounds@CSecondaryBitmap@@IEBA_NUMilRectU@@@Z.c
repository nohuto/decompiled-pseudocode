/*
 * XREFs of ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18003BE7C
 * Callers:
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001C9F0 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18001CC60 (-Update@CSecondarySysmemBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEA.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003EB40 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801AD0A0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003BEC8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x18003BF34 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 */

__int64 __fastcall CSecondaryBitmap::RectInBounds(CSecondaryBitmap *a1)
{
  _BYTE v2[24]; // [rsp+30h] [rbp-18h] BYREF

  CSecondaryBitmap::GetBitmapRect(a1, (struct MilRectU *)v2);
  return TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v2);
}
