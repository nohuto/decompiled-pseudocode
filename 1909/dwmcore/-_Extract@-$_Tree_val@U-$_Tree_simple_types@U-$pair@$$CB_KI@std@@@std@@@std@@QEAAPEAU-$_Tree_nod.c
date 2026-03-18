/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@@Z @ 0x1801718E4
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@0@Z @ 0x1800CEE3C (-erase@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@$0A@@std@.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@Z @ 0x1800C4F9C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KI@std@@@std@@@std@@QEAAXPEAU-$_Tree_no.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Extract(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 v3; // r10
  _QWORD *v5; // rdi
  __int64 *v6; // r11
  __int64 i; // rax
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // dl
  __int64 *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rcx

  v2 = a2 + 2;
  v3 = a2[2];
  v5 = a2;
  v6 = a2;
  if ( *(_BYTE *)(v3 + 25) )
  {
    for ( i = a2[1]; !*(_BYTE *)(i + 25) && a2 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
      a2 = (_QWORD *)i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(a2[2], a2, v2);
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
    if ( (__int64 *)(*a1)[1] == v6 )
    {
      (*a1)[1] = v3;
    }
    else if ( *(__int64 **)v8 == v6 )
    {
      *(_QWORD *)v8 = v3;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v3;
    }
    v2 = *a1;
    v9 = *a1;
    if ( (__int64 *)**a1 == v6 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        v10 = v8;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                v3,
                a2,
                v2);
      *v2 = v10;
      v2 = *a1;
      v9 = *a1;
    }
    if ( (__int64 *)v9[2] == v6 )
    {
      if ( *(_BYTE *)(v3 + 25) )
      {
        v11 = v8;
      }
      else
      {
        v12 = *(_QWORD *)(v3 + 16);
        v11 = v3;
        if ( !*(_BYTE *)(v12 + 25) )
        {
          do
          {
            v11 = v12;
            v12 = *(_QWORD *)(v12 + 16);
          }
          while ( !*(_BYTE *)(v12 + 25) );
          v9 = v2;
        }
      }
      v9[2] = v11;
    }
    v13 = *((_BYTE *)v5 + 24);
    goto LABEL_43;
  }
  v3 = *(_QWORD *)(i + 16);
  if ( (__int64 *)i == v6 )
    goto LABEL_12;
  *(_QWORD *)(*v6 + 8) = i;
  *(_QWORD *)i = *v6;
  if ( i == *v2 )
  {
    v8 = i;
  }
  else
  {
    v8 = *(_QWORD *)(i + 8);
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v8;
    *(_QWORD *)v8 = v3;
    *(_QWORD *)(i + 16) = *v2;
    *(_QWORD *)(*v2 + 8) = i;
  }
  if ( (__int64 *)(*a1)[1] == v6 )
  {
    (*a1)[1] = i;
  }
  else
  {
    v14 = (__int64 *)v6[1];
    if ( (__int64 *)*v14 == v6 )
      *v14 = i;
    else
      v14[2] = i;
  }
  *(_QWORD *)(i + 8) = v6[1];
  v13 = *(_BYTE *)(i + 24);
  *(_BYTE *)(i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v13;
LABEL_43:
  if ( v13 == 1 )
  {
    if ( v3 != (*a1)[1] )
    {
      do
      {
        v15 = v8;
        if ( *(_BYTE *)(v3 + 24) != 1 )
          break;
        v16 = *(_QWORD *)v8;
        if ( v3 == *(_QWORD *)v8 )
        {
          v16 = *(_QWORD *)(v8 + 16);
          if ( !*(_BYTE *)(v16 + 24) )
          {
            *(_BYTE *)(v16 + 24) = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Lrotate(
              (__int64)a1,
              v8);
            v16 = *(_QWORD *)(v8 + 16);
          }
          if ( *(_BYTE *)(v16 + 25) )
            goto LABEL_61;
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
              *(_BYTE *)(v16 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                a1,
                v16,
                v2,
                v8);
              v16 = *(_QWORD *)(v8 + 16);
            }
            *(_BYTE *)(v16 + 24) = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v16 + 24) )
          {
            *(_BYTE *)(v16 + 24) = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v8,
              v2,
              v8);
            v16 = *(_QWORD *)v8;
          }
          if ( *(_BYTE *)(v16 + 25) )
            goto LABEL_61;
          v17 = *(_QWORD *)(v16 + 16);
          if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
            {
              *(_BYTE *)(v17 + 24) = 1;
              *(_BYTE *)(v16 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Lrotate(
                (__int64)a1,
                v16);
              v16 = *(_QWORD *)v8;
            }
            *(_BYTE *)(v16 + 24) = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v8,
              v2,
              v8);
            break;
          }
        }
        *(_BYTE *)(v16 + 24) = 0;
LABEL_61:
        v3 = v15;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v15 != (*a1)[1] );
    }
    *(_BYTE *)(v3 + 24) = 1;
  }
  v18 = a1[1];
  if ( v18 )
    a1[1] = (__int64 *)((char *)v18 - 1);
  return v6;
}
