/*
 * XREFs of ?_Extract@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@@Z @ 0x180148C58
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@0@Z @ 0x180071CAC (-erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x180013874 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?_Rrotate@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800138C8 (-_Rrotate@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v6; // r11
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // dl
  __int64 *v17; // rcx
  __int64 v18; // rdi
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rcx

  v3 = a2;
  v6 = (__int64 *)a2;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = i;
      v3 = i;
    }
    else
    {
      v3 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(v7, a2, a3);
    }
  }
  v9 = v6[2];
  if ( *(_BYTE *)(*v6 + 25) )
    goto LABEL_13;
  if ( *(_BYTE *)(v9 + 25) )
  {
    v9 = *v6;
LABEL_13:
    v10 = v6[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( (__int64 *)(*a1)[1] == v6 )
    {
      (*a1)[1] = v9;
    }
    else if ( *(__int64 **)v10 == v6 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    v11 = *a1;
    v12 = *a1;
    if ( (__int64 *)**a1 == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
        v13 = v10;
      else
        v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                v9,
                a2,
                v11);
      *v11 = v13;
      v11 = *a1;
      v12 = *a1;
    }
    if ( (__int64 *)v12[2] == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v14 = v10;
      }
      else
      {
        v15 = *(_QWORD *)(v9 + 16);
        v14 = v9;
        if ( !*(_BYTE *)(v15 + 25) )
        {
          do
          {
            v14 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
          v12 = v11;
        }
      }
      v12[2] = v14;
    }
    v16 = *(_BYTE *)(a2 + 24);
    goto LABEL_44;
  }
  v9 = *(_QWORD *)(v3 + 16);
  if ( (__int64 *)v3 == v6 )
    goto LABEL_13;
  *(_QWORD *)(*v6 + 8) = v3;
  *(_QWORD *)v3 = *v6;
  if ( v3 == v6[2] )
  {
    v10 = v3;
  }
  else
  {
    v10 = *(_QWORD *)(v3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(v3 + 16) = v6[2];
    *(_QWORD *)(v6[2] + 8) = v3;
  }
  if ( (__int64 *)(*a1)[1] == v6 )
  {
    (*a1)[1] = v3;
  }
  else
  {
    v17 = (__int64 *)v6[1];
    if ( (__int64 *)*v17 == v6 )
      *v17 = v3;
    else
      v17[2] = v3;
  }
  *(_QWORD *)(v3 + 8) = v6[1];
  v16 = *(_BYTE *)(v3 + 24);
  *(_BYTE *)(v3 + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v16;
LABEL_44:
  if ( v16 == 1 )
  {
    if ( v9 != (*a1)[1] )
    {
      do
      {
        v18 = v10;
        if ( *(_BYTE *)(v9 + 24) != 1 )
          break;
        v19 = *(_BYTE **)v10;
        if ( v9 == *(_QWORD *)v10 )
        {
          v19 = *(_BYTE **)(v10 + 16);
          if ( !v19[24] )
          {
            v19[24] = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            v19 = *(_BYTE **)(v10 + 16);
          }
          if ( v19[25] )
            goto LABEL_62;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Rrotate(
                (__int64)a1,
                v19);
              v19 = *(_BYTE **)(v10 + 16);
            }
            v19[24] = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !v19[24] )
          {
            v19[24] = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            v19 = *(_BYTE **)v10;
          }
          if ( v19[25] )
            goto LABEL_62;
          v20 = *((_QWORD *)v19 + 2);
          if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
            {
              *(_BYTE *)(v20 + 24) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Lrotate(
                (__int64)a1,
                (__int64)v19);
              v19 = *(_BYTE **)v10;
            }
            v19[24] = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            break;
          }
        }
        v19[24] = 0;
LABEL_62:
        v9 = v18;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v18 != (*a1)[1] );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  v21 = a1[1];
  if ( v21 )
    a1[1] = (__int64 *)((char *)v21 - 1);
  return v6;
}
