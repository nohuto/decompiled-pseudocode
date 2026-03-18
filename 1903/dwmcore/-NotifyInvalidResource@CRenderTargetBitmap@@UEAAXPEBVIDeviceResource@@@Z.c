/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800215B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x180021608 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x180047EDC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800D8EFC (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  if ( *((_BYTE *)this + 152) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 24), a2) )
  {
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 24));
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this + 64), a2);
  }
}
