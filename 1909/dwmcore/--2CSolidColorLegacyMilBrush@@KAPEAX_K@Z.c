/*
 * XREFs of ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x1800A74DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x1800A5AA8 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800AA1D0 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x180208160 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CSolidColorLegacyMilBrush::operator new()
{
  LPVOID result; // rax
  __int64 v1; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x68uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v1);
  return result;
}
