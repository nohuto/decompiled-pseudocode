/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@@Z @ 0x180171E74
 * Callers:
 *     ?erase@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@2@V32@0@Z @ 0x1800382C0 (-erase@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA-AV-$_Tre.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18001D878 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x1800401A8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAXPEAU-$_Tree_node@_KPEAX@2@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180041FDC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@U_Iterator_.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x180172104 (-_Max@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  __int64 *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(&v18);
  v6 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *v5;
LABEL_5:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(__int64 **)v8 == v5 )
    {
      *(_QWORD *)v8 = v6;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v6;
    }
    v4 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v9 = (_QWORD *)v8;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min((_QWORD *)v6);
      *v4 = v9;
      v4 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v4[2] == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v10 = v8;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Max(v6, v3, v4, v8);
      v4[2] = v10;
    }
    v11 = *((_BYTE *)v5 + 24);
    goto LABEL_34;
  }
  v7 = v18;
  v6 = *(_QWORD *)(v18 + 16);
  if ( (__int64 *)v18 == v5 )
    goto LABEL_5;
  *(_QWORD *)(*v5 + 8) = v18;
  *(_QWORD *)v7 = *v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v7 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v7;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else
  {
    v12 = (__int64 *)v5[1];
    if ( (__int64 *)*v12 == v5 )
      *v12 = v7;
    else
      v12[2] = v7;
  }
  *(_QWORD *)(v7 + 8) = v5[1];
  v11 = *(_BYTE *)(v7 + 24);
  *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v11;
LABEL_34:
  if ( v11 == 1 )
  {
    if ( v6 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v13 = v8;
        if ( *(_BYTE *)(v6 + 24) != 1 )
          break;
        v14 = *(_QWORD *)v8;
        if ( v6 == *(_QWORD *)v8 )
        {
          v14 = *(_QWORD *)(v8 + 16);
          if ( !*(_BYTE *)(v14 + 24) )
          {
            *(_BYTE *)(v14 + 24) = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Lrotate((__int64)a1, v8);
            v14 = *(_QWORD *)(v8 + 16);
          }
          if ( *(_BYTE *)(v14 + 25) )
            goto LABEL_52;
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v14 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
              *(_BYTE *)(v14 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                a1,
                v14,
                v4,
                v8);
              v14 = *(_QWORD *)(v8 + 16);
            }
            *(_BYTE *)(v14 + 24) = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v14 + 16) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Lrotate((__int64)a1, v8);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v14 + 24) )
          {
            *(_BYTE *)(v14 + 24) = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v8,
              v4,
              v8);
            v14 = *(_QWORD *)v8;
          }
          if ( *(_BYTE *)(v14 + 25) )
            goto LABEL_52;
          v15 = *(_QWORD *)(v14 + 16);
          if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
            {
              *(_BYTE *)(v15 + 24) = 1;
              *(_BYTE *)(v14 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Lrotate((__int64)a1, v14);
              v14 = *(_QWORD *)v8;
            }
            *(_BYTE *)(v14 + 24) = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v8,
              v4,
              v8);
            break;
          }
        }
        *(_BYTE *)(v14 + 24) = 0;
LABEL_52:
        v6 = v13;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v13 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v6 + 24) = 1;
  }
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v5;
}
