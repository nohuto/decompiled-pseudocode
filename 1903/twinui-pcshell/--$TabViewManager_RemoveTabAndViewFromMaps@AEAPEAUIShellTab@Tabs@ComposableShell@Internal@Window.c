/*
 * XREFs of ??$TabViewManager_RemoveTabAndViewFromMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@TabViewManagerTraceLogging@@SAXAEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@Z @ 0x180227218
 * Callers:
 *     ?RemoveTabAndViewFromMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180236C18 (-RemoveTabAndViewFromMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18000EA68 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180231DC4 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18023ED34 (-TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Co.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_RemoveTabAndViewFromMaps<Windows::Internal::ComposableShell::Tabs::IShellTab * &,IApplicationView * &>(
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a1,
        struct IApplicationView **a2)
{
  TabViewManagerTraceLogging *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_180599E68;
        qword_180599E68 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v5);
      }
    }
    TabViewManagerTraceLogging::TabViewManager_RemoveTabAndViewFromMaps_(v4, *a1, *a2);
  }
}
