/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1800EC4B0
 * Callers:
 *     _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_ @ 0x1800E8260 (_lambda_119a121fb38785c27806b92be2d82d86_--_lambda_invoker_cdecl_.c)
 *     _lambda_e1ff718f598a6a7bf79a481d174755c1_::_lambda_invoker_cdecl_ @ 0x1800E82E0 (_lambda_e1ff718f598a6a7bf79a481d174755c1_--_lambda_invoker_cdecl_.c)
 *     _lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_ @ 0x18013F300 (_lambda_868f7fa048835520b2023eeceda2fa98_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VTabViewManagerMeasures@@@details@wil@@QEAAXXZ @ 0x1801F1084 (-cleanup@-$static_lazy@VTabViewManagerMeasures@@@details@wil@@QEAAXXZ.c)
 *     ?cleanup@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAAXXZ @ 0x1801F10CC (-cleanup@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAAXXZ.c)
 *     _lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_ @ 0x180221300 (_lambda_975e4d64c8b5daac57efc1784b54d4a5_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAXXZ @ 0x180245E88 (-cleanup@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAXXZ.c)
 *     _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x1803A2BB0 (_lambda_7c6f95392d1fa211f578d6d8eb47d107_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800EBC08 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
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
