/*
 * XREFs of sub_180031A54 @ 0x180031A54
 * Callers:
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 * Callees:
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     sub_18002D658 @ 0x18002D658 (sub_18002D658.c)
 *     sub_18002D820 @ 0x18002D820 (sub_18002D820.c)
 *     sub_180030404 @ 0x180030404 (sub_180030404.c)
 *     sub_18009EC90 @ 0x18009EC90 (sub_18009EC90.c)
 *     sub_18009ECAC @ 0x18009ECAC (sub_18009ECAC.c)
 *     sub_18009ED20 @ 0x18009ED20 (sub_18009ED20.c)
 *     sub_18009ED3C @ 0x18009ED3C (sub_18009ED3C.c)
 *     sub_1800D0C20 @ 0x1800D0C20 (sub_1800D0C20.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031A54(_QWORD *a1, int a2)
{
  int v2; // ebx
  char v5; // r15
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  _QWORD *v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  int v27; // [rsp+40h] [rbp-30h]
  unsigned int v28; // [rsp+4Ch] [rbp-24h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]

  v2 = 0;
  if ( a1[20] || (v5 = 1, (a2 & 1) == 0) )
    v5 = 0;
  v6 = a1[21];
  v7 = a1 + 14;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL))(v6, &v26);
    v8 = sub_18002D658(&v25, a2, 0, v28, &v26);
  }
  else
  {
    v14 = a1[22];
    if ( !v14 )
    {
      v15 = (_QWORD *)*v7;
      *v7 = 0LL;
      if ( !v15 )
        goto LABEL_22;
      if ( *v15 )
        j__o_free(*v15);
      v13 = v15;
      goto LABEL_21;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 80LL))(v14, &v26);
    v8 = sub_18002D820(&v25, a2, v27, 1u, &v26);
  }
  v9 = v8;
  if ( v7 != v8 )
  {
    v10 = *v8;
    *v9 = 0LL;
    v11 = (_QWORD *)*v7;
    *v7 = v10;
    if ( v11 )
    {
      if ( *v11 )
        j__o_free(*v11);
      j__o_free(v11);
    }
  }
  v12 = v25;
  if ( v25 )
  {
    if ( *v25 )
      j__o_free(*v25);
    v13 = v12;
LABEL_21:
    j__o_free(v13);
  }
LABEL_22:
  if ( v5 )
    sub_180030404(a1);
  v16 = (_QWORD *)a1[14];
  v17 = 0;
  if ( v16 && *v16 )
  {
    v2 = sub_18009ED20(a1);
    v17 = sub_18009ECAC(a1);
    v18 = sub_18009EC90(a1);
    v19 = sub_1800D0C20(&v26, v18);
    sub_180017D44(a1 + 15, v19);
    if ( v29 >= 0x10 )
    {
      v20 = v26;
      if ( v29 + 1 >= 0x1000 )
      {
        v20 = *(_QWORD *)(v26 - 8);
        if ( (unsigned __int64)(v26 - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, v29 + 40);
          __debugbreak();
        }
      }
LABEL_34:
      j_j__o_free(v20);
    }
  }
  else
  {
    v21 = sub_1800D0C20(&v26, 0LL);
    sub_180017D44(a1 + 15, v21);
    if ( v29 >= 0x10 )
    {
      v20 = v26;
      if ( v29 + 1 >= 0x1000 )
      {
        v20 = *(_QWORD *)(v26 - 8);
        if ( (unsigned __int64)(v26 - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, v29 + 40);
          __debugbreak();
        }
      }
      goto LABEL_34;
    }
  }
  v22 = 0LL;
  v23 = 0LL;
  v22.m128_f32[0] = (float)v2;
  v23.m128_f32[0] = (float)v17;
  return sub_18009ED3C(a1, _mm_unpacklo_ps(v22, v23).m128_u64[0]);
}
