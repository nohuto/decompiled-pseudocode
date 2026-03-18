/*
 * XREFs of ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1801FBE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180198F40 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x1802113C0 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 */

CVisualCapture *__fastcall CVisualCapture::`scalar deleting destructor'(CVisualCapture *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVisualCapture::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  CVisualCapture::UnRegisterNotifiers(this);
  v4 = (void *)*((_QWORD *)this + 54);
  if ( v4 )
    CloseHandle(v4);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
