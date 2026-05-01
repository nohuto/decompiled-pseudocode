/*
 * XREFs of ?GetAppTypeFromView@KioskPositioner@@AEAA?AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180097D28
 * Callers:
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098750 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180099130 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1800992B0 (-OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRE.c)
 *     ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800993A0 (-OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801D3838 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 */

_BOOL8 __fastcall KioskPositioner::GetAppTypeFromView(__int64 a1, __int64 a2)
{
  BOOL v2; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v4 = a1;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v4, &v5);
  v2 = v4 != 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v4);
  return v2;
}
