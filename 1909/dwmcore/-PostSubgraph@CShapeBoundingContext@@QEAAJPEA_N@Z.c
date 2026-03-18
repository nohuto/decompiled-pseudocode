/*
 * XREFs of ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x18025202C
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1802513F0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ConvertInnerToOuterBounds@CVectorShape@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801D379C (-ConvertInnerToOuterBounds@CVectorShape@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeBoundingContext::PostSubgraph(CShapeBoundingContext *this, bool *a2)
{
  __m128i *v3; // rsi
  bool v4; // zf
  __int64 v5; // rbx
  __int64 *v6; // rcx
  unsigned __int64 v7; // xmm0_8
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  struct D2D_MATRIX_3X2_F v12; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 1;
  v3 = (__m128i *)*((_QWORD *)this + 1);
  v4 = v3[5].m128i_i8[1] == 0;
  v11 = v3[4];
  if ( !v4 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( *((_BYTE *)this + 72) )
    {
      v6 = (__int64 *)v3[3].m128i_i64[1];
      if ( v6 )
      {
        if ( v5 )
          v7 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v7 = *((_QWORD *)this + 8);
        v8 = *v6;
        v11.m128i_i64[0] = v7;
        (*(void (__fastcall **)(__int64 *, __m128i *, struct D2D_MATRIX_3X2_F *))(v8 + 216))(v6, &v11, &v12);
        CVectorShape::ConvertInnerToOuterBounds((CVectorShape *)v3, &v12);
        v11 = v3[4];
      }
    }
    if ( v5 )
    {
      v4 = *(_BYTE *)(v5 + 81) == 0;
      *(_OWORD *)&v12.m11 = *(_OWORD *)(v5 + 64);
      if ( v4 )
      {
        v9 = _mm_loadu_si128(v3 + 4);
      }
      else
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v12.m11, (float *)v11.m128i_i32);
        v9 = *(__m128i *)&v12.m11;
      }
      *(_WORD *)(v5 + 80) = 256;
      *(__m128i *)(v5 + 64) = v9;
    }
  }
  *((_BYTE *)this + 72) = 1;
  return 0LL;
}
