/*
 * XREFs of ?IsViewCompanionRestoreApp@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJUWindowId@WindowManagement@ApplicationModel@45@PEAE@Z @ 0x180264850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::IsViewCompanionRestoreApp(
        __int64 a1,
        int a2,
        bool *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  int (__fastcall *v6)(__int64, __int64, __int64 *); // rdi
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, LPCWCH *); // rdi
  LPCWCH lpString1; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0;
  v11 = 0LL;
  v5 = *(_QWORD *)(a1 + 232);
  v6 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v11);
  if ( v6(v5, v4, &v11) >= 0 )
  {
    v7 = v11;
    if ( v11 )
    {
      lpString1 = 0LL;
      v8 = *(void (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v11 + 136LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&lpString1,
        0LL);
      v8(v7, &lpString1);
      *a3 = CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.CompanionRestoreApp_cw5n1h2txyewy!App", -1, 1) == 2;
      if ( lpString1 )
        CoTaskMemFree((LPVOID)lpString1);
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  return 0LL;
}
