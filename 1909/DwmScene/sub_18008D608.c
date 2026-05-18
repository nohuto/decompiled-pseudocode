/*
 * XREFs of sub_18008D608 @ 0x18008D608
 * Callers:
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 *     sub_18012310C @ 0x18012310C (sub_18012310C.c)
 *     sub_18012328C @ 0x18012328C (sub_18012328C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 *     sub_1800885E8 @ 0x1800885E8 (sub_1800885E8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18008D608(unsigned __int64 **a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v5; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  unsigned __int64 *v15; // rax
  unsigned __int64 *i; // rcx
  unsigned __int64 j; // rbx
  unsigned __int64 v18; // rbx

  v5 = *a1;
  v7 = a1[1] - v5;
  v8 = a1[2] - v5;
  if ( a2 > v8 )
  {
    if ( a2 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v9 = v8 >> 1;
      if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
      {
        v10 = v9 + v8;
        if ( v9 + v8 < a2 )
          v10 = a2;
      }
      else
      {
        v10 = a2;
      }
      if ( v5 )
      {
        v11 = 8 * v8;
        if ( v11 >= 0x1000 )
        {
          v12 = (unsigned __int64 *)*(v5 - 1);
          v13 = v11 + 39;
          v14 = (char *)((char *)v5 - (char *)v12);
          if ( (unsigned __int64)(v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, v13);
            __debugbreak();
          }
          v5 = v12;
        }
        j_j__o_free(v5);
      }
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
      if ( !v10 )
        goto LABEL_15;
      if ( v10 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v15 = sub_18001BB48((__int64)a1, v10);
        *a1 = v15;
        a1[1] = v15;
        a1[2] = &(*a1)[v10];
LABEL_15:
        for ( i = *a1; a2; --a2 )
          *i++ = *a3;
LABEL_22:
        a1[1] = i;
        return;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( a2 > v7 )
  {
    sub_1800885E8(v5, (unsigned __int64)a1[1], a3);
    i = a1[1];
    for ( j = a2 - v7; j; --j )
      *i++ = *a3;
    goto LABEL_22;
  }
  v18 = (unsigned __int64)&v5[a2];
  sub_1800885E8(v5, v18, a3);
  a1[1] = (unsigned __int64 *)v18;
}
