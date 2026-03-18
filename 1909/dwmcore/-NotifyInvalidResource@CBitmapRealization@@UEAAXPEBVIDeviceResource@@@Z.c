/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800D9660
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180255BA0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180262E80 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x18001F9A8 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18007AF8C (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800BF2BC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800D969C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CBitmapRealization::NotifyInvalidResource(CBitmapRealization *this, const struct IDeviceResource *a2)
{
  __int64 v4; // rbx

  if ( !CD2DBitmapCache::RemoveFromCache((CBitmapRealization *)((char *)this - 24), a2) )
  {
    CD2DBitmapCache::ClearCache((CBitmapRealization *)((char *)this - 24));
    v4 = *((_QWORD *)this + 48);
    if ( v4 )
    {
      CRenderTargetBitmap::ReleaseRenderTargetBitmap(*((CRenderTargetBitmap **)this + 48));
      *(_BYTE *)(v4 + 205) = 0;
    }
    CDeviceResource::NotifyInvalid((CBitmapRealization *)((char *)this + 64), a2);
  }
}
