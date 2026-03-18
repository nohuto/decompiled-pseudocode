/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C00565AC
 * Callers:
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C0055D2C (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00B6A00 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C0135110 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ApiSetIsRemoteConnection @ 0x1C00579BC (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C0058340 (DeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0058A58 (RIMChildInputTypeIsVirtualized.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1C00599C0 (RIMRegisterForDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(unsigned int *Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx

  v2 = -1073741811;
  if ( (unsigned __int8)RIMChildInputTypeIsVirtualized(Object[21]) )
    return 0LL;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v3 = 0LL;
    v4 = Object + 32;
    v5 = Object + 78;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v3) & Object[21]) != 0 )
      {
        if ( *(v5 - 11) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 10, (__int64)&WPP_16c34415c861375ecf6ce2d06122523f_Traceguids);
          }
        }
        else
        {
          if ( !*v5 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(&Object[2 * v3 + 56], v10, *v4, *((_QWORD *)Object + 15));
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      v3 = (unsigned int)(v3 + 1);
      ++v5;
      v4 += 4;
    }
    while ( (unsigned int)v3 <= 2 );
  }
  return (unsigned int)v2;
}
