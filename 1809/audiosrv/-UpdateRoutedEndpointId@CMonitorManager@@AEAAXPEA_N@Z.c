/*
 * XREFs of ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x1800FFD00
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_77fef75ae00b7ece7efc8affba262c5b__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800FFEC0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_77fef75ae00b7ece7efc8affba262c5b__0__ea_1800FFEC0.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x1800FF828 (-SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::UpdateRoutedEndpointId(void **this, bool *a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  _WORD *v7; // rax
  LPVOID *v8; // rsi
  void *v9; // rcx
  DWORD pcbData; // [rsp+88h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+40h] BYREF
  PVOID pvData; // [rsp+98h] [rbp+48h] BYREF

  pcbData = 0;
  v4 = 0LL;
  pvData = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
          L"RoutedAudioDevice",
          2u,
          0LL,
          0LL,
          &pcbData) )
  {
    v5 = pcbData + 2;
    pcbData = v5;
    v6 = (unsigned int)v5;
    v7 = CoTaskMemAlloc(2 * v5 + 2);
    if ( v7 )
    {
      *v7 = 0;
      v7[v6] = 0;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pvData,
      v7);
    v4 = (char *)pvData;
    if ( pvData )
    {
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
              L"RoutedAudioDevice",
              2u,
              0LL,
              pvData,
              &pcbData) )
      {
        v8 = this + 43;
        if ( (unsigned int)_o__wcsicmp(v4, this[43]) )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
            &pv,
            v4,
            0xFFFFFFFFFFFFFFFFuLL);
          if ( v8 == &pv )
          {
            v9 = pv;
          }
          else
          {
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
              this + 43,
              pv);
            v9 = 0LL;
          }
          if ( v9 )
            CoTaskMemFree(v9);
          CMonitorManager::SetMonitorMirrorEligibleProperty((CMonitorManager *)this, (const unsigned __int16 *)*v8);
          if ( a2 )
            *a2 = 1;
        }
      }
    }
  }
  if ( v4 )
    CoTaskMemFree(v4);
}
