/*
 * XREFs of ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801C8358
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x18006D1F8 (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CComponentTransform2D@@SAPEAX_K@Z @ 0x180071F44 (--2CComponentTransform2D@@SAPEAX_K@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800A1EA4 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z @ 0x1801CAFA4 (-GetScaleForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z.c)
 *     ?GetScaleForSurfaceOfNineGrid@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z @ 0x1801CB058 (-GetScaleForSurfaceOfNineGrid@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z.c)
 *     ?GetTranslationForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z @ 0x1801CB4B8 (-GetTranslationForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::AdjustNineGridBrush(
        struct CComposition **this,
        struct CDrawingContext *a2,
        __int64 *a3)
{
  int TranslationForCrossFade; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int ScaleForCrossFade; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  struct CResource **v13; // r15
  CComponentTransform2D *v14; // rax
  struct CComponentTransform2D *v15; // rdi
  int ScaleForSurfaceOfNineGrid; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _DWORD v25[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-11h] BYREF
  __int128 v27; // [rsp+48h] [rbp-9h] BYREF
  __int64 v28; // [rsp+58h] [rbp+7h]
  _BYTE v29[24]; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v30[32]; // [rsp+78h] [rbp+27h] BYREF
  struct CComponentTransform2D *v31; // [rsp+D0h] [rbp+7Fh] BYREF

  TranslationForCrossFade = CProjectedShadow::GetTranslationForCrossFade(
                              (CProjectedShadow *)this,
                              a2,
                              (struct D2D1::Matrix3x2F *)v29);
  v8 = TranslationForCrossFade;
  if ( TranslationForCrossFade < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, TranslationForCrossFade, 0x70Fu);
  }
  else
  {
    ScaleForCrossFade = CProjectedShadow::GetScaleForCrossFade(
                          (CProjectedShadow *)this,
                          a2,
                          (struct D2D1::Matrix3x2F *)v30);
    v8 = ScaleForCrossFade;
    if ( ScaleForCrossFade < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ScaleForCrossFade, 0x710u);
    }
    else
    {
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v27,
        (const struct D2D1::Matrix3x2F *)v30,
        (const struct D2D1::Matrix3x2F *)v29);
      v11 = *a3;
      v12 = v28;
      *(_OWORD *)(v11 + 116) = v27;
      *(_QWORD *)(v11 + 132) = v12;
      v13 = *(struct CResource ***)(*a3 + 72);
      v14 = (CComponentTransform2D *)CComponentTransform2D::operator new();
      if ( v14 )
        v15 = CComponentTransform2D::CComponentTransform2D(v14, this[2]);
      else
        v15 = 0LL;
      v31 = v15;
      if ( v15 )
        (*(void (__fastcall **)(struct CComponentTransform2D *))(*(_QWORD *)v15 + 8LL))(v15);
      ScaleForSurfaceOfNineGrid = CProjectedShadow::GetScaleForSurfaceOfNineGrid(
                                    (CProjectedShadow *)this,
                                    a2,
                                    (struct D2DVector2 *)v26);
      v8 = ScaleForSurfaceOfNineGrid;
      if ( ScaleForSurfaceOfNineGrid < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ScaleForSurfaceOfNineGrid, 0x71Cu);
      }
      else
      {
        v25[0] = 1115684864;
        v25[1] = 1115684864;
        v18 = ((__int64 (__fastcall *)(char *, void *, _BYTE *))xmmword_180305248)(
                (char *)v15 + SDWORD2(xmmword_180305248),
                &CComponentTransform2D::sc_Scale,
                v26);
        v8 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x720u);
        }
        else
        {
          v20 = ((__int64 (__fastcall *)(char *, void *, _DWORD *))xmmword_1803052B8)(
                  (char *)v15 + SDWORD2(xmmword_1803052B8),
                  &CComponentTransform2D::sc_Center,
                  v25);
          v8 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x721u);
          }
          else
          {
            v22 = CSurfaceBrush::SetTransform(v13, v15);
            v8 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x723u);
          }
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v31);
    }
  }
  return v8;
}
