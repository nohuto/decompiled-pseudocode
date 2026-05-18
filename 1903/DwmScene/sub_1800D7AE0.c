/*
 * XREFs of sub_1800D7AE0 @ 0x1800D7AE0
 * Callers:
 *     sub_1800D8358 @ 0x1800D8358 (sub_1800D8358.c)
 * Callees:
 *     sub_1800D804C @ 0x1800D804C (sub_1800D804C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D7AE0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-38h]

  v3 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  result = (unsigned __int64)v3 >> 63;
  v7 = ((unsigned __int64)v3 >> 63) + (v3 >> 3);
  v8 = v7 >> 1;
  if ( v7 >> 1 > 0 )
  {
    v9 = 48 * v8 + a1 + 24;
    do
    {
      v9 -= 48LL;
      LOBYTE(v14) = a3;
      v10 = *(_OWORD *)(v9 - 24);
      --v8;
      v11 = *(_OWORD *)(v9 - 8);
      *(_QWORD *)(v9 - 8) = 0LL;
      *(_QWORD *)v9 = 15LL;
      v15 = v10;
      *(_BYTE *)(v9 - 24) = 0;
      v12 = *(_OWORD *)(v9 + 8);
      v16 = v11;
      v17 = v12;
      result = sub_1800D804C(a1, v8, v7, &v15, v14);
      if ( *((_QWORD *)&v16 + 1) >= 0x10uLL )
      {
        v13 = v15;
        if ( (unsigned __int64)(*((_QWORD *)&v16 + 1) + 1LL) >= 0x1000 )
        {
          v13 = *(_QWORD *)(v15 - 8);
          if ( (unsigned __int64)(v15 - v13 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, *((_QWORD *)&v16 + 1) + 40LL);
            JUMPOUT(0x1800D7BF9LL);
          }
        }
        result = j_j__o_free(v13);
      }
    }
    while ( v8 > 0 );
  }
  return result;
}
