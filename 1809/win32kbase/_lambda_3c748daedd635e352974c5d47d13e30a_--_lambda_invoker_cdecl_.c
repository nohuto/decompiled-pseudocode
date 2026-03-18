/*
 * XREFs of _lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_ @ 0x1C0130CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C006F38C (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( v4 == *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1);
}
