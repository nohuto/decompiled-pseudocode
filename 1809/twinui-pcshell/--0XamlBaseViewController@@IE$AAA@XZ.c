/*
 * XREFs of ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1802932F4
 * Callers:
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180286A34 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@@Z @ 0x18028DFB4 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImme.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x180290E80 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F8F4 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180181EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x180291E70 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall XamlBaseViewController::XamlBaseViewController(_QWORD *a1)
{
  __int64 *v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  Platform::Object::Object(a1 + 3);
  *a1 = &XamlBaseViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[1] = &XamlBaseViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[2] = &XamlBaseViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[3] = &XamlBaseViewController::`vftable'{for `Platform::Object'};
  a1[4] = &XamlBaseViewController::`vftable'{for `__abi_IUnknown'};
  a1[5] = &XamlBaseViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 14));
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  v2 = wil::MakeAndInitializeOrThrow<CreationThreadDispatcher,>(&v6);
  v3 = (volatile int *)*v2;
  *v2 = 0LL;
  v4 = a1[10];
  a1[10] = v3;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
      v4,
      v3);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v6);
  return a1;
}
