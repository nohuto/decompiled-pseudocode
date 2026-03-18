/*
 * XREFs of floor @ 0x1800E7F48
 * Callers:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800CF744 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017F814 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017FD24 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBU.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x1801800AC (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D1.c)
 *     ?EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z @ 0x18020A1A0 (-EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180225BA0 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180226BC4 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x180226DC8 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1802502D8 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1802619DC (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl floor(double X)
{
  return __imp_floor(X);
}
