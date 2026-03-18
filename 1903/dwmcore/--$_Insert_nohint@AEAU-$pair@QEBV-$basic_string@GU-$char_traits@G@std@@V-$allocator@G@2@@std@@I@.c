/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x180172688
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x1800C4FB4 (--$_Insert_hint@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@1@Z @ 0x1800C5104 (--$_Insert_at@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_nohint<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v7; // r9
  __int64 *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *i; // rax
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = (_QWORD *)*a1;
  LOBYTE(a3) = 1;
  v8 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v8 + 25) )
  {
    v7 = v8;
    if ( *a4 >= (unsigned __int64)v8[4] )
    {
      v8 = (__int64 *)v8[2];
      LOBYTE(a3) = 0;
    }
    else
    {
      v8 = (__int64 *)*v8;
      LOBYTE(a3) = 1;
    }
  }
  v9 = v7;
  if ( (_BYTE)a3 )
  {
    if ( v7 == *(_QWORD **)*a1 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v9 = (_QWORD *)v7[2];
    }
    else
    {
      v11 = *v7;
      if ( *(_BYTE *)(*v7 + 25LL) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v9 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v9 = i;
        if ( *((_BYTE *)v9 + 25) )
          i = v9;
        v9 = i;
      }
      else
      {
        do
        {
          v9 = (_QWORD *)v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
        while ( !*(_BYTE *)(v11 + 25) );
      }
    }
  }
  if ( v9[4] >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x30uLL);
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
LABEL_9:
  v10 = std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_at<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
          a1,
          &v15,
          a3,
          v7,
          v14,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v10;
  return a2;
}
