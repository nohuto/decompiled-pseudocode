/*
 * XREFs of ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058B30
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetTightBounds(__int64 a1, __m128 *a2, __int64 a3)
{
  int *v4; // rdx
  __int64 v5; // rax
  __m128 v6; // xmm3
  __m128 v7; // xmm3
  __m128 v8; // xmm3
  __m128 v9; // xmm3
  __int64 result; // rax
  CMILMatrix *v11; // rcx

  v4 = *(int **)(a1 + 16);
  v5 = *v4;
  if ( (_DWORD)v5 )
  {
    v6 = 0LL;
    v6.m128_f32[0] = (float)v4[1];
    v7 = _mm_shuffle_ps(v6, v6, 225);
    v7.m128_f32[0] = (float)v4[3];
    v8 = _mm_shuffle_ps(v7, v7, 198);
    v8.m128_f32[0] = (float)v4[2];
    v9 = _mm_shuffle_ps(v8, v8, 39);
    v9.m128_f32[0] = (float)v4[2 * v5 + 1];
    *a2 = _mm_shuffle_ps(v9, v9, 57);
    if ( a3 )
    {
      if ( !CMILMatrix::IsIdentity<0>(a3) )
        CMILMatrix::Transform2DBoundsHelper<0>(v11);
    }
    return 0LL;
  }
  else
  {
    result = 0LL;
    a2->m128_u64[1] = 0LL;
    a2->m128_u64[0] = 0LL;
  }
  return result;
}
