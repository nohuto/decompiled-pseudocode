/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180192580
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(
        CCompositionSurfaceBitmap *this,
        const struct IDeviceResource *a2)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
  CResource::NotifyOnChanged((__int64)this - 72, 5u, 0LL);
}
