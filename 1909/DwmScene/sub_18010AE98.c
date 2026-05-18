/*
 * XREFs of sub_18010AE98 @ 0x18010AE98
 * Callers:
 *     sub_1800DB1A4 @ 0x1800DB1A4 (sub_1800DB1A4.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     sub_18006BC58 @ 0x18006BC58 (sub_18006BC58.c)
 *     sub_1800ABB20 @ 0x1800ABB20 (sub_1800ABB20.c)
 *     sub_1800AC648 @ 0x1800AC648 (sub_1800AC648.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18010AE98(_QWORD *a1, _QWORD *a2)
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
  sub_1800ABB20((__int64)a1, (__int64)&v8);
  *a1 = &Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_18006BC58(&v14);
  v9 = 0LL;
  v9 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_1800AC648(a1, 0LL, 0LL, &v9, 0LL);
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
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(Src[0]) = 0;
  sub_18000E168(Src, 0x15uLL, 0LL, "ImageProcessingCamera");
  sub_180011764(a1 + 3, Src);
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
