/*
 * XREFs of ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFC28
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0764 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x18007ED80 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800CB13C (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CMatrixTransform3D@@KAPEAX_K@Z @ 0x1800D02F0 (--2CMatrixTransform3D@@KAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E85D4 (-SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1801EFFC8 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

__int64 __fastcall CProjectedShadow::AdjustNineGridBrush(__int64 a1, __int64 a2, CNineGridBrush **a3)
{
  float v5; // xmm0_4
  FLOAT m11; // xmm8_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  FLOAT m12; // xmm9_4
  float v10; // xmm7_4
  CComponentTransform2D *v11; // rax
  struct CComponentTransform2D *v12; // rdi
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  CNineGridBrush *v20; // rcx
  unsigned int v21; // xmm6_4
  struct CComponentTransform2D *v23; // [rsp+38h] [rbp-29h] BYREF
  float v24[2]; // [rsp+40h] [rbp-21h] BYREF
  struct D2D_MATRIX_3X2_F v25; // [rsp+48h] [rbp-19h] BYREF

  CProjectedShadow::CalculateBounds(a1, &v25, a3, *(_QWORD *)(a2 + 6056));
  v5 = FLOAT_161_0;
  m11 = v25.m11;
  v7 = FLOAT_161_0;
  v8 = v25.m21 - v25.m11;
  m12 = v25.m12;
  v10 = v25.m22 - v25.m12;
  if ( (float)(v25.m21 - v25.m11) < (float)(v25.m22 - v25.m12) )
    v7 = (float)((float)((float)(v10 / v8) - 1.0) * 33.0) + 161.0;
  else
    v5 = (float)((float)((float)(v8 / v10) - 1.0) * 33.0) + 161.0;
  *(_QWORD *)&v25.m11 = 0xC2800000C2800000uLL;
  v24[0] = v5 / 161.0;
  v24[1] = v7 / 161.0;
  v11 = (CComponentTransform2D *)CMatrixTransform3D::operator new();
  if ( v11 )
    v12 = CComponentTransform2D::CComponentTransform2D(v11, *(struct CComposition **)(a1 + 16));
  else
    v12 = 0LL;
  v23 = v12;
  if ( v12 )
    (*(void (__fastcall **)(struct CComponentTransform2D *))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = ((__int64 (__fastcall *)(char *, void *, float *))xmmword_180339248)(
          (char *)v12 + SDWORD2(xmmword_180339248),
          &CComponentTransform2D::sc_Scale,
          v24);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x437u, 0LL);
    goto LABEL_16;
  }
  v16 = ((__int64 (__fastcall *)(char *, void *, struct D2D_MATRIX_3X2_F *))xmmword_180339280)(
          (char *)v12 + SDWORD2(xmmword_180339280),
          &CComponentTransform2D::sc_Offset,
          &v25);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x438u, 0LL);
    goto LABEL_16;
  }
  v18 = CSurfaceBrush::SetTransform(*((struct CResource ***)*a3 + 10), v12);
  v15 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x43Bu, 0LL);
LABEL_16:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
    return v15;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
  v25.m21 = 0.0;
  v20 = *a3;
  *(float *)&v21 = fminf(v8 / 33.0, v10 / 33.0);
  v25.dy = m12;
  *(_QWORD *)&v25.m11 = v21;
  *(_QWORD *)&v25.m[1][1] = __PAIR64__(LODWORD(m11), v21);
  CNineGridBrush::SetTransform(v20, &v25);
  return v15;
}
