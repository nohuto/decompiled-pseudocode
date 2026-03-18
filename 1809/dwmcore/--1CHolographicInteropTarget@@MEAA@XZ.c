/*
 * XREFs of ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180210A94
 * Callers:
 *     ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x180210B20 (--_GCHolographicInteropTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FBA8 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x18020B6F8 (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTarget::~CHolographicInteropTarget(CHolographicInteropTarget *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  CHolographicManager::ReleaseResourcesForDisplayChange(*((CHolographicManager **)this + 21));
  v2 = (void *)*((_QWORD *)this + 26);
  if ( v2 )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 27);
  if ( v3 )
    CloseHandle(v3);
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)this + 22);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
