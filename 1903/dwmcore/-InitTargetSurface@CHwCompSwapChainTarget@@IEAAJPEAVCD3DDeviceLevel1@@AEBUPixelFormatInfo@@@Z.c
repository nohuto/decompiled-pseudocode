/*
 * XREFs of ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x18023FFD0
 * Callers:
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x18023FE90 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z.c)
 *     ?SetSize@CHwCompSwapChainTarget@@UEAAJII@Z @ 0x180240520 (-SetSize@CHwCompSwapChainTarget@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023FAA4 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::InitTargetSurface(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2,
        const struct PixelFormatInfo *a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = CHwCompSwapChainTarget::EnsureBufferResources(this, a2);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x60u, 0LL);
  else
    (*(void (__fastcall **)(CHwCompSwapChainTarget *, const struct PixelFormatInfo *))(*(_QWORD *)this + 240LL))(
      this,
      a3);
  return v7;
}
