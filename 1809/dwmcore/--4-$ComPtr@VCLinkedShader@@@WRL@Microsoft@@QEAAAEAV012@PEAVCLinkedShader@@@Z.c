/*
 * XREFs of ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800D8FC8
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

CMILRefCountBase **__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::operator=(
        CMILRefCountBase **a1,
        volatile signed __int32 *a2)
{
  CMILRefCountBase *v3; // rcx

  v3 = *a1;
  if ( v3 != (CMILRefCountBase *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v3 = *a1;
    }
    *a1 = (CMILRefCountBase *)a2;
    if ( v3 )
      CMILRefCountBase::Release(v3);
  }
  return a1;
}
