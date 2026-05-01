/*
 * XREFs of ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180092D20
 * Callers:
 *     _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_ @ 0x18015ED60 (_lambda_75f51455afdd6deeb34ec28b1e80a524_--_lambda_invoker_cdecl_.c)
 *     _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_ @ 0x180207DB0 (_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ @ 0x18021659C (-cleanup@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180085E04 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
