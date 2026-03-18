/*
 * XREFs of ?GetTranslationForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVMatrix3x2F@D2D1@@@Z @ 0x1801CB4B8
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801C8358 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetOffsetForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z @ 0x1801CAC30 (-GetOffsetForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetTranslationForCrossFade(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct D2D1::Matrix3x2F *a3)
{
  int OffsetForCrossFade; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __m128 v7; // xmm1
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  OffsetForCrossFade = CProjectedShadow::GetOffsetForCrossFade(this, a2, (struct D2DVector2 *)v9);
  v6 = OffsetForCrossFade;
  if ( OffsetForCrossFade < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, OffsetForCrossFade, 0x7D3u);
  }
  else
  {
    v7 = (__m128)v9[1];
    *(_OWORD *)a3 = _xmm;
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)v9[0], v7).m128_u64[0];
  }
  return v6;
}
