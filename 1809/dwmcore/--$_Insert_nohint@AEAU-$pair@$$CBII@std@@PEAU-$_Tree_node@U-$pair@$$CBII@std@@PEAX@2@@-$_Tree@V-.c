/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x180148088
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DEF5C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x1800DF018 (--$_Insert_at@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
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
    a3 = (unsigned int)*a4;
    do
    {
      v8 = v9;
      if ( (unsigned int)a3 >= *((_DWORD *)v9 + 7) )
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
  if ( *((_DWORD *)v10 + 7) >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x28uLL);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  LOBYTE(a3) = v7;
LABEL_10:
  v11 = std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
          a1,
          &v16,
          a3,
          v8,
          v15,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v11;
  return a2;
}
