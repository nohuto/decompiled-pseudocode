/*
 * XREFs of ??2CColorBrush@@SAPEAX_K@Z @ 0x180074330
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801943E0 (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 *     ?EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ @ 0x1801AD028 (-EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ.c)
 *     ?EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ @ 0x1801AEB04 (-EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ.c)
 *     ?EnsureWhiteColorBrush@CProjectedShadow@@AEAAJXZ @ 0x1801C8A78 (-EnsureWhiteColorBrush@CProjectedShadow@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CColorBrush::operator new()
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x58uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
