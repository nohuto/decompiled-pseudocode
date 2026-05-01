/*
 * XREFs of ?OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1800992B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppTypeFromView@KioskPositioner@@AEAA?AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180097D28 (-GetAppTypeFromView@KioskPositioner@@AEAA-AW4AppType@ShellLauncher@Internal@Windows@@PEAUIApplic.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x1800989B8 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180098C7C (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KioskPositioner::OnShellTrackedWindowPosChanged(
        KioskPositioner *this,
        HWND a2,
        struct IApplicationView *a3,
        __int64 a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  bool IsViewManaged; // al
  __int64 v10; // rcx
  const char *v11; // r9
  KioskPositioner *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (a5 & 0xFFFFFFFD) == 0 && a3 )
  {
    try
    {
      IsViewManaged = KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), a3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x3C6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        v11);
      return;
    }
    if ( IsViewManaged
      && KioskPositioner::GetAppTypeFromView(v10, (__int64)a3)
      && !KioskPositioner::IsOwnedAppWindow(v12, a2) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), a2);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          964LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v13);
    }
  }
}
