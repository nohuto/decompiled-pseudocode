/*
 * XREFs of _lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_ @ 0x1C014A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0160894 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_(
        struct DEVICEINFO *const a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)a1 + 60);
    if ( *(_DWORD *)(v3 + 24) == 7 )
    {
      if ( v3 )
        v4 = *(_QWORD *)(v3 + 992);
      else
        v4 = 0LL;
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      PTPEngineTraceProducer::TraceEnvironment(
        *(PTPEngineTraceProducer **)(v4 + 600),
        (const struct PTPEnvironment *)(*(_QWORD *)(v4 + 600) + 40LL));
    }
  }
  return 1;
}
