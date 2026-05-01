/*
 * XREFs of ??$_Try_emplace@VHString@Wrappers@WRL@Microsoft@@$$V@?$map@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1801FCFD0
 * Callers:
 *     _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x1801FE400 (_lambda_f27e537ed1ad8c8456023c324c3ce255_--operator().c)
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180200A54 (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAVHString@Wrappers@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAVHString@Wrappers@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FBEFC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAVHString@Wrappers@WRL@Microsoft@@@2@V-$.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801FC79C (--$_Insert_hint@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$com_ptr_t@UIShellTabImage@Tab.c)
 */

__int64 __fastcall std::map<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>::_Try_emplace<Microsoft::WRL::Wrappers::HString,>(
        __int64 *a1,
        __int64 a2,
        HSTRING *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  __int64 *v8; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v10; // rax
  const WCHAR *v11; // rbx
  const WCHAR *v12; // rax
  HSTRING *v13; // rax
  HSTRING *v15; // [rsp+60h] [rbp+30h] BYREF
  UINT32 length; // [rsp+78h] [rbp+48h] BYREF

  v3 = *a1;
  v7 = *a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v8[4], &length);
      v10 = WindowsGetStringRawBuffer(*a3, (UINT32 *)&v15);
      if ( CompareStringOrdinal(StringRawBuffer, length, v10, (int)v15, 0) == 1 )
      {
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v3 = (__int64)v8;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = *a1;
  }
  if ( v3 == v7
    || (v11 = WindowsGetStringRawBuffer(*a3, &length),
        v12 = WindowsGetStringRawBuffer(*(HSTRING *)(v3 + 32), (UINT32 *)&v15),
        CompareStringOrdinal(v11, length, v12, (int)v15, 0) == 1) )
  {
    v15 = a3;
    v13 = (HSTRING *)std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::Wrappers::HString &&>,std::tuple<>>(
                       a1,
                       a2,
                       &v15);
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>>,0>>::_Insert_hint<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>,void *> *>(
      a1,
      (__int64 *)&v15,
      (__int64 *)v3,
      v13 + 4,
      (__int64)v13);
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
