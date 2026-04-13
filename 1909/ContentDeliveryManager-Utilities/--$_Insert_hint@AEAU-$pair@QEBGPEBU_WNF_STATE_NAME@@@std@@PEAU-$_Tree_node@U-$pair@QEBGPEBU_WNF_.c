/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007C634
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18007BFF8 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x1800448B8 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$ch.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007C4E8 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x18007C9DC (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        LPCWCH *a4,
        void *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *result; // rax
  __int64 **v13; // rax
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 i; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  v21 = 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v10 = *(_QWORD **)a1;
    if ( a3 == **(_QWORD **)a1 )
    {
      if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(a3 + 32), -1, 1) == 1 )
      {
        LOBYTE(v11) = 1;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          (_DWORD)a2,
          v11,
          v6);
        return a2;
      }
      goto LABEL_32;
    }
    if ( (_QWORD *)a3 == v10 )
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(v10[2] + 32LL), -1, *a4, -1, 1) == 1 )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          a1,
          (_DWORD)a2,
          0,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL));
        return a2;
      }
      goto LABEL_32;
    }
    if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(a3 + 32), -1, 1) == 1 )
    {
      v21 = (__int64 *)v6;
      v13 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>::operator--(&v21);
      if ( CompareStringOrdinal((LPCWCH)(*v13)[4], -1, *a4, -1, 1) == 1 )
      {
        if ( *(_BYTE *)(v21[2] + 25) )
        {
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            (_DWORD)a2,
            0,
            (_DWORD)v21);
        }
        else
        {
          LOBYTE(v14) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            (_DWORD)a2,
            v14,
            v6);
        }
        return a2;
      }
    }
    if ( CompareStringOrdinal(*(LPCWCH *)(v6 + 32), -1, *a4, -1, 1) == 1 )
    {
      v15 = v6;
      v21 = (__int64 *)v6;
      v16 = v6;
      if ( !*(_BYTE *)(v6 + 25) )
      {
        v15 = *(_QWORD *)(v6 + 16);
        if ( *(_BYTE *)(v15 + 25) )
        {
          v15 = *(_QWORD *)(v6 + 8);
          if ( !*(_BYTE *)(v15 + 25) )
          {
            v18 = v6;
            do
            {
              v19 = v15;
              if ( v18 != *(_QWORD *)(v15 + 16) )
                break;
              v21 = (__int64 *)v15;
              v15 = *(_QWORD *)(v15 + 8);
              v18 = v19;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
        }
        else
        {
          for ( i = *(_QWORD *)v15; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
            v15 = i;
        }
        v16 = v15;
        v21 = (__int64 *)v15;
      }
      if ( v16 == *(_QWORD *)a1 )
        goto LABEL_28;
      if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(v15 + 32), -1, 1) == 1 )
      {
        LODWORD(v15) = (_DWORD)v21;
LABEL_28:
        if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 25LL) )
        {
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            (_DWORD)a2,
            0,
            v6);
        }
        else
        {
          LOBYTE(v11) = 1;
          std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
            a1,
            (_DWORD)a2,
            v11,
            v15);
        }
        return a2;
      }
    }
LABEL_32:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                       (__int64 **)a1,
                       (__int64)v20,
                       v11,
                       a4,
                       a5);
    return a2;
  }
  try
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
      a1,
      (_DWORD)a2,
      a3,
      *(_QWORD *)a1);
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v9,
      a5);
    throw;
  }
  return result;
}
