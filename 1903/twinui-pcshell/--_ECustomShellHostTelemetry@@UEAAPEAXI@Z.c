/*
 * XREFs of ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x18008F8C0
 * Callers:
 *     _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_ @ 0x18013F740 (_lambda_75f51455afdd6deeb34ec28b1e80a524_--_lambda_invoker_cdecl_.c)
 *     _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_ @ 0x1801E8B60 (_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ @ 0x1801F749C (-cleanup@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800831C4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
