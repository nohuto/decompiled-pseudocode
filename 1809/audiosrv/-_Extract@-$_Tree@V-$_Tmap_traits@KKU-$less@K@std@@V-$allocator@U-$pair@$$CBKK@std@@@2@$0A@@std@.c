/*
 * XREFs of ?_Extract@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000A1F0
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009E60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009FD0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x1800E6444 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2_ea_1800E6444.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CAF5C (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CAFD0 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 **v4; // r11
  __int64 *v5; // r9
  __int64 v6; // rcx
  __int64 i; // rcx
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 *result; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  char v18; // dl
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx

  v3 = a2;
  v4 = a1;
  v5 = (__int64 *)a2;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( *(_BYTE *)(v6 + 25) )
    {
      for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v3 != *(_QWORD *)(i + 16) )
          break;
        v3 = i;
      }
      v3 = i;
    }
    else
    {
      v3 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(v6, a2, a3, a2);
    }
  }
  v8 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_6;
  if ( *(_BYTE *)(v8 + 25) )
  {
    v8 = *v5;
LABEL_6:
    v9 = v5[1];
    if ( !*(_BYTE *)(v8 + 25) )
      *(_QWORD *)(v8 + 8) = v9;
    if ( (__int64 *)(*v4)[1] == v5 )
    {
      (*v4)[1] = v8;
    }
    else if ( *(__int64 **)v9 == v5 )
    {
      *(_QWORD *)v9 = v8;
    }
    else
    {
      *(_QWORD *)(v9 + 16) = v8;
    }
    v10 = *v4;
    v11 = *v4;
    if ( (__int64 *)**v4 == v5 )
    {
      if ( *(_BYTE *)(v8 + 25) )
        v12 = v9;
      else
        v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(v8, a2, v10, v5);
      *v10 = v12;
      v10 = *v4;
      v11 = *v4;
    }
    if ( (__int64 *)v11[2] == v5 )
    {
      if ( *(_BYTE *)(v8 + 25) )
      {
        v13 = v9;
      }
      else
      {
        v16 = *(_QWORD *)(v8 + 16);
        v13 = v8;
        if ( !*(_BYTE *)(v16 + 25) )
        {
          do
          {
            v13 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
          v11 = v10;
        }
      }
      v11[2] = v13;
    }
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v3 + 16);
  if ( (__int64 *)v3 == v5 )
    goto LABEL_6;
  *(_QWORD *)(*v5 + 8) = v3;
  *(_QWORD *)v3 = *v5;
  if ( v3 == v5[2] )
  {
    v9 = v3;
  }
  else
  {
    v9 = *(_QWORD *)(v3 + 8);
    if ( !*(_BYTE *)(v8 + 25) )
      *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v3 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v3;
  }
  if ( (__int64 *)(*v4)[1] == v5 )
  {
    (*v4)[1] = v3;
  }
  else
  {
    v17 = (__int64 *)v5[1];
    if ( (__int64 *)*v17 == v5 )
      *v17 = v3;
    else
      v17[2] = v3;
  }
  *(_QWORD *)(v3 + 8) = v5[1];
  v18 = *(_BYTE *)(v3 + 24);
  *(_BYTE *)(v3 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v18;
LABEL_18:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_21;
  if ( v8 != (*v4)[1] )
  {
    do
    {
      v19 = v9;
      if ( *(_BYTE *)(v8 + 24) != 1 )
        break;
      v20 = *(_QWORD *)v9;
      if ( v8 == *(_QWORD *)v9 )
      {
        v20 = *(_QWORD *)(v9 + 16);
        if ( !*(_BYTE *)(v20 + 24) )
        {
          *(_BYTE *)(v20 + 24) = 1;
          *(_BYTE *)(v9 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v4);
          v20 = *(_QWORD *)(v9 + 16);
        }
        if ( *(_BYTE *)(v20 + 25) )
          goto LABEL_65;
        if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
            *(_BYTE *)(v20 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              v4,
              v20);
            v20 = *(_QWORD *)(v9 + 16);
          }
          *(_BYTE *)(v20 + 24) = *(_BYTE *)(v9 + 24);
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v4);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v20 + 24) )
        {
          *(_BYTE *)(v20 + 24) = 1;
          *(_BYTE *)(v9 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
            v4,
            v9);
          v20 = *(_QWORD *)v9;
        }
        if ( *(_BYTE *)(v20 + 25) )
          goto LABEL_65;
        v21 = *(_QWORD *)(v20 + 16);
        if ( *(_BYTE *)(v21 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) == 1 )
          {
            *(_BYTE *)(v21 + 24) = 1;
            *(_BYTE *)(v20 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v4);
            v20 = *(_QWORD *)v9;
          }
          *(_BYTE *)(v20 + 24) = *(_BYTE *)(v9 + 24);
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
            v4,
            v9);
          break;
        }
      }
      *(_BYTE *)(v20 + 24) = 0;
LABEL_65:
      v8 = v9;
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v19 != (*v4)[1] );
  }
  *(_BYTE *)(v8 + 24) = 1;
LABEL_21:
  v14 = v4[1];
  result = v5;
  if ( v14 )
    v4[1] = (__int64 *)((char *)v14 - 1);
  return result;
}
