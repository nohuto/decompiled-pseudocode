/*
 * XREFs of ?_Extract@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18008F428
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x18008F8F4 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_18008F8F4.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18008F70C (-_Lrotate@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$Com.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@@Z @ 0x18008F780 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$ComPtr@UIOcclu.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>,0>>::_Extract(
        __int64 **a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // r11
  __int64 i; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  char v14; // dl
  bool j; // zf
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx

  v3 = a2;
  v5 = a2;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 25LL) )
    {
      for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = i;
      v3 = i;
    }
    else
    {
      v3 = ((__int64 (*)(void))std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min)();
    }
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    if ( *(_BYTE *)(v7 + 25) )
    {
      v7 = *(_QWORD *)v5;
    }
    else
    {
      v7 = *(_QWORD *)(v3 + 16);
      if ( v3 != v5 )
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v3;
        *(_QWORD *)v3 = *(_QWORD *)v5;
        if ( v3 == *(_QWORD *)(v5 + 16) )
        {
          v8 = v3;
        }
        else
        {
          v8 = *(_QWORD *)(v3 + 8);
          if ( !*(_BYTE *)(v7 + 25) )
            *(_QWORD *)(v7 + 8) = v8;
          *(_QWORD *)v8 = v7;
          *(_QWORD *)(v3 + 16) = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL) = v3;
        }
        if ( (*a1)[1] == v5 )
        {
          (*a1)[1] = v3;
        }
        else
        {
          v13 = *(__int64 **)(v5 + 8);
          if ( *v13 == v5 )
            *v13 = v3;
          else
            v13[2] = v3;
        }
        *(_QWORD *)(v3 + 8) = *(_QWORD *)(v5 + 8);
        v14 = *(_BYTE *)(v3 + 24);
        *(_BYTE *)(v3 + 24) = *(_BYTE *)(v5 + 24);
        *(_BYTE *)(v5 + 24) = v14;
        goto LABEL_43;
      }
    }
  }
  v8 = *(_QWORD *)(v5 + 8);
  if ( !*(_BYTE *)(v7 + 25) )
    *(_QWORD *)(v7 + 8) = v8;
  if ( (*a1)[1] == v5 )
  {
    (*a1)[1] = v7;
  }
  else if ( *(_QWORD *)v8 == v5 )
  {
    *(_QWORD *)v8 = v7;
  }
  else
  {
    *(_QWORD *)(v8 + 16) = v7;
  }
  a3 = *a1;
  v9 = *a1;
  if ( **a1 == v5 )
  {
    if ( *(_BYTE *)(v7 + 25) )
      v10 = v8;
    else
      v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min(
              v7,
              a2,
              a3,
              v8);
    *a3 = v10;
    a3 = *a1;
    v9 = *a1;
  }
  if ( v9[2] == v5 )
  {
    if ( *(_BYTE *)(v7 + 25) )
    {
      v11 = v8;
    }
    else
    {
      v12 = *(_QWORD *)(v7 + 16);
      v11 = v7;
      if ( !*(_BYTE *)(v12 + 25) )
      {
        do
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
        v9 = a3;
      }
    }
    v9[2] = v11;
  }
LABEL_43:
  if ( *(_BYTE *)(v5 + 24) != 1 )
    goto LABEL_67;
  for ( j = v7 == (*a1)[1]; !j; j = v16 == (*a1)[1] )
  {
    v16 = v8;
    if ( *(_BYTE *)(v7 + 24) != 1 )
      break;
    v17 = *(_QWORD *)v8;
    if ( v7 == *(_QWORD *)v8 )
    {
      v17 = *(_QWORD *)(v8 + 16);
      if ( !*(_BYTE *)(v17 + 24) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v8 + 24) = 0;
        std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Lrotate(
          a1,
          v8);
        v17 = *(_QWORD *)(v8 + 16);
      }
      if ( !*(_BYTE *)(v17 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Rrotate(
              a1,
              v17,
              a3,
              v8);
            v17 = *(_QWORD *)(v8 + 16);
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v17 + 16) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Lrotate(
            a1,
            v8);
          break;
        }
LABEL_61:
        *(_BYTE *)(v17 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v8 + 24) = 0;
        std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Rrotate(
          a1,
          v8,
          a3,
          v8);
        v17 = *(_QWORD *)v8;
      }
      if ( !*(_BYTE *)(v17 + 25) )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
          {
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(v17 + 24) = 0;
            std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Lrotate(
              a1,
              v17);
            v17 = *(_QWORD *)v8;
          }
          *(_BYTE *)(v17 + 24) = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Rrotate(
            a1,
            v8,
            a3,
            v8);
          break;
        }
        goto LABEL_61;
      }
    }
    v7 = v16;
    v8 = *(_QWORD *)(v8 + 8);
  }
  *(_BYTE *)(v7 + 24) = 1;
LABEL_67:
  v19 = a1[1];
  if ( v19 )
    a1[1] = (__int64 *)((char *)v19 - 1);
  return v5;
}
