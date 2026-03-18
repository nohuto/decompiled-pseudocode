/*
 * XREFs of ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18004B454
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18004C17C (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18004B690 (--$_Insert_at@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag@2@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  _QWORD *v4; // r12
  int v7; // r13d
  _QWORD *v8; // r9
  char v9; // r15
  __int64 *v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rdx
  char *v13; // r8
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r10
  int v16; // ecx
  unsigned __int16 v17; // r11
  bool v18; // sf
  _QWORD *v19; // rax
  char *v20; // rdx
  char *v21; // r8
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r10
  int v25; // ecx
  unsigned __int16 v26; // r11
  char v27; // r8
  _QWORD *v28; // rax
  signed __int64 v30; // r8
  bool v31; // cc
  unsigned __int16 v32; // r11
  __int64 v33; // rcx
  _QWORD *i; // rcx
  signed __int64 v35; // r8
  bool v36; // cc
  unsigned __int16 v37; // r11
  char v38; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD **)a1;
  v7 = a1;
  v8 = *(_QWORD **)a1;
  v9 = 1;
  v10 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  if ( !*((_BYTE *)v10 + 25) )
  {
    v11 = *((_QWORD *)a4 + 2);
    while ( 1 )
    {
      v12 = (char *)(v10 + 4);
      v8 = v10;
      if ( (unsigned __int64)v10[7] >= 8 )
        v12 = (char *)v10[4];
      v13 = a4;
      if ( *((_QWORD *)a4 + 3) >= 8uLL )
        v13 = *(char **)a4;
      v14 = v10[6];
      v15 = v14;
      if ( v14 >= v11 )
        v15 = *((_QWORD *)a4 + 2);
      v16 = 0;
      if ( v15 )
      {
        v17 = *(_WORD *)v13;
        if ( *(_WORD *)v13 >= *(_WORD *)v12 )
        {
          v30 = v13 - v12;
          v31 = v17 <= *(_WORD *)v12;
          while ( v31 )
          {
            if ( v15 == 1 )
              goto LABEL_12;
            v12 += 2;
            --v15;
            v32 = *(_WORD *)&v12[v30];
            v31 = v32 <= *(_WORD *)v12;
            if ( v32 < *(_WORD *)v12 )
              goto LABEL_11;
          }
          v16 = 1;
        }
        else
        {
LABEL_11:
          v16 = -1;
        }
      }
LABEL_12:
      v18 = v16 < 0;
      if ( v16 )
        goto LABEL_13;
      if ( v11 < v14 )
      {
LABEL_52:
        v10 = (__int64 *)*v10;
        v9 = 1;
        goto LABEL_15;
      }
      if ( v11 <= v14 )
        break;
LABEL_14:
      v10 = (__int64 *)v10[2];
      v9 = 0;
LABEL_15:
      if ( *((_BYTE *)v10 + 25) )
        goto LABEL_16;
    }
    v18 = 0;
LABEL_13:
    if ( v18 )
      goto LABEL_52;
    goto LABEL_14;
  }
LABEL_16:
  v19 = v8;
  if ( v9 )
  {
    if ( v8 == (_QWORD *)*v4 )
    {
      v27 = 1;
      goto LABEL_31;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v19 = (_QWORD *)v8[2];
    }
    else
    {
      v33 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = (_QWORD *)v8[1]; !*((_BYTE *)i + 25) && v19 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v19 = i;
        if ( *((_BYTE *)v19 + 25) )
          i = v19;
        v19 = i;
      }
      else
      {
        do
        {
          v19 = (_QWORD *)v33;
          v33 = *(_QWORD *)(v33 + 16);
        }
        while ( !*(_BYTE *)(v33 + 25) );
      }
    }
  }
  v20 = a4;
  if ( *((_QWORD *)a4 + 3) >= 8uLL )
    v20 = *(char **)a4;
  v21 = (char *)(v19 + 4);
  if ( v19[7] >= 8uLL )
    v21 = (char *)v19[4];
  v22 = *((_QWORD *)a4 + 2);
  v23 = v19[6];
  v24 = v22;
  if ( v22 >= v23 )
    v24 = v19[6];
  v25 = 0;
  if ( v24 )
  {
    v26 = *(_WORD *)v21;
    if ( *(_WORD *)v21 >= *(_WORD *)v20 )
    {
      v35 = v21 - v20;
      v36 = v26 <= *(_WORD *)v20;
      while ( v36 )
      {
        if ( v24 == 1 )
          goto LABEL_26;
        v20 += 2;
        --v24;
        v37 = *(_WORD *)&v20[v35];
        v36 = v37 <= *(_WORD *)v20;
        if ( v37 < *(_WORD *)v20 )
          goto LABEL_25;
      }
      v25 = 1;
    }
    else
    {
LABEL_25:
      v25 = -1;
    }
  }
LABEL_26:
  if ( !v25 )
  {
    if ( v23 < v22 )
      v25 = -1;
    else
      v25 = v23 > v22;
  }
  if ( v25 >= 0 )
  {
    *(_QWORD *)a2 = v19;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v27 = v9;
LABEL_31:
  v28 = (_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
                    v7,
                    (unsigned int)&v38,
                    v27,
                    (_DWORD)v8,
                    (__int64)a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v28;
  return a2;
}
