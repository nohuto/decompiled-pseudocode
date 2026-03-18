/*
 * XREFs of ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180162840
 * Callers:
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017EF44 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017FD24 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBU.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x1801800AC (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x180162798 (-EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdi
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax

  v4 = a2;
  v6 = CSurfaceShaderComposer::EnsureSurfaceShader(a1, a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1A0u, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8 * v4);
    if ( v9 )
    {
      *a3 = v9;
    }
    else
    {
      v8 = -2005270524;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x887A0004, 0x1A6u, 0LL);
    }
  }
  return v8;
}
