/*
 * XREFs of sub_1800B7C88 @ 0x1800B7C88
 * Callers:
 *     sub_1800B7AC0 @ 0x1800B7AC0 (sub_1800B7AC0.c)
 * Callees:
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_1800B6FF8 @ 0x1800B6FF8 (sub_1800B6FF8.c)
 *     sub_1800CB4B8 @ 0x1800CB4B8 (sub_1800CB4B8.c)
 *     sub_1800F0940 @ 0x1800F0940 (sub_1800F0940.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800B7C88(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+2Ah] [rbp-3Eh]
  __m128i si128; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v10 = -2LL;
  v11 = a1;
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v7) = 0;
  si128.m128i_i64[0] = 10LL;
  memmove(&v7, "LightProbe", 0xAuLL);
  v8 = 0;
  sub_1800F0940(a1, &v7, a2);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v4 = v7;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v4 = *(_QWORD *)(v7 - 8);
      if ( (unsigned __int64)(v7 - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v7) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_18025E020;
  sub_1800B6FF8((_DWORD *)(a1 + 108));
  sub_1800CB4B8(a1 + 256);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v12 = a1 + 448;
  v5 = (_QWORD *)sub_1800F0DA4(a1);
  sub_180015EA4(v5, (_QWORD *)(a1 + 448), 1u);
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_18025E030;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
