/*
 * XREFs of ?AnimateSingle@ForceAnimator@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801E95F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Particles::ForceAnimator::AnimateSingle(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall ***v3)(_QWORD, __int64, _QWORD *, _QWORD *); // rcx
  float *v5; // rcx
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __int64 result; // rax
  float v9; // [rsp+30h] [rbp-30h] BYREF
  float v10; // [rsp+34h] [rbp-2Ch]
  float v11; // [rsp+38h] [rbp-28h]
  float v12; // [rsp+48h] [rbp-18h]
  _QWORD v13[2]; // [rsp+50h] [rbp-10h] BYREF

  v3 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD *, _QWORD *))(a1 + 8);
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  v13[1] = &v9;
  v13[0] = 3LL;
  (**v3)(v3, a2, v13, v13);
  v5 = *(float **)(a3 + 8);
  v6 = (__m128)LODWORD(v9);
  v7 = (__m128)LODWORD(v10);
  v6.m128_f32[0] = (float)(v9 * 0.016666668) + *v5;
  v7.m128_f32[0] = (float)(v10 * 0.016666668) + v5[1];
  v12 = (float)(v11 * 0.016666668) + v5[2];
  result = LODWORD(v12);
  *(_QWORD *)v5 = _mm_unpacklo_ps(v6, v7).m128_u64[0];
  *((_DWORD *)v5 + 2) = result;
  return result;
}
