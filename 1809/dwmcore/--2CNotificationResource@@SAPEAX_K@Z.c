/*
 * XREFs of ??2CNotificationResource@@SAPEAX_K@Z @ 0x18015E27C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x18015EC64 (-ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CRE.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CNotificationResource::operator new(size_t a1)
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(a1);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
