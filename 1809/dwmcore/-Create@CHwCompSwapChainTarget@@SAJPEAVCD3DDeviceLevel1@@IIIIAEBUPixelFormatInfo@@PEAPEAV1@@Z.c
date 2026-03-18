/*
 * XREFs of ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180200638
 * Callers:
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568 (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x1802002B4 (--0CHwCompSwapChainTarget@@IEAA@XZ.c)
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x180200B10 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Create(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        const struct PixelFormatInfo *a6,
        struct CHwCompSwapChainTarget **a7)
{
  CHwCompSwapChainTarget *v11; // rax
  CHwCompSwapChainTarget *v12; // rax
  __int64 v13; // rcx
  CHwCompSwapChainTarget *v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v11 = (CHwCompSwapChainTarget *)WPF::ProcessHeapImpl::AllocClear(0x210uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v12 = CHwCompSwapChainTarget::CHwCompSwapChainTarget(v11);
  v14 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v12 + 8LL))(v12);
    v16 = CHwCompSwapChainTarget::Init(v14, a1, a2, a3, a4, a5, a6);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1Du);
      (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      *a7 = v14;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Au);
  }
  return v15;
}
