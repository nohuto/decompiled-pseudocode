/*
 * XREFs of ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x180264690
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180062184 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18014BD00 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18014E9F0 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ??$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1802640A0 (--$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@V.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180264814 (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::GetInsertionContextForActivation(
        TabAppPolicySettings *this,
        struct Windows::ApplicationModel::Activation::IActivatedEventArgs *a2,
        struct Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext **a3)
{
  int PropertySetFromActivatedEventArgs; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  __int128 v12; // xmm6
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  void *v16; // [rsp+28h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17[3]; // [rsp+30h] [rbp-41h] BYREF
  HSTRING_HEADER v18; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER v20; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v17[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  v17[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(this, a2, v17);
  v7 = PropertySetFromActivatedEventArgs;
  if ( PropertySetFromActivatedEventArgs >= 0 )
  {
    v16 = 0LL;
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v16);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)off_180487E80);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)v17,
                  (HSTRING)v10[1].Reserved.Reserved1,
                  v11,
                  &v19) < 0
        || (v12 = v19,
            v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_180487E80),
            *(_OWORD *)&v18.Reserved.Reserved1 = v12,
            v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
                   (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
                   (HSTRING)v13[1].Reserved.Reserved1,
                   v14,
                   (__int128 *)&v18),
            v7 = v8,
            v8 >= 0) )
      {
        v18.Reserved.Reserved1 = v16;
        v8 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTabInsertionContext,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Windows::Foundation::Collections::IPropertySet *>(
               (__int64 **)a3,
               (__int64 *)&v18);
        v7 = v8;
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
          v7 = 0;
          goto LABEL_12;
        }
        v9 = 129LL;
      }
      else
      {
        v9 = 125LL;
      }
    }
    else
    {
      v9 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  return v7;
}
