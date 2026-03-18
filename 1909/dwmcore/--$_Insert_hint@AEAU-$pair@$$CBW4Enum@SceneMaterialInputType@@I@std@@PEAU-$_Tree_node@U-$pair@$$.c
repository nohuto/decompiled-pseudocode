/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5648
 * Callers:
 *     ??$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@?$map@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x1801F595C (--$_Try_emplace@AEBW4Enum@SceneMaterialInputType@@$$V@-$map@W4Enum@SceneMaterialInputType@@IU-$l.c)
 * Callees:
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180172104 (-_Max@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@1@Z @ 0x1801F54E0 (--$_Insert_at@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5830 (--$_Insert_nohint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_hint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // r11
  _QWORD *v7; // rbx
  __int64 *v8; // r10
  _QWORD *v9; // r9
  char v10; // r8
  int v11; // esi
  bool v12; // cc
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v19; // [rsp+20h] [rbp-28h]
  _QWORD *v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h] BYREF

  v5 = (_QWORD *)*a1;
  v7 = a2;
  v8 = a1;
  if ( a1[1] )
  {
    if ( a3 == *v5 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 28) )
      {
        v9 = (_QWORD *)a3;
        goto LABEL_3;
      }
LABEL_42:
      *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_nohint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
                         (_DWORD)v8,
                         (unsigned int)&v21,
                         a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v7;
    }
    if ( (_QWORD *)a3 == v5 )
    {
      v9 = (_QWORD *)v5[2];
      if ( *((_DWORD *)v9 + 7) >= *a4 )
        goto LABEL_42;
      v20 = a5;
    }
    else
    {
      v11 = *a4;
      v12 = *(_DWORD *)(a3 + 28) < *a4;
      if ( *(_DWORD *)(a3 + 28) > *a4 )
      {
        v13 = a3;
        if ( *(_BYTE *)(a3 + 25) )
        {
          v13 = *(_QWORD *)(a3 + 16);
        }
        else if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          v14 = *(_QWORD *)(a3 + 8);
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v15 = a3;
            do
            {
              if ( v15 != *(_QWORD *)v14 )
                break;
              v13 = v14;
              v14 = *(_QWORD *)(v14 + 8);
              v15 = v13;
            }
            while ( !*(_BYTE *)(v14 + 25) );
          }
          if ( !*(_BYTE *)(v13 + 25) )
            v13 = v14;
        }
        else
        {
          v13 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max(*(_QWORD *)a3);
        }
        if ( *(_DWORD *)(v13 + 28) < v11 )
        {
          a2 = v7;
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
          {
            v9 = (_QWORD *)v13;
            v20 = a5;
            v10 = 0;
          }
          else
          {
            v9 = (_QWORD *)a3;
            v20 = a5;
            v10 = 1;
          }
          a1 = v8;
          goto LABEL_5;
        }
        v12 = *(_DWORD *)(a3 + 28) < v11;
      }
      if ( !v12 )
        goto LABEL_42;
      v16 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(v16 + 25) )
      {
        v9 = *(_QWORD **)(a3 + 8);
        if ( !*((_BYTE *)v9 + 25) )
        {
          v17 = (_QWORD *)a3;
          do
          {
            if ( v17 != (_QWORD *)v9[2] )
              break;
            v17 = v9;
            v9 = (_QWORD *)v9[1];
          }
          while ( !*((_BYTE *)v9 + 25) );
        }
      }
      else
      {
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v16);
      }
      if ( v9 != v5 && v11 >= *((_DWORD *)v9 + 7) )
        goto LABEL_42;
      a2 = v7;
      v20 = a5;
      a1 = v8;
      if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        goto LABEL_4;
      v9 = (_QWORD *)a3;
    }
    v10 = 0;
    goto LABEL_5;
  }
  v9 = (_QWORD *)*a1;
LABEL_3:
  v20 = a5;
LABEL_4:
  v10 = 1;
LABEL_5:
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_at<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
    a1,
    a2,
    v10,
    v9,
    v19,
    v20);
  return v7;
}
