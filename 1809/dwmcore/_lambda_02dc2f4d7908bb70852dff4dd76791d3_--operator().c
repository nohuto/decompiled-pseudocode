/*
 * XREFs of _lambda_02dc2f4d7908bb70852dff4dd76791d3_::operator() @ 0x1800EF668
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800A9C8C (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_02dc2f4d7908bb70852dff4dd76791d3_::operator()(__int64 a1, __int64 a2)
{
  bool v3; // zf
  FLOAT v4; // xmm0_4
  __m128i v5; // xmm1
  FLOAT v6; // xmm0_4
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm3_4
  FLOAT *v11; // rax
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // r9d
  struct D2D_RECT_F v16; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_RECT_F v17; // [rsp+40h] [rbp-20h] BYREF

  v3 = **(_BYTE **)a1 == 0;
  v4 = (float)*(int *)a2;
  v16.top = (float)*(int *)(a2 + 4);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v16.left = v4;
  v6 = (float)*(int *)(a2 + 8);
  LODWORD(v16.bottom) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v16.right = v6;
  left = v16.left;
  LODWORD(top) = _mm_shuffle_ps((__m128)v16, (__m128)v16, 85).m128_u32[0];
  LODWORD(right) = _mm_shuffle_ps((__m128)v16, (__m128)v16, 170).m128_u32[0];
  LODWORD(bottom) = _mm_shuffle_ps((__m128)v16, (__m128)v16, 255).m128_u32[0];
  v16.top = top;
  v16.right = right;
  v16.bottom = bottom;
  if ( !v3 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(*(CMILMatrix **)(a1 + 8), (__int64)&v16, &v17.left);
    left = v17.left;
    top = v17.top;
    right = v17.right;
    bottom = v17.bottom;
    v16 = v17;
  }
  if ( !**(_BYTE **)(a1 + 16) )
    goto LABEL_13;
  v11 = *(FLOAT **)(a1 + 24);
  if ( *v11 > left )
    v16.left = *v11;
  if ( v11[1] > top )
    v16.top = v11[1];
  if ( right > v11[2] )
    v16.right = v11[2];
  if ( bottom > v11[3] )
    v16.bottom = v11[3];
  if ( !IsEmpty(&v16) )
  {
LABEL_13:
    v12 = CVisual::AddAdditionalDirtyRects(*(CVisual **)(a1 + 40), &v16);
    v13 = *(_DWORD **)(a1 + 32);
    *v13 = v12;
    v14 = **(_DWORD **)(a1 + 32);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v14, 0x223u);
  }
  return **(unsigned int **)(a1 + 32);
}
