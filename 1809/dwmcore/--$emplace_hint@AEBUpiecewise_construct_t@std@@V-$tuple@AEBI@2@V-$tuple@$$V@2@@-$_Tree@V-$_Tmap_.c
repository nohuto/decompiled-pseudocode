/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DEF5C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x1800DF018 (--$_Insert_at@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x180148088 (--$_Insert_nohint@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int **a5)
{
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // eax
  _QWORD *v11; // r8
  _QWORD *v12; // r9
  int v13; // edx
  int v14; // ecx
  unsigned int v16; // r11d
  _QWORD *v17; // rax
  __int64 j; // rax
  __int64 i; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 k; // rcx
  char v23; // [rsp+30h] [rbp-28h] BYREF

  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 8) = *a1;
  *(_QWORD *)(v9 + 16) = *a1;
  *(_WORD *)(v9 + 24) = 0;
  v10 = **a5;
  *(_QWORD *)(v9 + 28) = v10;
  v11 = (_QWORD *)*a1;
  if ( !a1[1] )
  {
    v12 = (_QWORD *)*a1;
    goto LABEL_10;
  }
  if ( a3 == (_QWORD *)*v11 )
  {
    if ( v10 >= *((_DWORD *)a3 + 7) )
      goto LABEL_46;
    LODWORD(v12) = (_DWORD)a3;
LABEL_10:
    LOBYTE(v11) = 1;
    goto LABEL_6;
  }
  if ( a3 != v11 )
  {
    v16 = v10;
    if ( v10 >= *((_DWORD *)a3 + 7) )
      goto LABEL_43;
    v17 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v12 = (_QWORD *)a3[2];
    }
    else
    {
      v12 = (_QWORD *)*a3;
      if ( *(_BYTE *)(*a3 + 25LL) )
      {
        for ( i = a3[1]; !*(_BYTE *)(i + 25) && v17 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v17 = (_QWORD *)i;
        v12 = v17;
        if ( !*((_BYTE *)v17 + 25) )
          v12 = (_QWORD *)i;
      }
      else
      {
        for ( j = v12[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          v12 = (_QWORD *)j;
      }
    }
    if ( *((_DWORD *)v12 + 7) >= v16 )
    {
LABEL_43:
      if ( *((_DWORD *)a3 + 7) >= v16 )
        goto LABEL_46;
      v20 = (__int64)a3;
      if ( !*((_BYTE *)a3 + 25) )
      {
        v21 = a3[2];
        if ( *(_BYTE *)(v21 + 25) )
        {
          for ( k = a3[1]; !*(_BYTE *)(k + 25) && v20 == *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 8) )
            v20 = k;
          v20 = k;
        }
        else
        {
          v20 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                  v21,
                  v8,
                  v11);
        }
      }
      if ( (_QWORD *)v20 != v11 && v16 >= *(_DWORD *)(v20 + 28) )
        goto LABEL_46;
      v13 = (int)a2;
      v14 = (int)a1;
      if ( !*(_BYTE *)(a3[2] + 25LL) )
      {
        LODWORD(v12) = v20;
        goto LABEL_32;
      }
      LODWORD(v12) = (_DWORD)a3;
    }
    else
    {
      v13 = (int)a2;
      v14 = (int)a1;
      if ( !*(_BYTE *)(v12[2] + 25LL) )
      {
        LODWORD(v12) = (_DWORD)a3;
LABEL_32:
        LOBYTE(v11) = 1;
        goto LABEL_7;
      }
    }
    LODWORD(v11) = 0;
    goto LABEL_7;
  }
  v12 = (_QWORD *)v11[2];
  if ( *((_DWORD *)v12 + 7) >= v10 )
  {
LABEL_46:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
                       (_DWORD)a1,
                       (unsigned int)&v23,
                       (_DWORD)v11,
                       (int)v9 + 28,
                       v9);
    return a2;
  }
  LODWORD(v11) = 0;
LABEL_6:
  v13 = (int)a2;
  v14 = (int)a1;
LABEL_7:
  std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
    v14,
    v13,
    (_DWORD)v11,
    (_DWORD)v12);
  return a2;
}
