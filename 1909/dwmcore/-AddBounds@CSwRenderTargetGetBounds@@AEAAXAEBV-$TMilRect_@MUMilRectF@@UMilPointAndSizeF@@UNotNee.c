/*
 * XREFs of ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x1800C90E0
 * Callers:
 *     ?AddBounds@CSwRenderTargetGetBounds@@UEAAJAEBUCContextState@@AEBVCShape@@@Z @ 0x1800C9060 (-AddBounds@CSwRenderTargetGetBounds@@UEAAJAEBUCContextState@@AEBVCShape@@@Z.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007CAB8 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CSwRenderTargetGetBounds::AddBounds(__int64 a1, float *a2)
{
  char result; // al
  float *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v6; // xmm0
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  __m128i v14; // [rsp+20h] [rbp-20h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a2);
  if ( result )
  {
    if ( !*(_DWORD *)v4 )
    {
      v6 = _mm_loadu_si128((const __m128i *)(v4 + 4));
      v7 = *v3;
      v14 = v6;
      v14.m128i_i32[0] = v6.m128i_i32[0];
      if ( v7 > *(float *)v6.m128i_i32 )
      {
        *(float *)v14.m128i_i32 = v7;
        *(float *)v6.m128i_i32 = v7;
      }
      v8 = v3[1];
      v9 = *(float *)&v14.m128i_i32[1];
      if ( v8 > *(float *)&v14.m128i_i32[1] )
      {
        v14.m128i_i32[1] = (__int32)v3[1];
        v9 = v8;
      }
      v10 = v3[2];
      v11 = *(float *)&v14.m128i_i32[2];
      if ( *(float *)&v14.m128i_i32[2] > v10 )
      {
        v14.m128i_i32[2] = (__int32)v3[2];
        v11 = v10;
      }
      v12 = v3[3];
      v13 = *(float *)&v14.m128i_i32[3];
      if ( *(float *)&v14.m128i_i32[3] > v12 )
      {
        v14.m128i_i32[3] = (__int32)v3[3];
        v13 = v12;
      }
      if ( v11 <= *(float *)v6.m128i_i32 || v13 <= v9 )
        v14 = 0uLL;
      v3 = (float *)&v14;
    }
    return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(v5 + 52), v3);
  }
  return result;
}
