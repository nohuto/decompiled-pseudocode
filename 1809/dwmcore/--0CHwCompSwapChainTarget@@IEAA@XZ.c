/*
 * XREFs of ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x1802002B4
 * Callers:
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180200638 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB204 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

CHwCompSwapChainTarget *__fastcall CHwCompSwapChainTarget::CHwCompSwapChainTarget(CHwCompSwapChainTarget *this)
{
  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget((__int64)this);
  *((_QWORD *)this + 27) = (char *)this + 248;
  *((_QWORD *)this + 28) = (char *)this + 248;
  *((_DWORD *)this + 58) = 2;
  *(_QWORD *)((char *)this + 236) = 2LL;
  *(_QWORD *)this = &CHwCompSwapChainTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwCompSwapChainTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 26) = &CHwCompSwapChainTarget::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 33) = &CHwCompSwapChainTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 34) = &CHwCompSwapChainTarget::`vftable'{for `ISwapChain'};
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = (char *)this + 312;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 47) = (char *)this + 384;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 56) = (char *)this + 456;
  *((_DWORD *)this + 114) = 0;
  return this;
}
