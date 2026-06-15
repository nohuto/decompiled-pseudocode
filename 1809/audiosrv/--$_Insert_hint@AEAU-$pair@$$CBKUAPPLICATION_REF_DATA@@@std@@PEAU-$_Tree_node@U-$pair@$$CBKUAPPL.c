/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800EF3BC
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800EF89C (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@1@Z @ 0x1800E19E8 (--$_Insert_at@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPLIC.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800E1B58 (--$_Insert_nohint@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAP.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF9D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_hint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 v6; // r10
  __int64 *v8; // r11
  _QWORD *v9; // rdi
  _QWORD *result; // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 i; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r10
  __int64 v19; // [rsp+20h] [rbp-38h]
  char v20[32]; // [rsp+38h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v21 = 0LL;
  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 28) )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v19,
          a5);
        return a2;
      }
      goto LABEL_34;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v11 = v9[2];
      if ( *(_DWORD *)(v11 + 28) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v11,
          v19,
          a5);
        return a2;
      }
      goto LABEL_34;
    }
    v12 = *a4;
    if ( *a4 >= *(_DWORD *)(a3 + 28) )
      goto LABEL_29;
    v13 = a3;
    v21 = (_QWORD *)a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v14 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v14 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        v16 = *(_QWORD *)(a3 + 8);
        if ( !*(_BYTE *)(v16 + 25) )
        {
          v17 = a3;
          do
          {
            a3 = v16;
            if ( v17 != *(_QWORD *)v16 )
              break;
            v13 = v16;
            v21 = (_QWORD *)v16;
            v16 = *(_QWORD *)(v16 + 8);
            v17 = v13;
          }
          while ( !*(_BYTE *)(v16 + 25) );
        }
        v14 = v13;
        if ( !*(_BYTE *)(v13 + 25) )
          v14 = v16;
      }
      else
      {
        for ( i = *(_QWORD *)(v14 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
          v14 = i;
      }
    }
    v21 = (_QWORD *)v14;
    if ( *(_DWORD *)(v14 + 28) >= v12 )
    {
LABEL_29:
      if ( *(_DWORD *)(v6 + 28) >= v12
        || (v21 = (_QWORD *)v6,
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&v21),
            v21 != v9)
        && v12 >= *((_DWORD *)v21 + 7) )
      {
LABEL_34:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_nohint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                           v8,
                           (__int64)v20,
                           a3,
                           a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(v18[2] + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          v8,
          a2,
          0,
          v18,
          v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          v8,
          a2,
          1,
          v21,
          v19,
          a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          v8,
          a2,
          0,
          (_QWORD *)v14,
          v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          v8,
          a2,
          1,
          (_QWORD *)v6,
          v19,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x28);
      throw;
    }
  }
  return result;
}
