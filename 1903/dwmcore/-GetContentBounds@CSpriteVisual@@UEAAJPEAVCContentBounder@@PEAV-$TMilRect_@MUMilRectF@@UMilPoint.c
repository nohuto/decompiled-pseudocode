/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AF130
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800AF438 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, __int64 a2, __int64 a3)
{
  signed int v3; // ebx
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  struct CDropShadow *DropShadow; // rax
  signed int v17; // eax
  __int64 v18; // rcx
  float v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)v7 + 208LL))(
           v7,
           a2,
           (char *)this + 132,
           a3);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xF61u, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)this + 288LL))(this) )
  {
    v10 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v10 + 4) & 0x100000) != 0 )
    {
      for ( v10 += 12LL; (*(_DWORD *)v10 & 0x7F000000) != 0xC000000; v10 += (*(_DWORD *)v10 & 0xFFFFFF) + 4LL )
        ;
      v11 = *(__m128 *)(v10 + 4);
      LODWORD(v12) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
      LODWORD(v13) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
      LODWORD(v14) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
    }
    else
    {
      v11.m128_i32[0] = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v12 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v13 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    v19[3] = v14;
    v19[2] = v13;
    v19[1] = v12;
    v19[0] = v11.m128_f32[0];
    if ( v13 > v11.m128_f32[0] && v14 > v12 )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v19);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0xCEu, 0LL);
  }
  else if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    v17 = (*(__int64 (__fastcall **)(struct CDropShadow *, __int64, char *, float *))(*(_QWORD *)DropShadow + 208LL))(
            DropShadow,
            a2,
            (char *)this + 132,
            v19);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xD5u, 0LL);
    else
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v19);
  }
  return (unsigned int)v3;
}
