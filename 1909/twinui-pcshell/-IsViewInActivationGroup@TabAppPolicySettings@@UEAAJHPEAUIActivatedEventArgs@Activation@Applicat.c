/*
 * XREFs of ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180264BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18014BD00 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x18026424C (--$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1802645CC (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180264814 (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::IsViewInActivationGroup(
        TabAppPolicySettings *this,
        int a2,
        __int64 (__fastcall ***a3)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *),
        bool *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, void *, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **); // rdi
  int v14; // eax
  int PropertySetFromActivatedEventArgs; // eax
  __int64 v16; // rdx
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int16 **v20; // rdx
  void *v21; // rbx
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v23; // [rsp+30h] [rbp-69h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+38h] [rbp-61h] BYREF
  int v25; // [rsp+40h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-51h] BYREF
  __int64 v27; // [rsp+50h] [rbp-49h] BYREF
  int v28; // [rsp+58h] [rbp-41h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v29[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v30; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v31[2]; // [rsp+80h] [rbp-19h] BYREF
  HSTRING_HEADER v32; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v29[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *)-2LL;
  v28 = a2;
  *a4 = 0;
  v27 = 0LL;
  v8 = *((_QWORD *)this + 8);
  v9 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v10 = v9(v8, &unk_18051A780, &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8, &v27);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_20;
  }
  v23 = 0LL;
  v12 = v27;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)v27 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v14 = v13(v12, (unsigned int)~a2, &v23);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v14);
LABEL_5:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    goto LABEL_20;
  }
  if ( v23 )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(this, a3, &v24);
    v11 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs < 0 )
    {
      v16 = 95LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      goto LABEL_5;
    }
    PropertySetFromActivatedEventArgs = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, _QWORD *))(*(_QWORD *)v23 + 48LL))(
                                          v23,
                                          v31);
    v11 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs < 0 )
    {
      v16 = 98LL;
      goto LABEL_9;
    }
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)off_180487E78);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
                (HSTRING)v17[1].Reserved.Reserved1,
                v18,
                &v30) >= 0 )
    {
      v19 = v30 - v31[0];
      if ( (_QWORD)v30 == v31[0] )
        v19 = *((_QWORD *)&v30 + 1) - v31[1];
      *a4 = v19 == 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  TabAppPolicySettings::GetCallerAppId((unsigned __int16 **)&pv, v20);
  v25 = -1;
  ((void (__fastcall *)(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *), int *))(*a3)[6])(
    a3,
    &v25);
  v29[0] = v23;
  LODWORD(v24) = v25;
  v21 = pv;
  TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup<unsigned short *,int &,int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,unsigned char &>(
    (const unsigned __int16 **)&pv,
    &v28,
    (int *)&v24,
    v29,
    a4);
  if ( v21 )
    CoTaskMemFree(v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v11 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  return v11;
}
