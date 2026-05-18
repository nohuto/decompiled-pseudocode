/*
 * XREFs of sub_18009C14C @ 0x18009C14C
 * Callers:
 *     sub_1800129B0 @ 0x1800129B0 (sub_1800129B0.c)
 *     sub_18009C098 @ 0x18009C098 (sub_18009C098.c)
 * Callees:
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_1800F0940 @ 0x1800F0940 (sub_1800F0940.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18009C14C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rbx
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  __m128i si128; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  __int64 *v12; // [rsp+60h] [rbp-10h]

  v10 = -2LL;
  v11 = a1;
  v12 = a2;
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v8[0]) = 0;
  si128.m128i_i64[0] = 6LL;
  memmove(v8, "Bounds", 6uLL);
  BYTE6(v8[0]) = 0;
  sub_1800F0940(a1, v8, a2);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v4 = v8[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v4 = *(_QWORD *)(v8[0] - 8LL);
      if ( (unsigned __int64)(v8[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v8[0]) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::Bounds::`vftable';
  *(_QWORD *)(a1 + 88) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 100) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 108) = 0;
  v5 = *a2;
  sub_180087414(*a2);
  *(_QWORD *)(v5 + 448) |= 8uLL;
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
