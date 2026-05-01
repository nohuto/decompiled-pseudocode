/*
 * XREFs of ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18032FC4C
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18032FF2C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x180320980 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x180330410 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 */

_QWORD *__fastcall KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
        _QWORD *a1,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3)
{
  __int128 v6; // xmm0
  __m128 v7; // xmm2
  float v8; // xmm1_4
  __int128 v10; // [rsp+20h] [rbp-10h] BYREF

  KeyboardHosting::ViewRectHelper::ValidateRect(a2);
  KeyboardHosting::ViewRectHelper::ValidateRect(a3);
  v6 = *(_OWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v10 = v6;
  if ( !KeyboardHosting::IsRectNull((float *)&v10) )
  {
    v10 = *(_OWORD *)a3;
    if ( !KeyboardHosting::IsRectNull((float *)&v10) )
    {
      v7 = (__m128)_mm_loadu_si128((const __m128i *)a2);
      v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
      LODWORD(v10) = (int)v7.m128_f32[0];
      DWORD2(v10) = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
      DWORD1(v10) = (int)v8;
LABEL_9:
      HIDWORD(v10) = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
      *(_OWORD *)a1 = v10;
      return a1;
    }
  }
  v10 = *(_OWORD *)a2;
  if ( !KeyboardHosting::IsRectNull((float *)&v10) )
  {
    v7 = (__m128)_mm_loadu_si128((const __m128i *)a2);
LABEL_8:
    LODWORD(v10) = (int)v7.m128_f32[0];
    v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
    DWORD1(v10) = (int)v8;
    DWORD2(v10) = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
    goto LABEL_9;
  }
  v10 = *(_OWORD *)a3;
  if ( !KeyboardHosting::IsRectNull((float *)&v10) )
  {
    v7 = (__m128)_mm_loadu_si128((const __m128i *)a3);
    goto LABEL_8;
  }
  return a1;
}
