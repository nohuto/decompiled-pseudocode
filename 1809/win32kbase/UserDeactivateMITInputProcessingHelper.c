/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C0152FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     CleanupSensorExplicitly @ 0x1C0086DE0 (CleanupSensorExplicitly.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C008ABF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C0091DF0 (IOCPDispatcher_Destroy.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID DeviceContext; // rcx
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  void *result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x19u,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    IOCPDispatcher::Close((HANDLE *)WPP_MAIN_CB.Queue.Wcb.DeviceContext, 1);
  v4 = (unsigned int *)&unk_1C01C3020;
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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(DeviceContext, a2, a3);
    }
    v4 += 12;
    --v5;
  }
  while ( v5 );
  result = IOCPDispatcher_Destroy((__int64)DeviceContext, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return (void *)WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     1u,
                     0x1Au,
                     (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  return result;
}
