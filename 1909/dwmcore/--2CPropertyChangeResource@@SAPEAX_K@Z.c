/*
 * XREFs of ??2CPropertyChangeResource@@SAPEAX_K@Z @ 0x18019CEA0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x1801A35A8 (-ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CPropertyChangeResource::operator new(SIZE_T a1)
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(a1);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
