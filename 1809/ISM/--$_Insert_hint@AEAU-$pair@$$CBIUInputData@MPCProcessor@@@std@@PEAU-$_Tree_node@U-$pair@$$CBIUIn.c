/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x1800F7A64
 * Callers:
 *     ?PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800F6500 (-PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x1800F7600 (--$_Insert_nohint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIU.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@1@Z @ 0x1800F7764 (--$_Insert_at@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUInpu.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_hint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  _QWORD *result; // rax
  __int64 v12; // r9
  unsigned int v13; // r15d
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // [rsp+20h] [rbp-48h]
  int v20[6]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  v9 = *a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          (__int64)v19,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    if ( (__int64 *)a3 == v9 )
    {
      v12 = v9[2];
      if ( *(_DWORD *)(v12 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v12,
          (__int64)v19,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    v13 = *a4;
    if ( *a4 >= *(_DWORD *)(a3 + 32)
      || (v21 = (__int64 *)a3,
          *((_DWORD *)*std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21)
          + 8) >= v13) )
    {
      if ( *(_DWORD *)(a3 + 32) >= v13 )
        goto LABEL_31;
      v14 = a3;
      v21 = (__int64 *)a3;
      v15 = (__int64 *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v14 = *(_QWORD *)(a3 + 16);
        if ( *(_BYTE *)(v14 + 25) )
        {
          v14 = *(_QWORD *)(a3 + 8);
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v17 = a3;
            do
            {
              v18 = v14;
              if ( v17 != *(_QWORD *)(v14 + 16) )
                break;
              v21 = (__int64 *)v14;
              v14 = *(_QWORD *)(v14 + 8);
              v17 = v18;
            }
            while ( !*(_BYTE *)(v14 + 25) );
          }
        }
        else
        {
          for ( i = *(_QWORD *)v14; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
            v14 = i;
        }
        v15 = (__int64 *)v14;
        v21 = (__int64 *)v14;
      }
      if ( v15 != v9 && v13 >= *(_DWORD *)(v14 + 32) )
      {
LABEL_31:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_nohint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
                           a1,
                           (__int64)v20,
                           a3,
                           a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)a3,
          (__int64)v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)v14,
          (__int64)v19,
          a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v21[2] + 25) )
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          a1,
          a2,
          0,
          v21,
          (__int64)v19,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          (__int64)v19,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
        a1,
        a2,
        1,
        v9,
        (__int64)v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Freenode0(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
