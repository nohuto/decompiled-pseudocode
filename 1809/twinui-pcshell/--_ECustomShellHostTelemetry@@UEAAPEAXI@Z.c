/*
 * XREFs of ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180096F90
 * Callers:
 *     ?cleanup@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAXXZ @ 0x180122484 (-cleanup@-$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEA.c)
 *     _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_ @ 0x1801A1A80 (_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ @ 0x1801AC598 (-cleanup@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800EBC08 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CustomShellHostTelemetry *__fastcall CustomShellHostTelemetry::`vector deleting destructor'(
        CustomShellHostTelemetry *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
