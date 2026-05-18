/*
 * XREFs of sub_18010AD88 @ 0x18010AD88
 * Callers:
 *     sub_1800DB094 @ 0x1800DB094 (sub_1800DB094.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_18006BB48 @ 0x18006BB48 (sub_18006BB48.c)
 *     sub_1800ABA10 @ 0x1800ABA10 (sub_1800ABA10.c)
 *     sub_1800AC538 @ 0x1800AC538 (sub_1800AC538.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18010AD88(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int128 v8; // [rsp+38h] [rbp-19h] BYREF
  __int128 v9; // [rsp+48h] [rbp-9h] BYREF
  __int64 Src[2]; // [rsp+60h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  _QWORD *v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+90h] [rbp+3Fh] BYREF
  volatile signed __int32 *v15; // [rsp+98h] [rbp+47h]

  v12 = -2LL;
  v13 = a1;
  v8 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v8 = *a2;
  *((_QWORD *)&v8 + 1) = v3;
  sub_1800ABA10((__int64)a1, (__int64)&v8);
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_18006BB48(&v14);
  v9 = 0LL;
  v9 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_1800AC538(a1, 0LL, 0LL, &v9, 0LL);
  v5 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(Src[0]) = 0;
  sub_18000E118(Src, 0x15uLL, 0LL, "ImageProcessingCamera");
  sub_180011714(a1 + 3, Src);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = Src[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(Src[0] - 8);
      if ( (unsigned __int64)(Src[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  return a1;
}
