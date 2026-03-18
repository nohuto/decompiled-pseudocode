/*
 * XREFs of ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180060A4C
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800506D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180060C30 (--$_Insert_at@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag@2@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  _QWORD *v4; // r15
  int v7; // r12d
  _QWORD *v8; // r9
  char v9; // r14
  __int64 *v10; // r8
  unsigned __int64 v11; // rbp
  char *v12; // rax
  char *v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  signed __int64 v16; // rdx
  unsigned __int16 v17; // r11
  int v18; // eax
  bool v19; // sf
  _QWORD *v20; // rax
  char *v21; // rcx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int16 v25; // si
  int v26; // ecx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 i; // rcx
  char v31; // [rsp+60h] [rbp+8h] BYREF

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
      if ( v15 )
      {
        v16 = v13 - v12;
        while ( 1 )
        {
          v17 = *(_WORD *)&v12[v16];
          if ( v17 != *(_WORD *)v12 )
            break;
          v12 += 2;
          if ( !--v15 )
            goto LABEL_13;
        }
        v18 = v17 < *(_WORD *)v12 ? -1 : 1;
      }
      else
      {
LABEL_13:
        v18 = 0;
      }
      v19 = v18 < 0;
      if ( v18 )
        goto LABEL_16;
      if ( v11 < v14 )
      {
LABEL_31:
        v10 = (__int64 *)*v10;
        v9 = 1;
        goto LABEL_18;
      }
      if ( v11 <= v14 )
        break;
LABEL_17:
      v10 = (__int64 *)v10[2];
      v9 = 0;
LABEL_18:
      if ( *((_BYTE *)v10 + 25) )
        goto LABEL_19;
    }
    v19 = 0;
LABEL_16:
    if ( v19 )
      goto LABEL_31;
    goto LABEL_17;
  }
LABEL_19:
  v20 = v8;
  if ( v9 )
  {
    if ( v8 == (_QWORD *)*v4 )
    {
      LOBYTE(v10) = 1;
      goto LABEL_41;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v20 = (_QWORD *)v8[2];
    }
    else
    {
      v29 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v20 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v20 = (_QWORD *)i;
        if ( !*((_BYTE *)v20 + 25) )
          v20 = (_QWORD *)i;
      }
      else
      {
        do
        {
          v20 = (_QWORD *)v29;
          v29 = *(_QWORD *)(v29 + 16);
        }
        while ( !*(_BYTE *)(v29 + 25) );
      }
    }
  }
  v21 = a4;
  if ( *((_QWORD *)a4 + 3) >= 8uLL )
    v21 = *(char **)a4;
  v10 = v20 + 4;
  if ( v20[7] >= 8uLL )
    v10 = (__int64 *)v20[4];
  v22 = *((_QWORD *)a4 + 2);
  v23 = v20[6];
  v24 = v22;
  if ( v22 >= v23 )
    v24 = v20[6];
  if ( v24 )
  {
    v10 = (__int64 *)((char *)v10 - v21);
    while ( 1 )
    {
      v25 = *(_WORD *)((char *)v10 + (_QWORD)v21);
      if ( v25 != *(_WORD *)v21 )
        break;
      v21 += 2;
      if ( !--v24 )
        goto LABEL_30;
    }
    v26 = v25 < *(_WORD *)v21 ? -1 : 1;
  }
  else
  {
LABEL_30:
    v26 = 0;
  }
  if ( !v26 )
  {
    if ( v23 < v22 )
      v26 = -1;
    else
      v26 = v23 > v22;
  }
  if ( v26 < 0 )
  {
    LOBYTE(v10) = v9;
LABEL_41:
    v28 = (_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
                      v7,
                      (unsigned int)&v31,
                      (_DWORD)v10,
                      (_DWORD)v8,
                      (__int64)a4);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v28;
    return a2;
  }
  *(_QWORD *)a2 = v20;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
