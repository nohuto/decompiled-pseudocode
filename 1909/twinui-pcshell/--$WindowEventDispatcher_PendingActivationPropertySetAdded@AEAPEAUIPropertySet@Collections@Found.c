/*
 * XREFs of ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007620C
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001AE50 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007641C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x180076450 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A1124 (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
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
    Context = &qword_1805C2340;
    qword_1805C2340 = (__int64)&IamTraceLogging::`vftable';
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
        Context = &qword_1805C2340;
        qword_1805C2340 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer(&v4);
      }
    }
    ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(v3, *a1);
  }
}
