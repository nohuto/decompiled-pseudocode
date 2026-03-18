/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5830
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801F5648 (--$_Insert_hint@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180172104 (-_Max@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@AEAU?$pair@$$CBW4Enum@SceneMaterialInputType@@I@1@1@Z @ 0x1801F54E0 (--$_Insert_at@AEAU-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_nohint<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _DWORD *v5; // r11
  __int64 *v7; // rsi
  __int64 v8; // r9
  char v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 i; // rax
  int v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = *a1;
  v9 = 1;
  v10 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v8 = v10;
    if ( *v5 >= *(_DWORD *)(v10 + 28) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      v9 = 0;
    }
    else
    {
      v10 = *(_QWORD *)v10;
      v9 = 1;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == *(_QWORD *)*a1 )
    {
      v9 = 1;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v8 + 25) )
    {
      v11 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
      {
        for ( i = *(_QWORD *)(v8 + 8); !*(_BYTE *)(i + 25) && v11 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v11 = i;
        if ( *(_BYTE *)(v11 + 25) )
          i = v11;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max(*(_QWORD *)v8);
      }
      v11 = i;
    }
  }
  if ( *(_DWORD *)(v11 + 28) >= *v5 )
  {
    std::_Deallocate<16,0>(a5, 0x28uLL);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  a1 = v7;
LABEL_9:
  v12 = std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Insert_at<std::pair<enum SceneMaterialInputType::Enum const,unsigned int> &,std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *> *>(
          a1,
          &v16,
          v9,
          (_QWORD *)v8,
          v15,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
