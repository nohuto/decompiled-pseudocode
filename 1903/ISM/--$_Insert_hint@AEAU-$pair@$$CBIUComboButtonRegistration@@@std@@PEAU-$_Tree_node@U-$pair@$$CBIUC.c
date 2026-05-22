/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1800FC328
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800FCC1C (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@1@Z @ 0x1800FC1BC (--$_Insert_at@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUCom.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUComboButtonRegistration@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1800FC574 (--$_Insert_nohint@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_hint<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 *v6; // r9
  __int64 *v8; // r11
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 *result; // rax
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // r9
  int v19; // [rsp+20h] [rbp-38h]
  char v20; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v21 = 0LL;
  if ( !a1[1] )
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Destroy_if_node(
        v9,
        a5);
      throw;
    }
    return result;
  }
  v10 = (__int64 *)*a1;
  if ( a3 == *(__int64 **)*a1 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        a1,
        a2,
        1,
        a3,
        v19,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  if ( a3 == v10 )
  {
    v12 = v10[2];
    if ( *(_DWORD *)(v12 + 32) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        a1,
        a2,
        0,
        (_QWORD *)v12,
        v19,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  v13 = *a4;
  if ( *a4 < *((_DWORD *)a3 + 8) )
  {
    v14 = a3;
    v21 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v14 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v16 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v16 + 25) )
        {
          v17 = a3;
          do
          {
            LODWORD(a3) = (_DWORD)v16;
            if ( v17 != (__int64 *)*v16 )
              break;
            v14 = v16;
            v21 = v16;
            v16 = (__int64 *)v16[1];
            v17 = v14;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
        if ( !*((_BYTE *)v14 + 25) )
        {
          v14 = v16;
          v21 = v16;
        }
LABEL_20:
        if ( *((_DWORD *)v14 + 8) < v13 )
        {
          if ( *(_BYTE *)(v14[2] + 25) )
            std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
              v8,
              a2,
              0,
              v14,
              v19,
              a5);
          else
            std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
              v8,
              a2,
              1,
              v6,
              v19,
              a5);
          return a2;
        }
        goto LABEL_25;
      }
      do
      {
        v14 = v15;
        v15 = (__int64 *)v15[2];
      }
      while ( !*((_BYTE *)v15 + 25) );
    }
    v21 = v14;
    goto LABEL_20;
  }
LABEL_25:
  if ( *((_DWORD *)v6 + 8) >= v13
    || (v21 = v6,
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v21),
        v21 != v10)
    && v13 >= *((_DWORD *)v21 + 8) )
  {
LABEL_32:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_nohint<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
                       (_DWORD)v8,
                       (unsigned int)&v20,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(v18[2] + 25LL) )
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
      v8,
      a2,
      0,
      v18,
      v19,
      a5);
  else
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
      v8,
      a2,
      1,
      v21,
      v19,
      a5);
  return a2;
}
