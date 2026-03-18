/*
 * XREFs of ?ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18016FD70
 * Callers:
 *     <none>
 * Callees:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18016C3BC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUI.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToD2DBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        struct ID2D1Bitmap1 **a3)
{
  return CDrawingContext::BitmapResourceToD2DBitmap(
           (CDrawingContext *)((char *)this - 8),
           a2,
           (const struct CMILMatrix *)a3,
           0,
           a3);
}
