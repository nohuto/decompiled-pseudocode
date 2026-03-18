/*
 * XREFs of ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016429C
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x180162F70 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E958C (--_V@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CSwapChainBase::RefreshBackBufferViews(CSwapChainBase *this)
{
  __int64 i; // rbx
  char *v3; // rcx
  char *v4; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
    ReleaseInterface<CD3DSurface>((__int64 *)(*((_QWORD *)this + 48) + 8 * i));
  *((_DWORD *)this + 102) = 0;
  v3 = (char *)*((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = 0LL;
  if ( v3 )
  {
    v4 = v3 - 8;
    `vector destructor iterator'(
      v3,
      8LL,
      *((_QWORD *)v3 - 1),
      (void (__fastcall *)(char *))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
    operator delete[](v4);
  }
  return CSwapChainBase::SetupBackBuffers(this, *((struct CD3DResourceManager **)this + 47));
}
