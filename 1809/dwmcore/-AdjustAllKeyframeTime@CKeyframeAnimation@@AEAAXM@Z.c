/*
 * XREFs of ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1801A37F0
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18005F050 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CKeyframeAnimation::AdjustAllKeyframeTime(CKeyframeAnimation *this, float a2, double a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  float v5; // xmm0_4
  float v6; // xmm0_4
  unsigned int v7; // ecx
  __m128 v8; // rt1
  int v9; // eax
  __int64 i; // r9
  __int64 v11; // r8
  __int64 v12; // rdx

  v5 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v5 - v5;
    v8.m128_f32[0] = FLOAT_N0_5;
    v7 = (int)v5 - _mm_cmple_ss(*(__m128 *)&a3, v8).m128_u32[0];
  }
  else
  {
    v6 = v5 + 6291456.25;
    v7 = (int)(LODWORD(v6) << 10) >> 11;
  }
  v9 = v3 / v7;
  for ( i = 0LL; (int)i < *(_DWORD *)(*(_QWORD *)(v4 + 336) + 112LL); *(_BYTE *)(v11 + 140) |= 4u )
  {
    v11 = *(_QWORD *)(v4 + 336);
    v12 = 3 * i;
    i = (unsigned int)(i + 1);
    *(_DWORD *)(*(_QWORD *)(v11 + 104) + 8 * v12) *= v9;
  }
}
