/*
 * XREFs of ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1801AA128
 * Callers:
 *     ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x1801AA1A0 (--_ECHwndRenderTargetDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18002B90C (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTargetDDA::~CHwndRenderTargetDDA(CHwndRenderTargetDDA *this)
{
  __int64 *v2; // rdi
  CDisplay *v3; // rcx

  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  v2 = (__int64 *)((char *)this + 168);
  *((_QWORD *)this + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v3 = (CDisplay *)*((_QWORD *)this + 21);
  if ( v3 )
    CDisplay::ReleaseDDAHwRenderTarget(v3);
  ReleaseInterface<CDisplay>(v2);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
