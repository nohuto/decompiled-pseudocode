/*
 * XREFs of ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x1801F3864
 * Callers:
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1801F4190 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x180071E24 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x1801DE728 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801F45A4 (-TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShell.c)
 */

void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup<unsigned short *,int &,int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,unsigned char &>(
        const unsigned __int16 **a1,
        int *a2,
        int *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **a4,
        _BYTE *a5)
{
  bool v9; // bp
  TabViewManagerTraceLogging *v10; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-38h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]

  if ( TabViewManagerTraceLogging::IsEnabled((char)a1) )
  {
    v9 = *a5 != 0;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v13 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_18050FAC0;
        qword_18050FAC0 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v14 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v13);
      }
    }
    TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup_(v10, *a1, *a2, *a3, *a4, v9);
  }
}
