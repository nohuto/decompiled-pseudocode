/*
 * XREFs of sub_180110B70 @ 0x180110B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180011540 @ 0x180011540 (sub_180011540.c)
 *     sub_1800905F4 @ 0x1800905F4 (sub_1800905F4.c)
 *     sub_1800906FC @ 0x1800906FC (sub_1800906FC.c)
 *     sub_1800907FC @ 0x1800907FC (sub_1800907FC.c)
 *     sub_180090AF0 @ 0x180090AF0 (sub_180090AF0.c)
 *     sub_180090E8C @ 0x180090E8C (sub_180090E8C.c)
 *     sub_180090F24 @ 0x180090F24 (sub_180090F24.c)
 *     sub_180091230 @ 0x180091230 (sub_180091230.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180110B70(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int16 a4)
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

  v7 = sub_1800906FC(a2, a4);
  v15 = 0LL;
  sub_18000F444(v14, v7);
  sub_180090F24(a2, a4, a3);
  if ( a4 == (unsigned __int16)sub_1800905F4(a2, (__int64)&qword_18025C618)
    && sub_1800907FC(a2)
    && (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
  {
    sub_180090E8C(a2, 1);
  }
  sub_180011540(&Src, v14, &qword_18025C538);
  sub_180090AF0(a2);
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
  result = sub_1800905F4(a2, (__int64)&qword_18025C658);
  if ( a4 == (_WORD)result )
  {
    Src = xmmword_18026C270;
    if ( *a3 )
    {
      if ( (*(_BYTE *)(*a3 + 160LL) & 2) != 0 )
        v10 = xmmword_1801F8B00;
      else
        v10 = xmmword_18020F100;
      Src = v10;
    }
    result = sub_180091230(a2);
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
