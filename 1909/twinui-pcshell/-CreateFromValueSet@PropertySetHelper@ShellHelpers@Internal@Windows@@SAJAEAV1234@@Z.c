/*
 * XREFs of ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18014E9F0
 * Callers:
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18014F970 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180157BF4 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802549C0 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ @ 0x180255E28 (-RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ.c)
 *     ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x180264690 (-GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet(
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v7 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v11,
         &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v7;
    v5 = *(_QWORD *)a1;
    v7 = 0LL;
    v9 = 0LL;
    *(_QWORD *)a1 = v4;
    v8 = v5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v3;
}
