/*
 * XREFs of ?_Extract@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x180148984
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@0@Z @ 0x1800727F8 (-erase@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@@@s.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@Z @ 0x1800E1EA4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180148F50 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v6; // r11
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // dl
  __int64 *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rcx

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
    a3 = *a1;
    v11 = *a1;
    if ( (__int64 *)**a1 == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
        v12 = v10;
      else
        v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
                v9,
                a2,
                a3);
      *a3 = v12;
      a3 = *a1;
      v11 = *a1;
    }
    if ( (__int64 *)v11[2] == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v13 = v10;
      }
      else
      {
        v14 = *(_QWORD *)(v9 + 16);
        v13 = v9;
        if ( !*(_BYTE *)(v14 + 25) )
        {
          do
          {
            v13 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
          v11 = a3;
        }
      }
      v11[2] = v13;
    }
    v15 = *(_BYTE *)(a2 + 24);
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
    v16 = (__int64 *)v6[1];
    if ( (__int64 *)*v16 == v6 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  *(_QWORD *)(v3 + 8) = v6[1];
  v15 = *(_BYTE *)(v3 + 24);
  *(_BYTE *)(v3 + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v15;
LABEL_44:
  if ( v15 == 1 )
  {
    if ( v9 != (*a1)[1] )
    {
      do
      {
        v17 = v10;
        if ( *(_BYTE *)(v9 + 24) != 1 )
          break;
        v18 = *(_QWORD *)v10;
        if ( v9 == *(_QWORD *)v10 )
        {
          v18 = *(_QWORD *)(v10 + 16);
          if ( !*(_BYTE *)(v18 + 24) )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            v18 = *(_QWORD *)(v10 + 16);
          }
          if ( *(_BYTE *)(v18 + 25) )
            goto LABEL_62;
          if ( *(_BYTE *)(*(_QWORD *)v18 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v18 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v18 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v18 + 24LL) = 1;
              *(_BYTE *)(v18 + 24) = 0;
              std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
                a1,
                v18,
                a3,
                v10);
              v18 = *(_QWORD *)(v10 + 16);
            }
            *(_BYTE *)(v18 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v18 + 16) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v18 + 24) )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
              a1,
              v10,
              a3,
              v10);
            v18 = *(_QWORD *)v10;
          }
          if ( *(_BYTE *)(v18 + 25) )
            goto LABEL_62;
          v19 = *(_QWORD *)(v18 + 16);
          if ( *(_BYTE *)(v19 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v18 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v18 + 24LL) == 1 )
            {
              *(_BYTE *)(v19 + 24) = 1;
              *(_BYTE *)(v18 + 24) = 0;
              std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(
                (__int64)a1,
                v18);
              v18 = *(_QWORD *)v10;
            }
            *(_BYTE *)(v18 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v18 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
              a1,
              v10,
              a3,
              v10);
            break;
          }
        }
        *(_BYTE *)(v18 + 24) = 0;
LABEL_62:
        v9 = v17;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v17 != (*a1)[1] );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  v20 = a1[1];
  if ( v20 )
    a1[1] = (__int64 *)((char *)v20 - 1);
  return v6;
}
