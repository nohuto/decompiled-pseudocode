/*
 * XREFs of ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x180204B78
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003B6B0 (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800B3F20 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801531E8 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  HSTRING_HEADER *v7; // rbx
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  int v10; // eax
  struct Windows::Foundation::IPropertyValue *v11; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, HWND, __int64 *); // rbx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PCWSTR, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  struct Windows::Foundation::IPropertyValue *v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v27; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26[1] = -2LL;
  v26[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
  *a4 = 0;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)off_180467B78);
  WindowsDeleteString(0LL);
  Reserved1 = (HSTRING)v7[1].Reserved.Reserved1;
  v22 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)v26,
              Reserved1,
              &v22);
  if ( PropVal < 0 )
    goto LABEL_2;
  v10 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}((__int64)v22);
  PropVal = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v10);
LABEL_2:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_8;
  }
  v11 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  PropVal = 0;
LABEL_8:
  if ( PropVal >= 0 )
  {
    v24 = 0LL;
    v12 = *((_QWORD *)this + 28);
    v13 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v12 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    PropVal = v13(v12, a3, &v24);
    if ( PropVal < 0 )
    {
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_20;
    }
    v23 = 0LL;
    v25 = 0LL;
    PropVal = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v24, &v25);
    if ( PropVal >= 0 )
    {
      v14 = v25;
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      v16 = v15(v14, &v23);
      PropVal = v16;
      if ( v16 >= 0 )
      {
        v18 = v23;
        v19 = *(__int64 (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v23 + 88LL);
        StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
        v16 = v19(v18, StringRawBuffer, a4);
        PropVal = v16;
        if ( v16 >= 0 )
        {
          PropVal = 0;
          goto LABEL_18;
        }
        v17 = 1416LL;
      }
      else
      {
        v17 = 1414LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v16);
    }
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57D,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)PropVal);
LABEL_20:
  WindowsDeleteString(0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
  return (unsigned int)PropVal;
}
