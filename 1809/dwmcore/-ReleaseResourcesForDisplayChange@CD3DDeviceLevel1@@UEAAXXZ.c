/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800E90C0
 * Callers:
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x1800E9068 (-ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180152A28 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800E916C (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800E91A0 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800E9210 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1024) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 126);
    CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDeviceLevel1 *)((char *)this + 520));
    CD2DContext::ReleaseResourcesForDisplayChange(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    v2 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v2);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 74))(
           *((_QWORD *)this + 74),
           &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
           &v2) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    CD3DSurface::Release((CD3DDeviceLevel1 *)((char *)this + 496));
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v2);
  }
}
