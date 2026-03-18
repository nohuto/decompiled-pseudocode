/*
 * XREFs of ??$_Insert_range@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x18021C2DC
 * Callers:
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x18021C554 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800DEDB0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800DEE14 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<unsigned char>::_Insert_range<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>>(
        __int64 a1,
        _BYTE *a2,
        char **a3,
        char **a4)
{
  _BYTE *v4; // rdi
  char *result; // rax
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbx
  char *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  char *v14; // r15
  __int64 v15; // r14
  char *v16; // r9
  __int64 v17; // rdx
  char *v18; // r8
  char *v19; // rcx
  const void *v20; // rdx
  size_t v21; // r8
  __int64 v22; // r15
  __int64 v23; // rdx
  char *v24; // r8
  char *v25; // rbx
  __int128 v26; // xmm1
  __int64 v27; // rdx
  char *v28; // r8
  __int128 v29; // [rsp+20h] [rbp-20h]
  __int128 v30; // [rsp+20h] [rbp-20h]
  __int128 v31; // [rsp+30h] [rbp-10h]
  __int128 v32; // [rsp+30h] [rbp-10h]
  const void *retaddr; // [rsp+78h] [rbp+38h]
  unsigned __int64 v34; // [rsp+90h] [rbp+50h]
  __int64 v35; // [rsp+98h] [rbp+58h]
  char v36; // [rsp+A0h] [rbp+60h]

  v4 = a2;
  result = *a3;
  v31 = *(_OWORD *)a4;
  v29 = *(_OWORD *)a3;
  v8 = (_QWORD *)a1;
  if ( *a4 != *a3 )
  {
LABEL_33:
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x18021C54CLL);
  }
  v9 = *((_QWORD *)&v31 + 1) - *((_QWORD *)&v29 + 1);
  v10 = &a2[-*(_QWORD *)a1];
  if ( *((_QWORD *)&v31 + 1) - *((_QWORD *)&v29 + 1) == 1LL && a2 == *(_BYTE **)(a1 + 8) )
  {
    v36 = 1;
  }
  else
  {
    v36 = 0;
    if ( !v9 )
      return result;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v9 <= *(_QWORD *)(a1 + 16) - v11 )
  {
    v22 = v11 - (_QWORD)a2;
    if ( v9 >= v11 - (__int64)a2 )
    {
      v25 = &a2[v9];
      memmove_0(v25, a2, v11 - (_QWORD)a2);
      result = &v25[v22];
      v26 = *(_OWORD *)a4;
      v27 = (__int64)a3[1];
      v28 = *a3;
      v8[1] = &v25[v22];
      while ( __PAIR128__(v27, (unsigned __int64)v28) != v26 )
      {
        if ( v27 == *(_QWORD *)v28 )
          goto LABEL_33;
        result = (char *)*((_QWORD *)v28 + 1);
        LOBYTE(a1) = result[v27];
        *v4++ = a1;
        if ( v27 < 0 || v27 == *(_QWORD *)v28 )
          goto LABEL_33;
        ++v27;
      }
    }
    else
    {
      memmove_0(*(void **)(a1 + 8), (const void *)(v11 - v9), *((_QWORD *)&v31 + 1) - *((_QWORD *)&v29 + 1));
      v8[1] = v9 + v11;
      result = (char *)memmove_0((void *)(v11 - (v22 - v9)), v4, v22 - v9);
      v23 = (__int64)a3[1];
      v24 = *a3;
      v30 = *(_OWORD *)a4;
      while ( __PAIR128__(v23, (unsigned __int64)v24) != v30 )
      {
        if ( v23 == *(_QWORD *)v24 )
          goto LABEL_33;
        result = (char *)*((_QWORD *)v24 + 1);
        LOBYTE(a1) = result[v23];
        *v4++ = a1;
        if ( v23 < 0 || v23 == *(_QWORD *)v24 )
          goto LABEL_33;
        ++v23;
      }
    }
  }
  else
  {
    v12 = v11 - *(_QWORD *)a1;
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL - v12 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v35 = v12 + v9;
    v34 = std::vector<char>::_Calculate_growth((_QWORD *)a1, v12 + v9);
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v34);
    v14 = &v10[v13];
    v15 = v13;
    v16 = v14;
    v17 = (__int64)a3[1];
    v18 = *a3;
    v32 = *(_OWORD *)a4;
    while ( __PAIR128__(v17, (unsigned __int64)v18) != v32 )
    {
      if ( v17 == *(_QWORD *)v18 )
        goto LABEL_33;
      LOBYTE(a1) = *(_BYTE *)(v17 + *((_QWORD *)v18 + 1));
      *v16++ = a1;
      if ( v17 < 0 || v17 == *(_QWORD *)v18 )
        goto LABEL_33;
      ++v17;
    }
    v19 = (char *)v13;
    v20 = (const void *)*v8;
    if ( v36 )
    {
      v21 = v8[1] - (_QWORD)v20;
    }
    else
    {
      memmove_0((void *)v13, v20, (size_t)&v4[-*v8]);
      v19 = &v14[v9];
      v21 = v8[1] - (_QWORD)v4;
      v20 = v4;
    }
    memmove_0(v19, v20, v21);
    return (char *)std::vector<unsigned char>::_Change_array((__int64)v8, v15, v35, v34);
  }
  return result;
}
