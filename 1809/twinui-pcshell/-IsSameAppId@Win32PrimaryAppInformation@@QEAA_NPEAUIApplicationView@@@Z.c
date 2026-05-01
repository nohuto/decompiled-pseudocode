/*
 * XREFs of ?IsSameAppId@Win32PrimaryAppInformation@@QEAA_NPEAUIApplicationView@@@Z @ 0x180098AB0
 * Callers:
 *     ?IsSameAppId@Win32PrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x180098BB0 (-IsSameAppId@Win32PrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x180095AFC (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$GetFullPathNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBGPEAPEBG@Z @ 0x180095BAC (--$GetFullPathNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTask.c)
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180097D68 (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801D3838 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall Win32PrimaryAppInformation::IsSameAppId(Win32PrimaryAppInformation *this, struct IApplicationView *a2)
{
  bool v3; // bl
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 *v7; // [rsp+20h] [rbp-20h] BYREF
  LPVOID pv[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IApplicationView *v9; // [rsp+58h] [rbp+18h] BYREF
  LPVOID v10; // [rsp+60h] [rbp+20h] BYREF
  LPVOID v11; // [rsp+68h] [rbp+28h] BYREF

  v9 = a2;
  pv[1] = (LPVOID)-2LL;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v7, &v9);
  if ( v7 )
  {
    Win32ApplicationViewHelpers::GetApplicationViewImageName((__int64)&v10, v7);
    v4 = v10;
    if ( v10 )
    {
      v5 = *wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>,256>(
              pv,
              (__int64)v10);
      wil::GetFullPathNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>,256>(
        &v11,
        v5);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      if ( *((_QWORD *)this + 3) >= 8uLL )
        this = *(Win32PrimaryAppInformation **)this;
      v3 = (unsigned int)_o__wcsicmp(v11, this) == 0;
      if ( v11 )
        CoTaskMemFree(v11);
      v4 = v10;
    }
    else
    {
      v3 = 0;
    }
    if ( v4 )
      CoTaskMemFree(v4);
  }
  else
  {
    v3 = 0;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v7);
  return v3;
}
