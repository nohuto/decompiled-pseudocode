/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x18014826C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x18001359C (--$_Insert_hint@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@st.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@1@Z @ 0x1800136DC (--$_Insert_at@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@std@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_nohint<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        void *a5)
{
  char v7; // r10
  _QWORD *v8; // r9
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 i; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v7 = 1;
  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v9 + 25) )
  {
    a3 = *a4;
    do
    {
      v8 = v9;
      if ( a3 >= v9[4] )
      {
        v9 = (__int64 *)v9[2];
        v7 = 0;
      }
      else
      {
        v9 = (__int64 *)*v9;
        v7 = 1;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  v10 = v8;
  if ( v7 )
  {
    if ( v8 == *(_QWORD **)*a1 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_10;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v10 = (_QWORD *)v8[2];
    }
    else
    {
      v12 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v10 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v10 = (_QWORD *)i;
        if ( !*((_BYTE *)v10 + 25) )
          v10 = (_QWORD *)i;
      }
      else
      {
        do
        {
          v10 = (_QWORD *)v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
      }
    }
  }
  if ( v10[4] >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x30uLL);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  LOBYTE(a3) = v7;
LABEL_10:
  v11 = std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_at<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
          a1,
          &v16,
          a3,
          v8,
          v15,
          (__int64)a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v11;
  return a2;
}
