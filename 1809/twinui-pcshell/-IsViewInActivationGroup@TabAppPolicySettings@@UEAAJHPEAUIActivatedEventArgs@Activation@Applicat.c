/*
 * XREFs of ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4190
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180106B20 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1801F28F0 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 *     ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x1801F3864 (--$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1801F3BD4 (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x1801F3E24 (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::IsViewInActivationGroup(
        TabAppPolicySettings *this,
        int a2,
        struct Windows::ApplicationModel::Activation::IActivatedEventArgs *a3,
        bool *a4)
{
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  int PropertySetFromActivatedEventArgs; // eax
  __int64 v14; // rdx
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int16 **v18; // rdx
  void *v19; // rbx
  struct IServiceProvider *v21; // [rsp+30h] [rbp-69h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v22; // [rsp+38h] [rbp-61h] BYREF
  int v23; // [rsp+40h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h] BYREF
  int v26; // [rsp+58h] [rbp-41h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v27[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v28; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-19h] BYREF
  HSTRING_HEADER v30; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v27[1] = (struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *)-2LL;
  v26 = a2;
  *a4 = 0;
  v25 = 0LL;
  v8 = *((_QWORD *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v9 = (*(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
         v8,
         &unk_180477CA0,
         &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
         &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_21;
  }
  v22 = 0LL;
  v11 = v25;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)v11 + 56LL))(
          v11,
          (unsigned int)~a2,
          &v22);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v12);
LABEL_5:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_21;
  }
  if ( v22 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(
                                          this,
                                          a3,
                                          (struct Windows::Foundation::Collections::IPropertySet **)&v21);
    v10 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs < 0 )
    {
      v14 = 90LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      goto LABEL_5;
    }
    if ( !TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
            *((struct IServiceProvider **)this + 8),
            v21,
            0LL,
            0LL) )
    {
      PropertySetFromActivatedEventArgs = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, _QWORD *))(*(_QWORD *)v22 + 48LL))(
                                            v22,
                                            v29);
      v10 = PropertySetFromActivatedEventArgs;
      if ( PropertySetFromActivatedEventArgs < 0 )
      {
        v14 = 95LL;
        goto LABEL_9;
      }
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)off_1804002C0);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
                  (HSTRING)v15[1].Reserved.Reserved1,
                  v16,
                  &v28) >= 0 )
      {
        v17 = v28 - v29[0];
        if ( (_QWORD)v28 == v29[0] )
          v17 = *((_QWORD *)&v28 + 1) - v29[1];
        *a4 = v17 == 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  TabAppPolicySettings::GetCallerAppId((unsigned int **)&pv, v18);
  v23 = -1;
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
    a3,
    &v23);
  v27[0] = v22;
  LODWORD(v21) = v23;
  v19 = pv;
  TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup<unsigned short *,int &,int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,unsigned char &>(
    (const unsigned __int16 **)&pv,
    &v26,
    (int *)&v21,
    v27,
    a4);
  if ( v19 )
    CoTaskMemFree(v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v10 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v10;
}
