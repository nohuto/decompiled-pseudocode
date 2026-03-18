/*
 * XREFs of ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x18001D250
 * Callers:
 *     <none>
 * Callees:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18001D3A4 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x18001D4A0 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CVisualCapture *__fastcall CVisualCapture::`scalar deleting destructor'(CVisualCapture *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVisualCapture::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &COffScreenRenderTarget::`vftable';
  CVisualCapture::UnRegisterNotifiers(this);
  v4 = (void *)*((_QWORD *)this + 55);
  if ( v4 )
    CloseHandle(v4);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
