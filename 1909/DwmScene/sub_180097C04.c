/*
 * XREFs of sub_180097C04 @ 0x180097C04
 * Callers:
 *     sub_180099250 @ 0x180099250 (sub_180099250.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180097E00 @ 0x180097E00 (sub_180097E00.c)
 *     sub_180098400 @ 0x180098400 (sub_180098400.c)
 *     sub_180098670 @ 0x180098670 (sub_180098670.c)
 *     sub_18009C13C @ 0x18009C13C (sub_18009C13C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

unsigned __int64 __fastcall sub_180097C04(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 i; // rdi

  v3 = a1[1];
  v5 = *a1;
  v6 = a2;
  v8 = (a3 - a2) / 88;
  v9 = (v3 - *a1) / 88;
  v10 = (a1[2] - *a1) / 88;
  if ( v8 > v10 )
  {
    if ( v8 <= 0x2E8BA2E8BA2E8BALL )
    {
      v11 = v10 >> 1;
      result = 0x2E8BA2E8BA2E8BALL - (v10 >> 1);
      if ( v10 <= result )
      {
        result = v11 + v10;
        if ( v11 + v10 < v8 )
          result = v8;
        v8 = result;
      }
      if ( v5 )
      {
        if ( v5 != v3 )
        {
          do
          {
            sub_180098670(v5);
            v5 += 88LL;
          }
          while ( v5 != v3 );
          v5 = *a1;
        }
        if ( 88 * v10 >= 0x1000 )
        {
          v13 = *(_QWORD *)(v5 - 8);
          if ( (unsigned __int64)(v5 - v13 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, 88 * v10 + 39);
            __debugbreak();
          }
          v5 = *(_QWORD *)(v5 - 8);
        }
        result = j_j__o_free(v5);
      }
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
      if ( !v8 )
        goto LABEL_18;
      if ( v8 <= 0x2E8BA2E8BA2E8BALL )
      {
        v14 = sub_18009C13C(a1, v8, v9);
        *a1 = v14;
        a1[1] = v14;
        result = *a1 + 88 * v8;
        a1[2] = result;
LABEL_18:
        v15 = *a1;
        while ( v6 != a3 )
        {
          result = sub_180098400(v15, v6);
          v15 += 88LL;
          v6 += 88LL;
        }
LABEL_27:
        a1[1] = v15;
        return result;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v8 > v9 )
  {
    v16 = a2 + 88 * v9;
    result = sub_180097E00(a2, v16, v5, 0LL);
    v15 = a1[1];
    while ( v16 != a3 )
    {
      result = sub_180098400(v15, v16);
      v15 += 88LL;
      v16 += 88LL;
    }
    goto LABEL_27;
  }
  v17 = v5 + 88 * v8;
  result = sub_180097E00(a2, a3, v5, 0LL);
  v18 = a1[1];
  for ( i = v17; i != v18; i += 88LL )
    result = sub_180098670(i);
  a1[1] = v17;
  return result;
}
