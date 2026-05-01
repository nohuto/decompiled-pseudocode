/*
 * XREFs of ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003DBCC
 * Callers:
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x18000F8BC (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x180010BD4 (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x18004308C (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004CF54 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004E288 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004FA70 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18006D6BC (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180130420 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180138674 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18017AFAC (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180188B0C (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x180194F14 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180198C80 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     _lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_::operator() @ 0x1801BB70C (_lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_--operator().c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801CFBC0 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1801D00D0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802047C4 (-_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x18026A30C (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 *     ?SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@E@Z @ 0x18026E5B4 (-SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 * Callees:
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003B174 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BII@AA @ 0x1800B2410 (--_9IPropertyValueStatics@Foundation@Windows@@$BII@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        char a4)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::IPropertyValue *v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+28h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v16[1] = -2LL;
  v16[0] = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    RaiseException(v7, 1u, 0, 0LL);
    JUMPOUT(0x1800DADAALL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v16);
  v10 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory,
      (int)v14);
  }
  else
  {
    v15 = 0LL;
    LOBYTE(v9) = a4;
    v11 =  Windows::Foundation::IPropertyValueStatics::`vcall'{136,{flat}}(v16[0], v9, &v15);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v11,
        (int)v14);
    }
    else
    {
      v14 = 0LL;
      v12 = (**v15)(v15, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v14);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v12,
          (int)v14);
      }
      else
      {
        v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v14);
        if ( v10 >= 0 )
          v10 = 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  return (unsigned int)v10;
}
