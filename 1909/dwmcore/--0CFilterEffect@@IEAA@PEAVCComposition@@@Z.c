/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B7C4
 * Callers:
 *     ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B3E4 (--0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B434 (--0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBlendEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B470 (--0CBlendEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B498 (--0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B628 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B718 (--0CCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B82C (--0CFloodEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B868 (--0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHueRotationEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019BA40 (--0CHueRotationEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSaturationEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C144 (--0CSaturationEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C35C (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180215CD8 (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180216DB4 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x1802173FC (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFilterEffect *__fastcall CFilterEffect::CFilterEffect(CFilterEffect *this, struct CComposition *a2)
{
  CFilterEffect *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CFilterEffect::`vftable';
  *((_QWORD *)this + 9) = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  *((_QWORD *)this + 10) = this;
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 2;
  *(_QWORD *)((char *)this + 108) = 2LL;
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  return result;
}
