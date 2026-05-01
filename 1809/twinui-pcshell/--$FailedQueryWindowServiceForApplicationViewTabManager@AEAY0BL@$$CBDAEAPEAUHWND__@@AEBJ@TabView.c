/*
 * XREFs of ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAY0BL@$$CBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAY0BL@$$CBDAEAPEAUHWND__@@AEBJ@Z @ 0x1801CE6A8
 * Callers:
 *     _lambda_75bf3f442c37a1ba04403cb499a5bf05_::operator() @ 0x1801D6B00 (_lambda_75bf3f442c37a1ba04403cb499a5bf05_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x180071E24 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?FailedQueryWindowServiceForApplicationViewTabManager_@TabViewManagerTraceLogging@@QEAAXPEBDPEAUHWND__@@J@Z @ 0x1801DB6E0 (-FailedQueryWindowServiceForApplicationViewTabManager_@TabViewManagerTraceLogging@@QEAAXPEBDPEAU.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x1801DE728 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 */

void __fastcall TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const (&)[27],HWND__ * &,long const &>(
        __int64 a1,
        HWND *a2,
        int *a3)
{
  TabViewManagerTraceLogging *v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  fPending = a1;
  if ( TabViewManagerTraceLogging::IsEnabled(a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context) )
    {
      if ( (_DWORD)fPending )
      {
        v6 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_18050FAC0;
        qword_18050FAC0 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v7 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v6);
      }
    }
    TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager_(
      v5,
      "TabTransferCompletedWorker",
      *a2,
      *a3);
  }
}
