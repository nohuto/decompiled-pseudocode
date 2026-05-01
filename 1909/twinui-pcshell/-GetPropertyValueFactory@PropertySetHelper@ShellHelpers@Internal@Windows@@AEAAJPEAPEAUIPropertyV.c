/*
 * XREFs of ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x1800628B8
 * Callers:
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180062184 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180062270 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180062474 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZM@Z @ 0x18014C14C (--$SetValue@M@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x1801B55AC (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x1801B5704 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        struct Windows::Foundation::IPropertyValueStatics **a2)
{
  HRESULT v3; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    JUMPOUT(0x18010E218LL);
  }
  return RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, a2);
}
