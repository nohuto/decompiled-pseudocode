/*
 * XREFs of ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180099130
 * Callers:
 *     <none>
 * Callees:
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1800964F4 (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180097134 (-AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetAppTypeFromView@KioskPositioner@@AEAA?AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180097D28 (-GetAppTypeFromView@KioskPositioner@@AEAA-AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplic.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x180098914 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800989FC (-IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180098F90 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x18009997C (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18009A008 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        const char *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  BOOL AppTypeFromView; // esi
  const WCHAR *v9; // rax
  KioskPositioner *v10; // rcx
  Win32ViewOperationPolicy *v11; // rcx
  __int64 result; // rax
  LPCWSTR v13[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v14[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13[1] = (LPCWSTR)-2LL;
  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v6 = a1 - 136;
        v7 = *(_QWORD *)(a1 + 480);
        v14[0] = off_1803CC7C8;
        v14[1] = v6;
        v14[7] = v14;
        (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, _QWORD *))(*(_QWORD *)v7 + 24LL))(
          v7,
          a2,
          *(_QWORD *)(a1 + 72),
          v14);
        ApplicationViewCollection::RemoveView((ApplicationViewCollection *)(a1 + 488), a2);
      }
    }
    else
    {
      AppTypeFromView = KioskPositioner::GetAppTypeFromView(a1, (__int64)a2);
      if ( !*(_BYTE *)(a1 + 474)
        && !(unsigned __int8)KioskPositioner::IsPrimaryAppView((KioskPositioner *)(a1 - 136), a2) )
      {
        *(_BYTE *)(a1 + 474) = 1;
        v9 = L"Win32";
        if ( !AppTypeFromView )
          v9 = L"UWP";
        v13[0] = v9;
        CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(v13);
      }
      if ( AppTypeFromView && KioskPositioner::ShouldHandleView((KioskPositioner *)(a1 - 136), a2) )
      {
        KioskPositioner::AddViewToKioskPositioner(v10, a2);
        if ( Win32ViewOperationPolicy::IsOperableView(
               v11,
               (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2) )
        {
          KioskPositioner::MaximizeWin32View((KioskPositioner *)(a1 - 136), a2);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x355,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  }
  return result;
}
