/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x18020F854
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x18020F47C (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSte.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@1@Z @ 0x18020F194 (--$_Insert_at@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUStere.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_nohint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
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
  char v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 i; // rax
  int v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v7 = 1;
  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v9 + 25) )
  {
    v8 = v9;
    if ( *a4 >= *((_DWORD *)v9 + 7) )
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
  v10 = v8;
  if ( v7 )
  {
    if ( v8 == *(_QWORD **)*a1 )
    {
      v11 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v10 = (_QWORD *)v8[2];
    }
    else
    {
      v13 = *v8;
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
          v10 = (_QWORD *)v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( !*(_BYTE *)(v13 + 25) );
      }
    }
  }
  if ( *((_DWORD *)v10 + 7) >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x68uLL);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v11 = v7;
LABEL_9:
  v12 = std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_at<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
          a1,
          &v17,
          v11,
          v8,
          v16,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
