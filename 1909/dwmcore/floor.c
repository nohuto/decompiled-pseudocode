/*
 * XREFs of floor @ 0x1800E8DF8
 * Callers:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800CF9EC (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017E114 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E624 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBU.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E9AC (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D1.c)
 *     ?EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z @ 0x180208AB0 (-EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180224490 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802254B4 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x1802256B8 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024EB68 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x18026011C (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl floor(double X)
{
  return __imp_floor(X);
}
