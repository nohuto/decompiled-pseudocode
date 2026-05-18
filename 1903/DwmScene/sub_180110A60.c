/*
 * XREFs of sub_180110A60 @ 0x180110A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800114F0 @ 0x1800114F0 (sub_1800114F0.c)
 *     sub_1800904E4 @ 0x1800904E4 (sub_1800904E4.c)
 *     sub_1800905EC @ 0x1800905EC (sub_1800905EC.c)
 *     sub_1800906EC @ 0x1800906EC (sub_1800906EC.c)
 *     sub_1800909E0 @ 0x1800909E0 (sub_1800909E0.c)
 *     sub_180090D7C @ 0x180090D7C (sub_180090D7C.c)
 *     sub_180090E14 @ 0x180090E14 (sub_180090E14.c)
 *     sub_180091120 @ 0x180091120 (sub_180091120.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180110A60(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int128 Src; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]
  _QWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h]

  v7 = sub_1800905EC(a2, a4);
  v15 = 0LL;
  sub_18000F3F4(v14, v7);
  sub_180090E14(a2, a4, a3);
  if ( a4 == (unsigned __int16)sub_1800904E4(a2, (__int64)&qword_18025B618)
    && sub_1800906EC(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    sub_180090D7C(a2, 1);
  }
  sub_1800114F0(&Src, v14, &qword_18025B538);
  sub_1800909E0(a2);
  if ( v13 >= 0x10 )
  {
    v8 = Src;
    if ( v13 + 1 >= 0x1000 )
    {
      v8 = *(_QWORD *)(Src - 8);
      if ( (unsigned __int64)(Src - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v13 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  result = sub_1800904E4(a2, (__int64)&qword_18025B658);
  if ( a4 == (_WORD)result )
  {
    Src = xmmword_18026B270;
    if ( *a3 )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
        v10 = xmmword_1801F7B00;
      else
        v10 = xmmword_18020E100;
      Src = v10;
    }
    result = sub_180091120(a2);
  }
  if ( *((_QWORD *)&v15 + 1) >= 0x10uLL )
  {
    v11 = v14[0];
    if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 )
    {
      v11 = *(_QWORD *)(v14[0] - 8LL);
      if ( (unsigned __int64)(v14[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v15 + 1) + 40LL);
        __debugbreak();
      }
    }
    return j_j__o_free(v11);
  }
  return result;
}
