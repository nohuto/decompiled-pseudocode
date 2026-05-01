/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180273FB0
 * Callers:
 *     ?OnViewRemoved@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180272360 (-OnViewRemoved@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x1800A62FC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x180273E48 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception__ea_180273E48.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>,0>>::erase(
        _QWORD **a1,
        unsigned __int64 *a2)
{
  _QWORD *v2; // r10
  _QWORD *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // r8
  unsigned __int64 v7; // r11
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = (__int64 *)(*a1)[1];
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( v6[4] >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < v6[4] )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a2 >= v5[4] )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  v8 = v2;
  v9 = 0LL;
  while ( v8 != v4 )
  {
    v10 = v8[2];
    ++v9;
    if ( *(_BYTE *)(v10 + 25) )
    {
      for ( i = v8[1]; !*(_BYTE *)(i + 25) && v8 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v8 = (_QWORD *)i;
      v8 = (_QWORD *)i;
    }
    else
    {
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)v10);
    }
  }
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>,0>>::erase(
    a1,
    &v13,
    v2,
    v4);
  return v9;
}
