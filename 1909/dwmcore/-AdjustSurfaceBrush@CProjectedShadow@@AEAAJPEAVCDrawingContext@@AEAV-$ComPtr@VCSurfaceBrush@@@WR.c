/*
 * XREFs of ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801EE6F8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801EEFF4 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036C70 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800C7EB4 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800CB01C (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CMatrixTransform3D@@KAPEAX_K@Z @ 0x1800D0580 (--2CMatrixTransform3D@@KAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x180159330 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1801EE858 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __m128 v5; // xmm6
  struct D2D_MATRIX_3X2_F *v6; // r9
  CComponentTransform2D *v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  struct D2D_RECT_F v14; // [rsp+38h] [rbp-9h] BYREF
  struct CComponentTransform2D *v15; // [rsp+48h] [rbp+7h] BYREF
  struct D2D_RECT_F v16; // [rsp+50h] [rbp+Fh] BYREF
  struct D2D_RECT_F v17; // [rsp+60h] [rbp+1Fh] BYREF

  v4 = *(_QWORD *)(a2 + 6056);
  v15 = 0LL;
  v5 = (__m128)_mm_loadu_si128((const __m128i *)((char *)CProjectedShadow::s_cp2xBlurSurface + 136));
  CProjectedShadow::CalculateBounds(a1, &v16, a3, v4);
  LODWORD(v14.left) = v5.m128_i32[0];
  LODWORD(v14.top) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  LODWORD(v14.right) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  LODWORD(v14.bottom) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  D2DMatrixHelper::ComputeRectangleTransform(&v14, &v16, &v17, v6);
  v7 = (CComponentTransform2D *)CMatrixTransform3D::operator new();
  if ( v7 )
    v7 = CComponentTransform2D::CComponentTransform2D(v7, *(struct CComposition **)(a1 + 16));
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
    (__int64 *)&v15,
    (__int64)v7);
  v8 = ((__int64 (__fastcall *)(char *, void *, struct D2D_RECT_F *))xmmword_1803361D8)(
         (char *)v15 + SDWORD2(xmmword_1803361D8),
         &CComponentTransform2D::sc_TransformMatrix,
         &v17);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x48Au, 0LL);
  }
  else
  {
    v11 = CSurfaceBrush::SetTransform((struct CResource **)CProjectedShadow::s_cp2xBlurSurface, v15);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x48Cu, 0LL);
    else
      v10 = 0;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v15);
  return v10;
}
