/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2C50
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2A90 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentBounds(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  __m128 v8; // xmm0
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  signed int v13; // eax
  __int64 v14; // rcx
  int v15; // edx
  int *v16; // rcx
  _DWORD v17[4]; // [rsp+30h] [rbp-38h] BYREF

  a3[1] = 0LL;
  *a3 = 0LL;
  v5 = 0;
  v6 = a1[32];
  if ( v6 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v6 + 208LL))(
            v6,
            a2,
            (__int64)a1 + 132,
            a3);
    v5 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xF61u, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1) )
  {
    v7 = a1[27];
    if ( (*(_DWORD *)(v7 + 4) & 0x100000) != 0 )
    {
      v15 = *(_DWORD *)(v7 + 12);
      v16 = (int *)(v7 + 12);
      if ( (v15 & 0x7F000000) != 0xC000000 )
      {
        do
        {
          v16 = (int *)((char *)v16 + (v15 & 0xFFFFFF) + 4);
          v15 = *v16;
        }
        while ( (*v16 & 0x7F000000) != 0xC000000 );
      }
      v8 = *(__m128 *)(v16 + 1);
      LODWORD(v9) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
      LODWORD(v10) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
      LODWORD(v11) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
    }
    else
    {
      v8.m128_i32[0] = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v9 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v10 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v11 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    *(float *)&v17[3] = v11;
    *(float *)&v17[2] = v10;
    *(float *)&v17[1] = v9;
    v17[0] = v8.m128_i32[0];
    if ( v10 > v8.m128_f32[0] && v11 > v9 )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v17);
  }
  return v5;
}
