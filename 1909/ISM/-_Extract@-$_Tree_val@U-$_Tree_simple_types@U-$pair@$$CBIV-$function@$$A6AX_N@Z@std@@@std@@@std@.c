/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@@Z @ 0x18007C638
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@0@Z @ 0x18007C93C (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025538 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x180026530 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@@std@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18007C8E8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  char v13; // dl
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v19);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    v7 = (_QWORD *)*a1;
    v8 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v9 = (_QWORD *)v6;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v4);
      *v7 = v9;
      v7 = (_QWORD *)*a1;
      v8 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v8[2] == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v10 = v6;
      }
      else
      {
        v11 = *(_QWORD *)(v4 + 16);
        v10 = v4;
        if ( !*(_BYTE *)(v11 + 25) )
        {
          do
          {
            v10 = v11;
            v11 = *(_QWORD *)(v11 + 16);
          }
          while ( !*(_BYTE *)(v11 + 25) );
          v8 = v7;
        }
      }
      v8[2] = v10;
    }
    goto LABEL_35;
  }
  v5 = (__int64)v19;
  v4 = v19[2];
  if ( v19 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v19;
  *(_QWORD *)v5 = *v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    *(_QWORD *)(v5 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v12 = (__int64 *)v3[1];
    if ( (__int64 *)*v12 == v3 )
      *v12 = v5;
    else
      v12[2] = v5;
  }
  *(_QWORD *)(v5 + 8) = v3[1];
  v13 = *(_BYTE *)(v5 + 24);
  *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v13;
LABEL_35:
  if ( *((_BYTE *)v3 + 24) == 1 )
  {
    if ( v4 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v14 = v6;
        if ( *(_BYTE *)(v4 + 24) != 1 )
          break;
        v15 = *(_QWORD *)v6;
        if ( v4 == *(_QWORD *)v6 )
        {
          v15 = *(_QWORD *)(v6 + 16);
          if ( !*(_BYTE *)(v15 + 24) )
          {
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Lrotate(
              (__int64)a1,
              v6);
            v15 = *(_QWORD *)(v6 + 16);
          }
          if ( *(_BYTE *)(v15 + 25) )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
              *(_BYTE *)(v15 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
                a1,
                v15);
              v15 = *(_QWORD *)(v6 + 16);
            }
            *(_BYTE *)(v15 + 24) = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v15 + 16) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Lrotate(
              (__int64)a1,
              v6);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v15 + 24) )
          {
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(a1, v6);
            v15 = *(_QWORD *)v6;
          }
          if ( *(_BYTE *)(v15 + 25) )
            goto LABEL_53;
          v16 = *(_QWORD *)(v15 + 16);
          if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == 1 )
            {
              *(_BYTE *)(v16 + 24) = 1;
              *(_BYTE *)(v15 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Lrotate(
                (__int64)a1,
                v15);
              v15 = *(_QWORD *)v6;
            }
            *(_BYTE *)(v15 + 24) = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(a1, v6);
            break;
          }
        }
        *(_BYTE *)(v15 + 24) = 0;
LABEL_53:
        v4 = v14;
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v14 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v4 + 24) = 1;
  }
  v17 = a1[1];
  if ( v17 )
    a1[1] = v17 - 1;
  return v3;
}
