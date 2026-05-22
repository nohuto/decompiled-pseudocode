/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180087FA0
 * Callers:
 *     ?count@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18008B8B8 (-count@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18008B948 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18008B948.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::wstring>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r9
  char *v9; // rax
  char *v10; // rcx
  char *v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  int v14; // edx
  unsigned __int16 v15; // r10
  signed __int64 v16; // r8
  bool v17; // cc
  unsigned __int16 v18; // r10
  bool v19; // sf
  char *v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  unsigned __int16 v23; // r10
  signed __int64 v24; // r8
  bool v25; // cc
  unsigned __int16 v26; // r10
  bool v27; // sf
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  char *v30; // rcx
  char *v31; // r8
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r9
  int v34; // edx
  unsigned __int16 v35; // r10
  signed __int64 v36; // r8
  bool v37; // cc
  unsigned __int16 v38; // r10
  bool v39; // sf
  __int64 *result; // rax

  v3 = *a1;
  v6 = *a1;
  v7 = *a1 + 8;
  v8 = *(_QWORD *)v7;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = (char *)(v8 + 32);
    v10 = (char *)a3;
    if ( *(_QWORD *)(a3 + 24) >= 8uLL )
      v10 = *(char **)a3;
    v11 = (char *)(v8 + 32);
    if ( *(_QWORD *)(v8 + 56) >= 8uLL )
      v11 = *(char **)v9;
    v12 = *(_QWORD *)(v8 + 48);
    v13 = *(_QWORD *)(a3 + 16);
    if ( v13 >= v12 )
      v13 = *(_QWORD *)(v8 + 48);
    v14 = 0;
    if ( v13 )
    {
      v15 = *(_WORD *)v11;
      if ( *(_WORD *)v11 < *(_WORD *)v10 )
      {
LABEL_14:
        v14 = -1;
      }
      else
      {
        v16 = v11 - v10;
        v17 = v15 <= *(_WORD *)v10;
        while ( v17 )
        {
          if ( v13 == 1 )
            goto LABEL_15;
          v10 += 2;
          --v13;
          v18 = *(_WORD *)&v10[v16];
          v17 = v18 <= *(_WORD *)v10;
          if ( v18 < *(_WORD *)v10 )
            goto LABEL_14;
        }
        v14 = 1;
      }
    }
LABEL_15:
    v19 = v14 < 0;
    if ( !v14 )
    {
      if ( v12 < *(_QWORD *)(a3 + 16) )
        goto LABEL_43;
      if ( v12 > *(_QWORD *)(a3 + 16) )
        goto LABEL_20;
      v19 = 0;
    }
    if ( v19 )
    {
LABEL_43:
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
LABEL_20:
      if ( !*(_BYTE *)(v6 + 25) )
        goto LABEL_40;
      if ( *(_QWORD *)(v8 + 56) >= 8uLL )
        v9 = *(char **)v9;
      v20 = (char *)a3;
      if ( *(_QWORD *)(a3 + 24) >= 8uLL )
        v20 = *(char **)a3;
      v21 = *(_QWORD *)(v8 + 48);
      if ( v12 >= *(_QWORD *)(a3 + 16) )
        v21 = *(_QWORD *)(a3 + 16);
      v22 = 0;
      if ( v21 )
      {
        v23 = *(_WORD *)v20;
        if ( *(_WORD *)v20 < *(_WORD *)v9 )
        {
LABEL_33:
          v22 = -1;
        }
        else
        {
          v24 = v20 - v9;
          v25 = v23 <= *(_WORD *)v9;
          while ( v25 )
          {
            if ( v21 == 1 )
              goto LABEL_34;
            v9 += 2;
            --v21;
            v26 = *(_WORD *)&v9[v24];
            v25 = v26 <= *(_WORD *)v9;
            if ( v26 < *(_WORD *)v9 )
              goto LABEL_33;
          }
          v22 = 1;
        }
      }
LABEL_34:
      v27 = v22 < 0;
      if ( v22 )
        goto LABEL_38;
      if ( *(_QWORD *)(a3 + 16) >= v12 )
      {
        if ( *(_QWORD *)(a3 + 16) > v12 )
          goto LABEL_40;
        v27 = 0;
LABEL_38:
        if ( !v27 )
          goto LABEL_40;
      }
      v6 = v8;
LABEL_40:
      v3 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  if ( !*(_BYTE *)(v6 + 25) )
    v7 = v6;
  v28 = *(_QWORD *)v7;
  if ( !*(_BYTE *)(*(_QWORD *)v7 + 25LL) )
  {
    v29 = *(_QWORD *)(a3 + 16);
    while ( 1 )
    {
      v30 = (char *)(v28 + 32);
      if ( *(_QWORD *)(v28 + 56) >= 8uLL )
        v30 = *(char **)(v28 + 32);
      v31 = (char *)a3;
      if ( *(_QWORD *)(a3 + 24) >= 8uLL )
        v31 = *(char **)a3;
      v32 = *(_QWORD *)(v28 + 48);
      v33 = v32;
      if ( v32 >= v29 )
        v33 = *(_QWORD *)(a3 + 16);
      v34 = 0;
      if ( v33 )
      {
        v35 = *(_WORD *)v31;
        if ( *(_WORD *)v31 < *(_WORD *)v30 )
        {
LABEL_61:
          v34 = -1;
        }
        else
        {
          v36 = v31 - v30;
          v37 = v35 <= *(_WORD *)v30;
          while ( v37 )
          {
            if ( v33 == 1 )
              goto LABEL_62;
            v30 += 2;
            --v33;
            v38 = *(_WORD *)&v30[v36];
            v37 = v38 <= *(_WORD *)v30;
            if ( v38 < *(_WORD *)v30 )
              goto LABEL_61;
          }
          v34 = 1;
        }
      }
LABEL_62:
      v39 = v34 < 0;
      if ( v34 )
        goto LABEL_66;
      if ( v29 < v32 )
        goto LABEL_69;
      if ( v29 <= v32 )
        break;
LABEL_67:
      v28 = *(_QWORD *)(v28 + 16);
LABEL_70:
      if ( *(_BYTE *)(v28 + 25) )
        goto LABEL_71;
    }
    v39 = 0;
LABEL_66:
    if ( v39 )
    {
LABEL_69:
      v6 = v28;
      v28 = *(_QWORD *)v28;
      goto LABEL_70;
    }
    goto LABEL_67;
  }
LABEL_71:
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
