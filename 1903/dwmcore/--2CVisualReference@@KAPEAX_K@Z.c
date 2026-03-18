/*
 * XREFs of ??2CVisualReference@@KAPEAX_K@Z @ 0x18019E610
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CVisualReference::operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x38uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
