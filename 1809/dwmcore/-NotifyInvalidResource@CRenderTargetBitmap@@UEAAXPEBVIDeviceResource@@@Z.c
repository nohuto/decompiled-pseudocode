/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180180ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800EAF5C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x180180D10 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  if ( *((_BYTE *)this + 152) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 24), a2) )
  {
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 24));
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this + 64), a2);
  }
}
