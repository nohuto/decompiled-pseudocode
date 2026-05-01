/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800F2908
 * Callers:
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18001C05C (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18001E130 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800408D0 (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180070208 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18016D330 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801BBFE0 (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x1802DD294 (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x1802DD714 (-Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *this, const wchar_t *a2, UINT32 a3)
{
  WindowsDeleteString(*this);
  *this = 0LL;
  return WindowsCreateString(a2, a3, this);
}
