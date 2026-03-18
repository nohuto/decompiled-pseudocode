/*
 * XREFs of ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017F558
 * Callers:
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017F814 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18003E298 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CResampleLayer::CResampleLayer(
        __int64 a1,
        __int128 *a2,
        const struct MilPointAndSizeL *a3,
        float a4,
        float a5,
        int a6,
        struct IRenderTargetBitmap *a7,
        __int64 *a8)
{
  __int64 v10; // rax
  __int128 v11; // xmm0

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a3, a7);
  *(_QWORD *)a1 = &CResampleLayer::`vftable';
  *(_DWORD *)(a1 + 112) = a6;
  v10 = *a8;
  *a8 = 0LL;
  *(_QWORD *)(a1 + 120) = v10;
  *(float *)(a1 + 132) = fmaxf(a5, 1.0);
  v11 = *a2;
  *(float *)(a1 + 128) = fmaxf(a4, 1.0);
  *(_OWORD *)(a1 + 136) = v11;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a8);
  return a1;
}
