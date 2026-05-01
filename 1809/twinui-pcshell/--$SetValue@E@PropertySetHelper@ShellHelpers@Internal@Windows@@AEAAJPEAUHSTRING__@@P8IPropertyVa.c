/*
 * XREFs of ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320
 * Callers:
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18000D400 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18000FBF8 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18000FE48 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180025FDC (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x18004E880 (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x18004EE4C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18006327C (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076970 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18010BBD4 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18014E53C (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18015C7EC (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801684E4 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180189460 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180189970 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6E54 (-_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x1802131BC (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 *     ?SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@E@Z @ 0x180218218 (-SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 * Callees:
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x180027474 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BII@AA @ 0x18009C570 (--_9IPropertyValueStatics@Foundation@Windows@@$BII@AA.c)
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
  struct Windows::Foundation::IPropertyValue *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  __int64 v15; // rcx
  struct Windows::Foundation::IPropertyValue *v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+28h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v19[1] = -2LL;
  v19[0] = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    RaiseException(v7, 1u, 0, 0LL);
    JUMPOUT(0x1800BABECLL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v19);
  v10 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory,
      (int)v17);
  }
  else
  {
    v18 = 0LL;
    LOBYTE(v9) = a4;
    v11 =  Windows::Foundation::IPropertyValueStatics::`vcall'{136,{flat}}(v19[0], v9, &v18);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v11,
        (int)v17);
    }
    else
    {
      v17 = 0LL;
      v12 = (**v18)(v18, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v17);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v12,
          (int)v17);
      }
      else
      {
        v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v17);
        if ( v10 >= 0 )
          v10 = 0;
      }
      v13 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v14)[2])(v14);
    }
  }
  v15 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v10;
}
