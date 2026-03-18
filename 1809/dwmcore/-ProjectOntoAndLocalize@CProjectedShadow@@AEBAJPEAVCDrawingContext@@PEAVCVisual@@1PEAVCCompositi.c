/*
 * XREFs of ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4
 * Callers:
 *     ?CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8660 (-CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB9B8 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801CA864 (-GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@.c)
 *     ?GetPlaneOfVisual@CProjectedShadow@@CA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1801CACB0 (-GetPlaneOfVisual@CProjectedShadow@@CA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 *     ?GetProjectionMatrix@CProjectedShadow@@CA?AVCMILMatrix@@UD2D_VECTOR_3F@@UD2D_VECTOR_4F@@_N@Z @ 0x1801CAD80 (-GetProjectionMatrix@CProjectedShadow@@CA-AVCMILMatrix@@UD2D_VECTOR_3F@@UD2D_VECTOR_4F@@_N@Z.c)
 */

__int64 __fastcall CProjectedShadow::ProjectOntoAndLocalize(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CVisual *a3,
        struct CVisual *a4,
        struct CCompositionLight *a5,
        struct CMILMatrix *a6)
{
  __m128i v10; // xmm6
  int LightPosition; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rbx
  char *v15; // rbx
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  struct D2D_VECTOR_3F v26; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_3F v27; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_VECTOR_4F v28; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+78h] [rbp-90h]
  __int128 v31; // [rsp+88h] [rbp-80h]
  __int128 v32; // [rsp+98h] [rbp-70h]
  int v33; // [rsp+A8h] [rbp-60h]
  _BYTE v34[96]; // [rsp+B8h] [rbp-50h] BYREF

  v10 = _mm_loadu_si128((const __m128i *)CProjectedShadow::GetPlaneOfVisual(&v28, a4));
  LightPosition = CProjectedShadow::GetLightPosition(a2, a5, a4, &v26);
  v13 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, LightPosition, 0x425u);
  }
  else
  {
    v14 = 108LL;
    if ( a3 != *(struct CVisual **)(*((_QWORD *)this + 9) + 56LL) )
      v14 = 176LL;
    v15 = (char *)this + v14;
    v16 = (*(__int64 (__fastcall **)(struct CCompositionLight *))(*(_QWORD *)a5 + 184LL))(a5);
    v28 = (struct D2D_VECTOR_4F)v10;
    v27 = v26;
    CProjectedShadow::GetProjectionMatrix((__int64)v34, &v27.x, &v28.x, v16 == 2);
    v17 = *(_OWORD *)v15;
    v18 = *((_OWORD *)v15 + 1);
    v33 = *((_DWORD *)v15 + 16);
    v29 = v17;
    v19 = *((_OWORD *)v15 + 2);
    v30 = v18;
    v20 = *((_OWORD *)v15 + 3);
    v31 = v19;
    v32 = v20;
    CMILMatrix::Multiply((CMILMatrix *)&v29, (const struct CMILMatrix *)v34);
    v21 = v33;
    v22 = v30;
    *(_OWORD *)a6 = v29;
    v23 = v31;
    *((_OWORD *)a6 + 1) = v22;
    v24 = v32;
    *((_OWORD *)a6 + 2) = v23;
    *((_OWORD *)a6 + 3) = v24;
    *((_DWORD *)a6 + 16) = v21;
  }
  return v13;
}
