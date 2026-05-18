/*
 * XREFs of sub_1800D7974 @ 0x1800D7974
 * Callers:
 *     sub_1800D8468 @ 0x1800D8468 (sub_1800D8468.c)
 * Callees:
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     sub_1800D7DC4 @ 0x1800D7DC4 (sub_1800D7DC4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int128 *__fastcall sub_1800D7974(__int64 a1, __int128 *a2)
{
  double *i; // rdi
  __int128 v5; // xmm0
  double *v6; // r15
  double *v7; // r13
  __int128 v8; // xmm1
  double v9; // xmm6_8
  double v10; // xmm7_8
  double v11; // xmm0_8
  double v12; // xmm0_8
  bool v13; // cf
  bool v14; // zf
  double v15; // xmm0_8
  bool v16; // cf
  bool v17; // zf
  __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-60h] BYREF
  __int128 v21; // [rsp+30h] [rbp-50h]
  __int128 v22; // [rsp+40h] [rbp-40h]

  if ( (__int128 *)a1 != a2 )
  {
    for ( i = (double *)(a1 + 48); i != (double *)a2; i += 6 )
    {
      v5 = *(_OWORD *)i;
      v6 = i + 5;
      v7 = i;
      v8 = *((_OWORD *)i + 1);
      i[2] = 0.0;
      *((_QWORD *)i + 3) = 15LL;
      *(_BYTE *)i = 0;
      v9 = i[4];
      v10 = i[5];
      v20 = v5;
      v11 = *(double *)(a1 + 32);
      *(double *)&v22 = v9;
      *((double *)&v22 + 1) = v10;
      v21 = v8;
      if ( v9 == v11 )
      {
        v12 = *(double *)(a1 + 40);
        v13 = v12 < v10;
        v14 = v12 == v10;
      }
      else
      {
        v13 = v11 < v9;
        v14 = v11 == v9;
      }
      if ( v13 || v14 )
      {
        while ( 1 )
        {
          v6 -= 6;
          v15 = *(v6 - 1);
          if ( v9 == v15 )
          {
            v16 = *v6 < v10;
            v17 = *v6 == v10;
          }
          else
          {
            v16 = v15 < v9;
            v17 = v15 == v9;
          }
          if ( v16 || v17 )
            break;
          sub_180017D44(v7, (__int64)(v6 - 5));
          v7[4] = *(v6 - 1);
          v7[5] = *v6;
          v7 = v6 - 5;
        }
        sub_180017D44(v7, (__int64)&v20);
        *((_OWORD *)v7 + 2) = v22;
      }
      else
      {
        sub_1800D7DC4(a1, i, i + 6);
        sub_180017D44((_QWORD *)a1, (__int64)&v20);
        *(_OWORD *)(a1 + 32) = v22;
      }
      if ( *((_QWORD *)&v21 + 1) >= 0x10uLL )
      {
        v18 = v20;
        if ( (unsigned __int64)(*((_QWORD *)&v21 + 1) + 1LL) >= 0x1000 )
        {
          v18 = *(_QWORD *)(v20 - 8);
          if ( (unsigned __int64)(v20 - v18 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v18, *((_QWORD *)&v21 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v18);
      }
    }
  }
  return a2;
}
