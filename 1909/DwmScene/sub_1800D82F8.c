/*
 * XREFs of sub_1800D82F8 @ 0x1800D82F8
 * Callers:
 *     sub_1800D8468 @ 0x1800D8468 (sub_1800D8468.c)
 * Callees:
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     sub_1800D815C @ 0x1800D815C (sub_1800D815C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_1800D82F8(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  __int128 *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int128 v14; // [rsp+40h] [rbp-58h]
  __int128 v15; // [rsp+50h] [rbp-48h]

  v4 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  result = v4 >> 63;
  if ( (__int64)((v4 >> 63) + v4) >= 2 )
  {
    v6 = (__int128 *)(a2 - 16);
    v7 = -32 - a1;
    v8 = 16 - a1;
    do
    {
      v9 = *(v6 - 2);
      v10 = *(v6 - 1);
      *((_QWORD *)v6 - 2) = 0LL;
      *((_QWORD *)v6 - 1) = 15LL;
      v13 = v9;
      *((_BYTE *)v6 - 32) = 0;
      v11 = *v6;
      v14 = v10;
      v15 = v11;
      sub_180017D44((_QWORD *)v6 - 4, a1);
      *(_QWORD *)v6 = *(_QWORD *)(a1 + 32);
      *((_QWORD *)v6 + 1) = *(_QWORD *)(a1 + 40);
      sub_1800D815C(a1, 0LL, ((__int64)v6 + v7) / 48, (__int64)&v13);
      if ( *((_QWORD *)&v14 + 1) >= 0x10uLL )
      {
        v12 = v13;
        if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) >= 0x1000 )
        {
          v12 = *(_QWORD *)(v13 - 8);
          if ( (unsigned __int64)(v13 - v12 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v12, *((_QWORD *)&v14 + 1) + 40LL);
            JUMPOUT(0x1800D8464LL);
          }
        }
        j_j__o_free(v12);
      }
      v6 -= 3;
      result = (unsigned __int64)((unsigned __int128)(((__int64)v6 + v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    }
    while ( ((__int64)v6 + v8) / 48 >= 2 );
  }
  return result;
}
