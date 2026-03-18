/*
 * XREFs of ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x18023FE90
 * Callers:
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18023F998 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B2508 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x18015C8A4 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x18023FFD0 (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Init(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2,
        UINT a3,
        UINT a4,
        UINT a5,
        unsigned int a6,
        const struct PixelFormatInfo *a7)
{
  struct IDXGISwapChain1 **v7; // rbx
  __int64 v11; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  signed int inited; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  DXGI_SWAP_CHAIN_DESC1 v21; // [rsp+30h] [rbp-48h] BYREF

  v7 = (struct IDXGISwapChain1 **)((char *)this + 216);
  v21.Width = a3;
  v21.Height = a4;
  v11 = *((_QWORD *)this + 27);
  v21.Format = *(_DWORD *)a7;
  v21.AlphaMode = *((_DWORD *)a7 + 1);
  *v7 = 0LL;
  v21.Stereo = 0;
  v21.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  v21.BufferUsage = 32;
  v21.BufferCount = a5;
  v21.Scaling = DXGI_SCALING_STRETCH;
  v21.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
  v21.Flags = 0;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v13 = CD3DDeviceLevel1::CreateSwapChainForComposition(a2, &v21, v7);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x4Au, 0LL);
  }
  else
  {
    *((_DWORD *)this + 115) = a6;
    *((_DWORD *)this + 114) = a5;
    *((_DWORD *)this + 2) = a3;
    *((_DWORD *)this + 3) = a4;
    inited = CHwCompSwapChainTarget::InitTargetSurface(this, a2, a7);
    v15 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, inited, 0x51u, 0LL);
    }
    else
    {
      v18 = CBaseRenderTarget::Init(this);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x53u, 0LL);
    }
  }
  return v15;
}
