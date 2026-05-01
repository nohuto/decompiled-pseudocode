/*
 * XREFs of ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180016AEC
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180016C78 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180016D60 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800F12D4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsWideAtStartupEnabled(int a1)
{
  char v2; // bl
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  double v6; // rcx
  double v8; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF

  v9[1] = -2LL;
  v2 = 0;
  v9[0] = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.UI.ViewManagement.UISettings", 0x24u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    JUMPOUT(0x180016C6FLL);
  }
  v9[0] = 0LL;
  if ( (int)RoActivateInstance(string, &v8) >= 0 )
  {
    if ( *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v6 = v8;
      *(double *)v9 = v8;
      goto LABEL_8;
    }
    (***(void (__fastcall ****)(double, GUID *, _QWORD *))&v8)(
      COERCE_DOUBLE(*(_QWORD *)&v8),
      &GUID_bad82401_2721_44f9_bb91_2bb228be442f,
      v9);
    (*(void (__fastcall **)(double))(**(_QWORD **)&v8 + 16LL))(COERCE_DOUBLE(*(_QWORD *)&v8));
  }
  v6 = *(double *)v9;
LABEL_8:
  if ( v6 != 0.0
    && (v8 = DOUBLE_1_0,
        (*(int (__fastcall **)(double, double *))(**(_QWORD **)&v6 + 48LL))(COERCE_DOUBLE(*(_QWORD *)&v6), &v8) >= 0)
    && v8 > 1.25
    || (LODWORD(v8) = 0, (int)CortanaFeatureConfiguration::GetDWORD(29LL, &v8) >= 0)
    && a1 >= SLODWORD(v8)
    && (int)CortanaFeatureConfiguration::GetDWORD(28LL, &v8) >= 0
    && LODWORD(v8) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(v9);
  return v2;
}
