/*
 * XREFs of ?cleanup@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ @ 0x18021659C
 * Callers:
 *     _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_ @ 0x18020C610 (_lambda_fac79a549a8b210f59d21e9b666a8346_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180092D20 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<TaskFlowDataEngineTelemetry>::cleanup(__int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)CustomShellHostTelemetry::`vector deleting destructor'(
                             (CustomShellHostTelemetry *)Context,
                             0);
  }
  return result;
}
