/*
 * XREFs of _lambda_9809129e8e2c8ffa8590d024b20886a2_::_lambda_invoker_cdecl_ @ 0x1C008CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014C2B8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_9809129e8e2c8ffa8590d024b20886a2_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v4 = *((_QWORD *)a1 + 60);
    if ( *(_DWORD *)(v4 + 24) == 7 )
    {
      if ( v4 )
        v5 = *(_QWORD *)(v4 + 992);
      else
        v5 = 0LL;
      if ( !v5 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v4);
        v4 = *((_QWORD *)a1 + 60);
      }
      CPTPProcessor::UpdateEnvironment(v5, 1LL, v4);
    }
  }
  return 1;
}
