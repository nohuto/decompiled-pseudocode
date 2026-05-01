/*
 * XREFs of ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18039DBE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x18039AE94 (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18039BAB8 (-AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetAppTypeFromView@KioskPositioner@@AEAA?AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18039C7A8 (-GetAppTypeFromView@KioskPositioner@@AEAA-AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplic.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x18039D3A4 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18039DA38 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x18039E364 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18039EA38 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        const char *a4)
{
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  BOOL AppTypeFromView; // esi
  const WCHAR *v10; // rax
  KioskPositioner *v11; // rcx
  Win32ViewOperationPolicy *v12; // rcx
  __int64 result; // rax
  LPCWSTR v14[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v14[1] = (LPCWSTR)-2LL;
  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v6 = a1 - 136;
        v7 = *(__int64 **)(a1 + 504);
        v8 = *v7;
        v15[0] = off_180460048;
        v15[1] = v6;
        v15[7] = v15;
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, _QWORD *))(v8 + 24))(
          v7,
          a2,
          *(_QWORD *)(a1 + 72),
          v15);
        ApplicationViewCollection::RemoveView((ApplicationViewCollection *)(a1 + 512), a2);
      }
    }
    else
    {
      AppTypeFromView = KioskPositioner::GetAppTypeFromView(a1, (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
      if ( !*(_BYTE *)(a1 + 498)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(a1 + 504) + 8LL))(
              *(_QWORD *)(a1 + 504),
              a2) )
      {
        *(_BYTE *)(a1 + 498) = 1;
        v10 = L"Win32";
        if ( !AppTypeFromView )
          v10 = L"UWP";
        v14[0] = v10;
        CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(v14);
      }
      if ( AppTypeFromView && KioskPositioner::ShouldHandleView((KioskPositioner *)(a1 - 136), a2) )
      {
        KioskPositioner::AddViewToKioskPositioner(v11, a2);
        if ( Win32ViewOperationPolicy::IsOperableView(
               v12,
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
                           (void *)0x340,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  }
  return result;
}
