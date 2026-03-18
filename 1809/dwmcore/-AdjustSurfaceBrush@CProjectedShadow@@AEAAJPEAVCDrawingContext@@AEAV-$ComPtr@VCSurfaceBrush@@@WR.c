/*
 * XREFs of ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801C851C
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18005C5B4 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x18006D1F8 (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CComponentTransform2D@@SAPEAX_K@Z @ 0x180071F44 (--2CComponentTransform2D@@SAPEAX_K@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800A1EA4 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8660 (-CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 */

__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(struct CComposition **a1, struct CDrawingContext *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  struct D2D_MATRIX_3X2_F *v5; // r9
  unsigned int v6; // ebx
  CComponentTransform2D *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct CComponentTransform2D *v13; // [rsp+30h] [rbp-9h] BYREF
  struct D2D_RECT_F v14; // [rsp+38h] [rbp-1h]
  struct D2D_RECT_F v15; // [rsp+48h] [rbp+Fh] BYREF
  struct D2D_RECT_F v16; // [rsp+58h] [rbp+1Fh] BYREF
  struct D2D_RECT_F v17; // [rsp+68h] [rbp+2Fh] BYREF

  v13 = 0LL;
  v16 = *(struct D2D_RECT_F *)((char *)CProjectedShadow::s_cp2xBlurSurface + 136);
  v3 = CProjectedShadow::CalculateBounds((CProjectedShadow *)a1, a2);
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x75Cu);
  }
  else
  {
    v14 = v16;
    D2DMatrixHelper::ComputeRectangleTransform(&v16, &v15, &v17, v5);
    v7 = (CComponentTransform2D *)CComponentTransform2D::operator new();
    if ( v7 )
      v7 = CComponentTransform2D::CComponentTransform2D(v7, a1[2]);
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
      (__int64 *)&v13,
      (__int64)v7);
    v8 = ((__int64 (__fastcall *)(char *, void *, struct D2D_RECT_F *))xmmword_1803051D8)(
           (char *)v13 + SDWORD2(xmmword_1803051D8),
           &CComponentTransform2D::sc_TransformMatrix,
           &v17);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x764u);
    }
    else
    {
      v10 = CSurfaceBrush::SetTransform((struct CResource **)CProjectedShadow::s_cp2xBlurSurface, v13);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x766u);
      else
        v6 = 0;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v13);
  return v6;
}
