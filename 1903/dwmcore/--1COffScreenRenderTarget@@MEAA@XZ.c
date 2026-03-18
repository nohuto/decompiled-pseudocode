/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18019A800
 * Callers:
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180194EE4 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x18019A8A0 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1801A9F08 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1801FD580 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024EEA8 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18019AF10 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 272);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
