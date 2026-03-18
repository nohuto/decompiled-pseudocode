/*
 * XREFs of ?ReleaseD2DResources@CD2DBitmap@@UEAAXXZ @ 0x1800D9D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DBitmap::ReleaseD2DResources(CD2DBitmap *this)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 16);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 17);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 18);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 19);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 20);
}
