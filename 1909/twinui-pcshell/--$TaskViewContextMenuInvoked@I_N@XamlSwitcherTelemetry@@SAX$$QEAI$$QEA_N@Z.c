/*
 * XREFs of ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x1802FEBD4
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1803009B8 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x1802E3664 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x1802EB4B8 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z @ 0x180303798 (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int,bool>(unsigned int *a1, bool *a2)
{
  XamlSwitcherTelemetry *v4; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  if ( XamlSwitcherTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v5 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1805C23A8;
        qword_1805C23A8 = (__int64)&XamlSwitcherTelemetry::`vftable';
        atexit(lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
        v6 = 0;
        wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer((__int64)&v5);
      }
    }
    XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(v4, *a1, *a2);
  }
}
