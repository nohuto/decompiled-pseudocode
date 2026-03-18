/*
 * XREFs of ?ReleaseD2DResources@CD2DBitmap@@UEAAXXZ @ 0x1800CE220
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

void __fastcall CD2DBitmap::ReleaseD2DResources(CD2DBitmap *this)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 16);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 17);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 18);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 19);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 20);
}
