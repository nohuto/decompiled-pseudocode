/*
 * XREFs of ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18007FA58
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001E254 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180216AEC (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x18009C560 (--_9ISwitchItemController@@$BHA@AA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
        Windows::Internal::Shell::Desktop::ViewManagerInterop *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        unsigned __int64 *a3)
{
  HSTRING v5; // rbx
  int PropVal; // ebx
  int v7; // eax
  struct Windows::Foundation::IPropertyValue *v9[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"AAMShim.ActivationId", 0x15u, 0x14u);
  v5 = v11;
  *(_QWORD *)a2 = 0LL;
  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, v5, v9);
  if ( PropVal >= 0 )
  {
    v7 =  ISwitchItemController::`vcall'{112,{flat}}(v9[0], a2);
    PropVal = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreshell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v7);
    else
      PropVal = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
  if ( PropVal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
    (const char *)(unsigned int)PropVal);
  return (unsigned int)PropVal;
}
