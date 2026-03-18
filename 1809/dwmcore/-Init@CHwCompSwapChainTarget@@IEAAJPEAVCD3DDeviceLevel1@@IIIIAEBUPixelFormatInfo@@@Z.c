/*
 * XREFs of ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x180200B10
 * Callers:
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180200638 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x180093814 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801FBDE8 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x180200C4C (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Init(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2,
        UINT a3,
        UINT a4,
        UINT a5,
        unsigned int a6,
        DXGI_FORMAT *a7)
{
  __int64 v11; // rcx
  DXGI_ALPHA_MODE v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int inited; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  DXGI_SWAP_CHAIN_DESC1 v21; // [rsp+30h] [rbp-48h] BYREF

  memset_0(&v21, 0, sizeof(v21));
  v11 = *((_QWORD *)this + 35);
  v21.Format = *a7;
  v12 = *((_DWORD *)a7 + 1);
  v21.Width = a3;
  v21.Height = a4;
  v21.Stereo = 0;
  v21.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  v21.BufferUsage = 32;
  v21.BufferCount = a5;
  v21.Scaling = DXGI_SCALING_STRETCH;
  v21.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
  v21.AlphaMode = v12;
  v21.Flags = 0;
  *((_QWORD *)this + 35) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v13 = CD3DDeviceLevel1::CreateSwapChainForComposition(a2, &v21, (struct IDXGISwapChain1 **)this + 35);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x4Du);
  }
  else
  {
    *((_DWORD *)this + 131) = a6;
    *((_DWORD *)this + 130) = a5;
    *((_DWORD *)this + 2) = a3;
    *((_DWORD *)this + 3) = a4;
    inited = CHwCompSwapChainTarget::InitTargetSurface(this, a2, (const struct PixelFormatInfo *)a7);
    v15 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, inited, 0x54u);
    }
    else
    {
      v18 = CBaseRenderTarget::Init(this);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x56u);
    }
  }
  return v15;
}
