/*
 * XREFs of _lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_ @ 0x1C0109660
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0036E58 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v3 = *(_QWORD *)(a1 + 8);
  }
  if ( v3 == *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1, a2);
}
