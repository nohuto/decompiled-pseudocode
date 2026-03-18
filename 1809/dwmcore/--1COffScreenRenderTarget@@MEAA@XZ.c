/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18001D3A4
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x18001D250 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180157CA0 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18015BCC0 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18015CE70 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x180175E90 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &COffScreenRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 272);
  CRenderTarget::~CRenderTarget(this);
}
