/*
 * XREFs of ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x180200C4C
 * Callers:
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z @ 0x180200B10 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@@Z.c)
 *     ?SetSize@CHwCompSwapChainTarget@@UEAAJII@Z @ 0x180201240 (-SetSize@CHwCompSwapChainTarget@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18020073C (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::InitTargetSurface(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2,
        const struct PixelFormatInfo *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = CHwCompSwapChainTarget::EnsureBufferResources(this, a2);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x63u);
  else
    (*(void (__fastcall **)(CHwCompSwapChainTarget *, const struct PixelFormatInfo *))(*(_QWORD *)this + 240LL))(
      this,
      a3);
  return v7;
}
