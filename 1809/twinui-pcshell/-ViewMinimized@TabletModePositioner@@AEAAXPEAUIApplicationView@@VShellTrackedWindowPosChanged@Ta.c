/*
 * XREFs of ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18034FAE0
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18034A860 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Minimized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x180348C44 (-Minimized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18034FD68 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

void __fastcall TabletModePositioner::ViewMinimized(
        TabletModePositioner *a1,
        struct IApplicationView *a2,
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  TabletModeTraceLogging::ShellTrackedWindowPosChanged::Minimized(a3);
  if ( (*(unsigned int (__fastcall **)(_QWORD *, struct IApplicationView *))(**((_QWORD **)a1 + 31) + 184LL))(
         *((_QWORD **)a1 + 31),
         a2) )
  {
    v6 = TabletModePositioner::ViewRemoved(a1, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1977LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
  }
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(a3);
}
