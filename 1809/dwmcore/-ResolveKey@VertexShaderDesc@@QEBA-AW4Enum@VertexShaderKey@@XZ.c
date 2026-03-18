/*
 * XREFs of ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800DA380
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     InitializeShaderLinkingInput @ 0x1800DA3D8 (InitializeShaderLinkingInput.c)
 * Callees:
 *     <none>
 */

char __fastcall VertexShaderDesc::ResolveKey(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) )
  {
    if ( *(_BYTE *)a1 || *(_DWORD *)(a1 + 4) != 2 )
      return 8;
    return (*(_BYTE *)(a1 + 2) != 0) + 6;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 4);
    if ( v1 != 2 && (v1 != 4 || !*(_BYTE *)(a1 + 2)) )
      return 8;
    if ( *(_BYTE *)a1 )
    {
      if ( v1 == 2 )
        return (*(_BYTE *)(a1 + 2) != 0) + 3;
      else
        return 5;
    }
    else if ( v1 == 2 )
    {
      return *(_BYTE *)(a1 + 2) != 0;
    }
    else
    {
      return 2;
    }
  }
}
