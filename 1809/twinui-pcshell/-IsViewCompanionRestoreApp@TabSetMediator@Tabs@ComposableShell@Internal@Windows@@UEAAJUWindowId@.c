/*
 * XREFs of ?IsViewCompanionRestoreApp@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJUWindowId@WindowManagement@ApplicationModel@45@PEAE@Z @ 0x18020C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::IsViewCompanionRestoreApp(
        __int64 a1,
        int a2,
        bool *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  LPCWCH lpString1; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0;
  v9 = 0LL;
  v5 = *(_QWORD *)(a1 + 224);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v9);
  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, v4, &v9) >= 0 )
  {
    v6 = v9;
    if ( v9 )
    {
      lpString1 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&lpString1,
        0LL);
      (*(void (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v6 + 136LL))(v6, &lpString1);
      *a3 = CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.CompanionRestoreApp_cw5n1h2txyewy!App", -1, 1) == 2;
      if ( lpString1 )
        CoTaskMemFree((LPVOID)lpString1);
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  return 0LL;
}
