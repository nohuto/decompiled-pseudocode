/*
 * XREFs of ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18012C7C0
 * Callers:
 *     ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x1801308B0 (-GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     _anonymous_namespace_::IsTabGroupAppManaged @ 0x180231E50 (_anonymous_namespace_--IsTabGroupAppManaged.c)
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1802438B4 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 *     _lambda_d751ed88a330b424065b2529e18a6817_::operator() @ 0x180243A2C (_lambda_d751ed88a330b424065b2529e18a6817_--operator().c)
 *     ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x1802450A0 (-GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@.c)
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180245470 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1802455F0 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180281CE4 (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BKA@AA @ 0x1800B23E0 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BKA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        _OWORD *a4)
{
  int PropVal; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+60h] [rbp+18h] BYREF

  *a4 = 0uLL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, a2, &v10);
  if ( PropVal >= 0 )
  {
    v7 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{160,{flat}}((__int64)v10);
    PropVal = v7;
    if ( v7 >= 0 )
      PropVal = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return (unsigned int)PropVal;
}
