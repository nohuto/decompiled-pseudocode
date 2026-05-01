/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180204150
 * Callers:
 *     ?CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z @ 0x180204A60 (-CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@9@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@1@1@Z @ 0x1801D1D94 (--$_Insert_at@AEAU-$pair@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@V-$co.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::_Insert_nohint<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>> &,std::_Tree_node<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  char v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = a5;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = *a1;
  v11 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v10 = v9;
    if ( *a4 >= *(_DWORD *)(v9 + 32) )
    {
      v11 = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v11 = 1;
      v9 = *(_QWORD *)v9;
    }
  }
  try
  {
    v12 = v10;
    if ( v11 )
    {
      if ( v10 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::_Insert_at<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>> &,std::_Tree_node<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,void *> *>(
                           a1,
                           &v19,
                           1,
                           (_QWORD *)v10,
                           v18,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v10 + 25) )
      {
        v12 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v15 = *(_QWORD *)v10;
        if ( *(_BYTE *)(*(_QWORD *)v10 + 25LL) )
        {
          v16 = *(_QWORD *)(v10 + 8);
          if ( !*(_BYTE *)(v16 + 25) )
          {
            v17 = v10;
            do
            {
              if ( v17 != *(_QWORD *)v16 )
                break;
              v12 = v16;
              v16 = *(_QWORD *)(v16 + 8);
              v17 = v12;
            }
            while ( !*(_BYTE *)(v16 + 25) );
          }
          if ( !*(_BYTE *)(v12 + 25) )
            v12 = v16;
        }
        else
        {
          do
          {
            v12 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
          while ( !*(_BYTE *)(v15 + 25) );
        }
      }
    }
    if ( *(_DWORD *)(v12 + 32) >= *a4 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a5 + 5);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x30);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<Windows::Internal::ApplicationModel::WindowManagement::WindowId,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<Windows::Internal::ApplicationModel::WindowManagement::WindowId>,std::allocator<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,0>>::_Insert_at<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>> &,std::_Tree_node<std::pair<Windows::Internal::ApplicationModel::WindowManagement::WindowId const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,void *> *>(
                         a1,
                         &v19,
                         v11,
                         (_QWORD *)v10,
                         v18,
                         (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::_Destroy_if_node(
      v13,
      a5);
    throw;
  }
  return result;
}
