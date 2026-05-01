/*
 * XREFs of _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_ @ 0x1801E8B60
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x18008F8C0 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 */

void __fastcall lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      CustomShellHostTelemetry::`vector deleting destructor'((CustomShellHostTelemetry *)Context, 0);
  }
}
