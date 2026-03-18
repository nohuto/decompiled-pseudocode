/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800240B0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18002405C (-ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1800B7140 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x1801890E0 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180024174 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800241A0 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180024318 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1160) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 126);
    CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDeviceLevel1 *)((char *)this + 520));
    CD2DContext::ReleaseResourcesForDisplayChange(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 74);
    v4 = 0LL;
    v3 = **v2;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v4);
    if ( v3(v2, &GUID_6007896c_3244_4afd_bf18_a6d3beda5023, &v4) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 496));
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v4);
  }
}
