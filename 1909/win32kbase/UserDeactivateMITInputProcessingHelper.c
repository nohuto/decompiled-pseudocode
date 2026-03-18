/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C0185010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009C320 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C00A4A60 (IOCPDispatcher_Destroy.c)
 *     CleanupSensorExplicitly @ 0x1C00A6020 (CleanupSensorExplicitly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  struct IRegisterInputDispatcherObjects *v3; // rcx
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  void *result; // rax
  int v8; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      25,
      (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  v3 = gpIOCPDispatcher;
  if ( gpIOCPDispatcher )
    IOCPDispatcher::Close(gpIOCPDispatcher, 1);
  v4 = (unsigned int *)&unk_1C0208020;
  v5 = 3LL;
  do
  {
    v6 = *(v4 - 4);
    if ( v6 == 2 )
    {
      CleanupSensorExplicitly(*v4, a2, a3);
    }
    else if ( v6 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a2, a3);
    }
    v4 += 12;
    --v5;
  }
  while ( v5 );
  result = IOCPDispatcher_Destroy((__int64)v3, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      return (void *)WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       v8,
                       2,
                       26,
                       (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
    }
  }
  return result;
}
