/*
 * XREFs of _lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_ @ 0x1C0124E50
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C013CEE4 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v2 = *((_QWORD *)a1 + 60);
    if ( *(_DWORD *)(v2 + 24) == 7 )
    {
      if ( v2 )
        v3 = *(_QWORD *)(v2 + 960);
      else
        v3 = 0LL;
      if ( !v3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      PTPEngineTraceProducer::TraceEnvironment(
        *(PTPEngineTraceProducer **)(v3 + 648),
        (const struct PTPEnvironment *)(*(_QWORD *)(v3 + 648) + 40LL));
    }
  }
  return 1;
}
