/*
 * XREFs of sub_180068EC4 @ 0x180068EC4
 * Callers:
 *     sub_18002A900 @ 0x18002A900 (sub_18002A900.c)
 *     sub_180069010 @ 0x180069010 (sub_180069010.c)
 * Callees:
 *     sub_180065610 @ 0x180065610 (sub_180065610.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180068EC4(__int64 a1)
{
  __m128 v1; // xmm0
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rsi
  float v6; // xmm6_4
  __m128 v7; // xmm7
  float v8; // xmm6_4

  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  if ( v3 )
  {
    v4 = *(volatile signed __int32 **)(v3 + 464);
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 2);
      v4 = *(volatile signed __int32 **)(v3 + 464);
    }
    v5 = *(_QWORD *)(v3 + 456);
    if ( v5 )
    {
      v6 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v7 = v1;
      v7.m128_f32[0] = v1.m128_f32[0] * v6;
      v8 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      v1.m128_f32[0] = v1.m128_f32[0] * v8;
      sub_180065610(v5, _mm_unpacklo_ps(v1, v7).m128_i64[0]);
    }
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
}
