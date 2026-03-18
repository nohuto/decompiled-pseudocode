/*
 * XREFs of ??2CMatrixTransform@@KAPEAX_K@Z @ 0x1800D679C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CMatrixTransform::operator new()
{
  LPVOID result; // rax
  __int64 v1; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0xB0uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v1);
  return result;
}
