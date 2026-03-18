/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x180056554 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, __int64 a2, _DWORD *a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  struct CDropShadow *DropShadow; // rax
  int v17; // eax
  unsigned int v18; // ecx
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _DWORD *))(*(_QWORD *)v7 + 168LL))(
           v7,
           a2,
           (char *)this + 132,
           a3);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xEF1u);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)this + 248LL))(this) )
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
    *(float *)&v19[3] = v14;
    *(float *)&v19[2] = v13;
    *(float *)&v19[1] = v12;
    v19[0] = v11.m128_i32[0];
    if ( v13 > v11.m128_f32[0] && v14 > v12 )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v19);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0xACu);
  }
  else if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    v17 = (*(__int64 (__fastcall **)(struct CDropShadow *, __int64, char *, _DWORD *))(*(_QWORD *)DropShadow + 168LL))(
            DropShadow,
            a2,
            (char *)this + 132,
            v19);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xB3u);
    else
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v19);
  }
  return (unsigned int)v3;
}
