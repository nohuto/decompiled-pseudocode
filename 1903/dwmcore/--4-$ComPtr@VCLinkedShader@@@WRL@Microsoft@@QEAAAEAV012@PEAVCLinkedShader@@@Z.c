/*
 * XREFs of ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x180027AD4
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180027B10 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

CDirtyRegion **__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::operator=(
        CDirtyRegion **a1,
        volatile signed __int32 *a2)
{
  CDirtyRegion *v3; // rcx

  v3 = *a1;
  if ( v3 != (CDirtyRegion *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v3 = *a1;
    }
    *a1 = (CDirtyRegion *)a2;
    if ( v3 )
      CDirtyRegion::Release(v3);
  }
  return a1;
}
