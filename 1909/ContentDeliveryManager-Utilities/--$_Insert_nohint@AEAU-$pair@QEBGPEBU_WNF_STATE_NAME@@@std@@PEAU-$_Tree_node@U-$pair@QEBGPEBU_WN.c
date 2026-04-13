/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007C4E8
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18007BFF8 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007C634 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x1800448B8 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$ch.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x18007C9DC (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        LPCWCH *a4,
        void *a5)
{
  __int64 *v8; // rsi
  __int64 v9; // rbx
  bool v10; // r12
  int v11; // eax
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-38h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-38h]
  __int64 *v17; // [rsp+60h] [rbp+8h] BYREF

  v8 = *a1;
  v9 = (*a1)[1];
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = (__int64 *)v9;
    v11 = CompareStringOrdinal(*a4, -1, *(LPCWCH *)(v9 + 32), -1, 1);
    v10 = v11 == 1;
    if ( v11 == 1 )
      v9 = *(_QWORD *)v9;
    else
      v9 = *(_QWORD *)(v9 + 16);
  }
  try
  {
    v12 = v8;
    v17 = v8;
    if ( v10 )
    {
      if ( v8 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                                     (_DWORD)a1,
                                     (unsigned int)&v17,
                                     1,
                                     (_DWORD)v8,
                                     bIgnoreCase,
                                     (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>::operator--(&v17);
      v12 = v17;
    }
    if ( CompareStringOrdinal((LPCWCH)v12[4], -1, *a4, -1, 1) == 1 )
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                                   (_DWORD)a1,
                                   (unsigned int)&v17,
                                   v10,
                                   (_DWORD)v8,
                                   bIgnoreCasea,
                                   (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    else
    {
      operator delete(a5);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v13,
      a5);
    throw;
  }
  return result;
}
