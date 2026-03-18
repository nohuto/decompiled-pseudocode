/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800EAF20
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180226FE0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802294F0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18006A154 (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800EAF5C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x180180D10 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
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
