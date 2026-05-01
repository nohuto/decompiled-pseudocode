/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801006C0
 * Callers:
 *     _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_ @ 0x18010A010 (_lambda_119a121fb38785c27806b92be2d82d86_--_lambda_invoker_cdecl_.c)
 *     _lambda_e1ff718f598a6a7bf79a481d174755c1_::_lambda_invoker_cdecl_ @ 0x18010A090 (_lambda_e1ff718f598a6a7bf79a481d174755c1_--_lambda_invoker_cdecl_.c)
 *     _lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_ @ 0x18016AA60 (_lambda_868f7fa048835520b2023eeceda2fa98_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VTabViewManagerMeasures@@@details@wil@@QEAAXXZ @ 0x1802429B4 (-cleanup@-$static_lazy@VTabViewManagerMeasures@@@details@wil@@QEAAXXZ.c)
 *     ?cleanup@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAAXXZ @ 0x1802429FC (-cleanup@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAAXXZ.c)
 *     _lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_ @ 0x1802766F0 (_lambda_975e4d64c8b5daac57efc1784b54d4a5_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAXXZ @ 0x18029C034 (-cleanup@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAXXZ.c)
 *     _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_ @ 0x18031B950 (_lambda_c916e9e9cdf81665e4682fd57ca742e1_--_lambda_invoker_cdecl_.c)
 *     _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x1804085C0 (_lambda_7c6f95392d1fa211f578d6d8eb47d107_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800831C4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewManagerInteropTraceLogging *__fastcall ViewManagerInteropTraceLogging::`scalar deleting destructor'(
        ViewManagerInteropTraceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
