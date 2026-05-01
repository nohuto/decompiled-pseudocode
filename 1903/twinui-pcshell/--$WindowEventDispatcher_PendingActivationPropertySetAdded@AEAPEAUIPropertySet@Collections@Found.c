/*
 * XREFs of ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000E9C0
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18000BA20 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18000EA68 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180281CE4 (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
 */

void __fastcall ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded<Windows::Foundation::Collections::IPropertySet * &>(
        struct Windows::Foundation::Collections::IPropertySet **a1)
{
  unsigned __int64 v2; // r8
  ViewManagerInteropTabTraceLogging *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-10h] BYREF
  int v5; // [rsp+28h] [rbp-8h]
  WINBOOL fPending; // [rsp+58h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+30h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v4 = &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180599EE0;
    qword_180599EE0 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer(&v4);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0, v2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v4 = &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_180599EE0;
        qword_180599EE0 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer(&v4);
      }
    }
    ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(v3, *a1);
  }
}
