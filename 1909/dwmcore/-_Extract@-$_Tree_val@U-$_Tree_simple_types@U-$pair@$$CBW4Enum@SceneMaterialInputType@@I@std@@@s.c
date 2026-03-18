/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@@Z @ 0x1801F6120
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@0@Z @ 0x1801F63C8 (-erase@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 * Callees:
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180172104 (-_Max@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180174488 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r10
  __int64 *v5; // rdi
  __int64 *v6; // r11
  __int64 *i; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax
  char v12; // dl
  __int64 **v13; // rcx
  __int64 v14; // rdi
  _BYTE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v2 = a2 + 2;
  v3 = a2[2];
  v5 = a2;
  v6 = a2;
  if ( *(_BYTE *)(v3 + 25) )
  {
    for ( i = (__int64 *)a2[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)a2[2]);
  }
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_12;
  if ( *(_BYTE *)(v3 + 25) )
  {
    v3 = *v6;
LABEL_12:
    v8 = v6[1];
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v3;
    }
    else if ( *(__int64 **)v8 == v6 )
    {
      *(_QWORD *)v8 = v3;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v3;
    }
    v9 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        v10 = (_QWORD *)v8;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v3);
      *v9 = v10;
      v9 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v9[2] == v6 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        v11 = v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max(v3);
      v9[2] = v11;
    }
    v12 = *((_BYTE *)v5 + 24);
    goto LABEL_41;
  }
  v3 = i[2];
  if ( i == v6 )
    goto LABEL_12;
  *(_QWORD *)(*v6 + 8) = i;
  *i = *v6;
  if ( i == (__int64 *)*v2 )
  {
    v8 = (__int64)i;
  }
  else
  {
    v8 = i[1];
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v8;
    *(_QWORD *)v8 = v3;
    i[2] = *v2;
    *(_QWORD *)(*v2 + 8LL) = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v13 = (__int64 **)v6[1];
    if ( *v13 == v6 )
      *v13 = i;
    else
      v13[2] = i;
  }
  i[1] = v6[1];
  v12 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v12;
LABEL_41:
  if ( v12 == 1 )
  {
    if ( v3 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v14 = v8;
        if ( *(_BYTE *)(v3 + 24) != 1 )
          break;
        v15 = *(_BYTE **)v8;
        if ( v3 == *(_QWORD *)v8 )
        {
          v15 = *(_BYTE **)(v8 + 16);
          if ( !v15[24] )
          {
            v15[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v8);
            v15 = *(_BYTE **)(v8 + 16);
          }
          if ( v15[25] )
            goto LABEL_59;
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
              v15[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                (__int64)a1,
                v15);
              v15 = *(_BYTE **)(v8 + 16);
            }
            v15[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v15[24] )
          {
            v15[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            v15 = *(_BYTE **)v8;
          }
          if ( v15[25] )
            goto LABEL_59;
          v16 = *((_QWORD *)v15 + 2);
          if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == 1 )
            {
              *(_BYTE *)(v16 + 24) = 1;
              v15[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
                (__int64)a1,
                (__int64)v15);
              v15 = *(_BYTE **)v8;
            }
            v15[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            break;
          }
        }
        v15[24] = 0;
LABEL_59:
        v3 = v14;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v14 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v3 + 24) = 1;
  }
  v17 = a1[1];
  if ( v17 )
    a1[1] = v17 - 1;
  return v6;
}
