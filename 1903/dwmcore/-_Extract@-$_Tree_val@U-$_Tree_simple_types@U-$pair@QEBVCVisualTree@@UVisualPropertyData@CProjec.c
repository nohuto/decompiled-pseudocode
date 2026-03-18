/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@@Z @ 0x180006CFC
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x180006C00 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShado_ea_180006C00.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800069E0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@@Z @ 0x180006A34 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjec.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v2; // r8
  __int64 i; // rax
  __int64 v5; // rdi
  __int64 v6; // r11
  __int64 j; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  char v10; // dl
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 k; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rdi
  _BYTE *v19; // rdx
  __int64 v20; // rcx

  v2 = (__int64 *)(a2 + 16);
  i = *(_QWORD *)(a2 + 16);
  v5 = a2;
  v6 = a2;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25) && a2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      a2 = i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v8 = *v2;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v8 = *(_QWORD *)v6;
    }
    else
    {
      v8 = *(_QWORD *)(i + 16);
      if ( i != v6 )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
        *(_QWORD *)i = *(_QWORD *)v6;
        if ( i == *v2 )
        {
          v9 = i;
        }
        else
        {
          v9 = *(_QWORD *)(i + 8);
          if ( !*(_BYTE *)(v8 + 25) )
            *(_QWORD *)(v8 + 8) = v9;
          *(_QWORD *)v9 = v8;
          *(_QWORD *)(i + 16) = *v2;
          *(_QWORD *)(*v2 + 8) = i;
        }
        if ( *(_QWORD *)(*a1 + 8LL) == v6 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v17 = *(__int64 **)(v6 + 8);
          if ( *v17 == v6 )
            *v17 = i;
          else
            v17[2] = i;
        }
        *(_QWORD *)(i + 8) = *(_QWORD *)(v6 + 8);
        v10 = *(_BYTE *)(i + 24);
        *(_BYTE *)(i + 24) = *(_BYTE *)(v6 + 24);
        *(_BYTE *)(v6 + 24) = v10;
        goto LABEL_11;
      }
    }
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( !*(_BYTE *)(v8 + 25) )
    *(_QWORD *)(v8 + 8) = v9;
  if ( *(_QWORD *)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v8;
  }
  else if ( *(_QWORD *)v9 == v6 )
  {
    *(_QWORD *)v9 = v8;
  }
  else
  {
    *(_QWORD *)(v9 + 16) = v8;
  }
  if ( *(_QWORD *)*a1 == v6 )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      k = v9;
    }
    else
    {
      v16 = *(_QWORD *)v8;
      for ( k = v8; !*(_BYTE *)(v16 + 25); v16 = *(_QWORD *)v16 )
        k = v16;
    }
    *(_QWORD *)*a1 = k;
  }
  if ( *(_QWORD *)(*a1 + 16LL) == v6 )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v14 = v9;
    }
    else
    {
      v13 = *(_QWORD *)(v8 + 16);
      v14 = v8;
      while ( !*(_BYTE *)(v13 + 25) )
      {
        v14 = v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v14;
  }
  v10 = *(_BYTE *)(v5 + 24);
LABEL_11:
  if ( v10 != 1 )
    goto LABEL_12;
  if ( v8 != *(_QWORD *)(*a1 + 8LL) )
  {
    do
    {
      v18 = v9;
      if ( *(_BYTE *)(v8 + 24) != 1 )
        break;
      v19 = *(_BYTE **)v9;
      if ( v8 == *(_QWORD *)v9 )
      {
        v19 = *(_BYTE **)(v9 + 16);
        if ( !v19[24] )
        {
          v19[24] = 1;
          *(_BYTE *)(v9 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Lrotate(
            (__int64)a1,
            v9);
          v19 = *(_BYTE **)(v9 + 16);
        }
        if ( v19[25] )
          goto LABEL_68;
        if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            v19[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate((__int64)a1, v19);
            v19 = *(_BYTE **)(v9 + 16);
          }
          v19[24] = *(_BYTE *)(v9 + 24);
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Lrotate(
            (__int64)a1,
            v9);
          break;
        }
      }
      else
      {
        if ( !v19[24] )
        {
          v19[24] = 1;
          *(_BYTE *)(v9 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate((__int64)a1, (_QWORD *)v9);
          v19 = *(_BYTE **)v9;
        }
        if ( v19[25] )
          goto LABEL_68;
        v20 = *((_QWORD *)v19 + 2);
        if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
          {
            *(_BYTE *)(v20 + 24) = 1;
            v19[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Lrotate(
              (__int64)a1,
              (__int64)v19);
            v19 = *(_BYTE **)v9;
          }
          v19[24] = *(_BYTE *)(v9 + 24);
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate((__int64)a1, (_QWORD *)v9);
          break;
        }
      }
      v19[24] = 0;
LABEL_68:
      v8 = v18;
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v18 != *(_QWORD *)(*a1 + 8LL) );
  }
  *(_BYTE *)(v8 + 24) = 1;
LABEL_12:
  v11 = a1[1];
  if ( v11 )
    a1[1] = v11 - 1;
  return v6;
}
