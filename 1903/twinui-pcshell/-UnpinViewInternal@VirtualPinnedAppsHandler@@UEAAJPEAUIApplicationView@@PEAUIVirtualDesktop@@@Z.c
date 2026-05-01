/*
 * XREFs of ?UnpinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1803FB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::UnpinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, struct IVirtualDesktop *))(*(_QWORD *)this + 120LL))(
         this,
         a2,
         a3);
  v5 = v3;
  if ( v3 >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v4, 3u);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
