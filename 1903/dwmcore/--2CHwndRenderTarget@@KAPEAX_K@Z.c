/*
 * XREFs of ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800DE11C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800DDE2C (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_CREA.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CHwndRenderTarget::operator new()
{
  LPVOID result; // rax
  __int64 v1; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x378uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v1);
  return result;
}
