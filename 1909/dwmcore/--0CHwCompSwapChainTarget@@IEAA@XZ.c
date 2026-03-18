/*
 * XREFs of ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x18023DF10
 * Callers:
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18023E288 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A87C (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

CHwCompSwapChainTarget *__fastcall CHwCompSwapChainTarget::CHwCompSwapChainTarget(CHwCompSwapChainTarget *this)
{
  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget((__int64)this);
  *((_QWORD *)this + 19) = (char *)this + 184;
  *((_QWORD *)this + 20) = (char *)this + 184;
  *((_DWORD *)this + 42) = 2;
  *(_QWORD *)((char *)this + 172) = 2LL;
  *(_QWORD *)this = &CHwCompSwapChainTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 12) = &CHwCompSwapChainTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 18) = &CHwCompSwapChainTarget::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 25) = &CHwCompSwapChainTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 26) = &CHwCompSwapChainTarget::`vftable'{for `ISwapChain'};
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = (char *)this + 248;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 39) = (char *)this + 320;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 48) = (char *)this + 392;
  *((_DWORD *)this + 98) = 0;
  return this;
}
