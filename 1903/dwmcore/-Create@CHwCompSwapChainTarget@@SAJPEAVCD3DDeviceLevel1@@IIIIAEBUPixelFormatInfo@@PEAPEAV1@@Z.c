/*
 * XREFs of ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18023F998
 * Callers:
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A4844 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A57DC (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1802502D8 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x18023F620 (--0CHwCompSwapChainTarget@@IEAA@XZ.c)
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x18023FE90 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Create(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        const struct PixelFormatInfo *a6,
        struct CHwCompSwapChainTarget **a7)
{
  CHwCompSwapChainTarget *v11; // rax
  CHwCompSwapChainTarget *v12; // rax
  __int64 v13; // rcx
  CHwCompSwapChainTarget *v14; // rdi
  unsigned int v15; // ebx
  signed int v16; // eax
  __int64 v17; // rcx
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v11 = (CHwCompSwapChainTarget *)DefaultHeap::AllocClear(0x1D0uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v12 = CHwCompSwapChainTarget::CHwCompSwapChainTarget(v11);
  v14 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v12 + 8LL))(v12);
    v16 = CHwCompSwapChainTarget::Init(v14, a1, a2, a3, a4, (unsigned int)a5, a6);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1Au, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x17u, 0LL);
  }
  return v15;
}
