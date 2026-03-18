/*
 * XREFs of ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C4954
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180040348 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x1800C4A94 (--$_Insert_hint@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@st.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@XZ @ 0x1800C4D38 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 */

__int64 __fastcall std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  int v5; // r14d
  __int64 *v6; // rbx
  __int64 *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (int)a1;
  v6 = *a1;
  v7 = (__int64 *)(*a1)[1];
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      if ( v7[4] < v8 )
      {
        v7 = (__int64 *)v7[2];
      }
      else
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( v6 == *a1 || *a3 < v6[4] )
  {
    v9 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Buynode0(a1);
    *(_WORD *)(v9 + 24) = 0;
    v10 = *a3;
    *(_DWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 32) = v10;
    std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_hint<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
      v5,
      (unsigned int)&v12,
      (_DWORD)v6,
      v9 + 32,
      v9);
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
