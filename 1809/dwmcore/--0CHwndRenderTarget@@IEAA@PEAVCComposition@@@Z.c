/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007C564
 * Callers:
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x18007C4B0 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180159930 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180159B38 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007D6C4 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::CHwndRenderTarget(CHwndRenderTarget *this, struct CComposition *a2)
{
  float v3; // xmm0_4
  CHwndRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  v3 = CCommonRegistryData::m_flSDRBoostOverride;
  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 127) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = (char *)this + 576;
  *((_QWORD *)this + 69) = (char *)this + 576;
  *((_DWORD *)this + 140) = 8;
  *(_QWORD *)((char *)this + 564) = 8LL;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 180) = 5;
  *(_QWORD *)((char *)this + 724) = 5LL;
  *((_QWORD *)this + 97) = (char *)this + 808;
  *((_QWORD *)this + 98) = (char *)this + 808;
  *((_DWORD *)this + 198) = 5;
  *(_QWORD *)((char *)this + 796) = 5LL;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 116) = 1065353216;
  *((_WORD *)this + 80) = 257;
  *((_BYTE *)this + 868) = 1;
  result = this;
  *((float *)this + 126) = v3;
  *((_DWORD *)this + 52) = 1;
  *(_OWORD *)((char *)this + 220) = _xmm;
  *((_WORD *)this + 142) = 32085;
  *(_OWORD *)((char *)this + 236) = _xmm;
  *(_OWORD *)((char *)this + 252) = _xmm;
  *(_OWORD *)((char *)this + 268) = _xmm;
  *((_WORD *)this + 176) = 32085;
  *((_OWORD *)this + 18) = _xmm;
  *((_OWORD *)this + 19) = _xmm;
  *((_OWORD *)this + 20) = _xmm;
  *((_OWORD *)this + 21) = _xmm;
  *((_WORD *)this + 210) = 32085;
  *(_OWORD *)((char *)this + 356) = _xmm;
  *(_OWORD *)((char *)this + 372) = _xmm;
  *(_OWORD *)((char *)this + 388) = _xmm;
  *(_OWORD *)((char *)this + 404) = _xmm;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  return result;
}
