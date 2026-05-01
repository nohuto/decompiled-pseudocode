/*
 * XREFs of ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1801F28F0 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 *     ??$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAG$$QEAHAEAE@Z @ 0x1801F37A4 (--$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1801F3BD4 (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x1801F3E24 (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::IsActivatingIntoExistingGroup(
        struct IServiceProvider **this,
        struct Windows::ApplicationModel::Activation::IActivatedEventArgs *a2,
        bool *a3)
{
  unsigned int v6; // ebx
  int PropertySetFromActivatedEventArgs; // eax
  unsigned __int16 **v8; // rdx
  void *v9; // rbx
  LPVOID pv[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v13; // [rsp+68h] [rbp+38h] BYREF
  int v14; // [rsp+70h] [rbp+40h] BYREF
  struct IServiceProvider *v15; // [rsp+78h] [rbp+48h] BYREF

  pv[1] = (LPVOID)-2LL;
  *a3 = 0;
  if ( a2 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(
                                          (TabAppPolicySettings *)this,
                                          a2,
                                          (struct Windows::Foundation::Collections::IPropertySet **)&v15);
    v6 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs >= 0 )
    {
      *a3 = !TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(this[8], v15, 0LL, 0LL);
      pv[0] = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        pv,
        0LL);
      TabAppPolicySettings::GetCallerAppId((unsigned int **)pv, v8);
      v13 = -1;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
        a2,
        &v13);
      v14 = v13;
      v9 = pv[0];
      TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup<unsigned short *,int,unsigned char &>(
        (const unsigned __int16 **)pv,
        &v14,
        a3);
      if ( v9 )
        CoTaskMemFree(v9);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)0x80004003LL);
  }
  return v6;
}
