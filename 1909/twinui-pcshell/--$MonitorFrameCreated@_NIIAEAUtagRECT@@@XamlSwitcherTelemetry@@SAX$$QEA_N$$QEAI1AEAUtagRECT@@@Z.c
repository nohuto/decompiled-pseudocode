/*
 * XREFs of ??$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z @ 0x1802DF4EC
 * Callers:
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802E47D4 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x1802E3664 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x1802EB4B8 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z @ 0x1802EB80C (-MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated<bool,unsigned int,unsigned int,tagRECT &>(
        bool *a1,
        unsigned int *a2,
        unsigned int *a3,
        struct tagRECT *a4)
{
  struct tagRECT v8; // xmm0
  XamlSwitcherTelemetry *v9; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-38h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  struct tagRECT v14; // [rsp+50h] [rbp-18h] BYREF

  if ( XamlSwitcherTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    v8 = *a4;
    Context = 0LL;
    v14 = v8;
    if ( InitOnceBeginInitialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v12 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1805C23A8;
        qword_1805C23A8 = (__int64)&XamlSwitcherTelemetry::`vftable';
        atexit(lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
        v13 = 0;
        wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer(&v12);
      }
    }
    XamlSwitcherTelemetry::MonitorFrameCreated_(v9, *a1, *a2, *a3, &v14);
  }
}
