/*
 * XREFs of ??0CImageSourceResource@@QEAA@PEAVCComposition@@PEAVIImageSource@@@Z @ 0x1801C81D0
 * Callers:
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@@Z @ 0x1801C9140 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4 (-GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x18006C0D8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 */

CImageSourceResource *__fastcall CImageSourceResource::CImageSourceResource(
        CImageSourceResource *this,
        struct CComposition *a2,
        struct IImageSource *a3)
{
  __int64 *v4; // rcx

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CImageSourceResource::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CImageSourceResource::`vftable'{for `IImageSource'};
  v4 = (__int64 *)((char *)this + 64);
  *v4 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(v4, (__int64)a3);
  return this;
}
