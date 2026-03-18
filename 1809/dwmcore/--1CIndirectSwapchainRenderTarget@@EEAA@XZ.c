/*
 * XREFs of ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18015BCC0
 * Callers:
 *     ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x18015BD40 (--_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(CIndirectSwapchainRenderTarget *this)
{
  *(_QWORD *)this = &CIndirectSwapchainRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  CIndirectSwapchainRenderTarget::Unregister(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 60);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 54);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 50);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
