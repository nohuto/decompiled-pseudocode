/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18001F950
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x18001F9A8 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800BF2BC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800D969C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  if ( *((_BYTE *)this + 152) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 24), a2) )
  {
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 24));
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this + 64), a2);
  }
}
