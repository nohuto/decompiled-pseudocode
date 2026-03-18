/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x18020F47C
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18020FA34 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@1@Z @ 0x18020F194 (--$_Insert_at@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUStere.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x18020F854 (--$_Insert_nohint@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUS.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // r11
  _QWORD *v7; // rbx
  __int64 *v8; // r10
  _QWORD *v9; // r9
  char v10; // r8
  unsigned int v11; // edi
  bool v12; // cf
  __int64 v13; // rax
  __int64 j; // rax
  __int64 i; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 k; // rcx
  int v20; // [rsp+20h] [rbp-28h]
  _QWORD *v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h] BYREF

  v5 = (_QWORD *)*a1;
  v7 = a2;
  v8 = a1;
  if ( a1[1] )
  {
    if ( a3 == *v5 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 28) )
      {
        v21 = a5;
LABEL_8:
        v9 = (_QWORD *)a3;
        goto LABEL_3;
      }
LABEL_46:
      *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_nohint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
                         (_DWORD)v8,
                         (unsigned int)&v22,
                         a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v7;
    }
    if ( (_QWORD *)a3 == v5 )
    {
      v9 = (_QWORD *)v5[2];
      if ( *((_DWORD *)v9 + 7) >= *a4 )
        goto LABEL_46;
      v21 = a5;
LABEL_12:
      v10 = 0;
      goto LABEL_4;
    }
    v11 = *a4;
    v12 = *(_DWORD *)(a3 + 28) < *a4;
    if ( *(_DWORD *)(a3 + 28) > *a4 )
    {
      v13 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v9 = *(_QWORD **)(a3 + 16);
      }
      else
      {
        v9 = *(_QWORD **)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v13 = i;
          v9 = (_QWORD *)v13;
          if ( !*(_BYTE *)(v13 + 25) )
            v9 = (_QWORD *)i;
        }
        else
        {
          for ( j = v9[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            v9 = (_QWORD *)j;
        }
      }
      if ( *((_DWORD *)v9 + 7) < v11 )
      {
        a1 = v8;
        v21 = a5;
        if ( !*(_BYTE *)(v9[2] + 25LL) )
          goto LABEL_8;
        goto LABEL_12;
      }
      v12 = *(_DWORD *)(a3 + 28) < v11;
    }
    if ( v12 )
    {
      v16 = (_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v17 = *(_QWORD *)(a3 + 16);
        if ( *(_BYTE *)(v17 + 25) )
        {
          for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v16 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
            v16 = (_QWORD *)k;
          v16 = (_QWORD *)k;
        }
        else
        {
          v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v17);
        }
      }
      if ( v16 == v5 || v11 < *((_DWORD *)v16 + 7) )
      {
        a2 = v7;
        if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        {
          v9 = (_QWORD *)a3;
          v21 = a5;
          v10 = 0;
        }
        else
        {
          v9 = v16;
          v21 = a5;
          v10 = 1;
        }
        a1 = v8;
        goto LABEL_4;
      }
    }
    goto LABEL_46;
  }
  v9 = (_QWORD *)*a1;
  v21 = a5;
LABEL_3:
  v10 = 1;
LABEL_4:
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_at<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
    a1,
    a2,
    v10,
    v9,
    v20,
    v21);
  return v7;
}
