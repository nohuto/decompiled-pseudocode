/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C01310F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0121DA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     IOCPDispatcher_Destroy @ 0x1C0124890 (IOCPDispatcher_Destroy.c)
 *     CleanupSensorExplicitly @ 0x1C012DCD0 (CleanupSensorExplicitly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

IOCPDispatcher *__fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2)
{
  IOCPDispatcher *v2; // rcx
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  IOCPDispatcher *result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x19u,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  v2 = gpIOCPDispatcher;
  if ( gpIOCPDispatcher )
    IOCPDispatcher::Close((HANDLE *)gpIOCPDispatcher, 1);
  v3 = (unsigned int *)&unk_1C019A5B0;
  v4 = 3LL;
  do
  {
    v5 = *(v3 - 4);
    if ( v5 == 2 )
    {
      CleanupSensorExplicitly(*v3, a2);
    }
    else if ( v5 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, a2);
    }
    v3 += 12;
    --v4;
  }
  while ( v4 );
  result = IOCPDispatcher_Destroy();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return (IOCPDispatcher *)WPP_RECORDER_SF_(
                               (__int64)WPP_GLOBAL_Control->DeviceExtension,
                               5u,
                               1u,
                               0x1Au,
                               (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  return result;
}
