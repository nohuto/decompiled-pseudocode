/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C004EB30
 * Callers:
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C004DC30 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A57F0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C010CB70 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ApiSetIsRemoteConnection @ 0x1C00503D8 (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1C0052468 (RIMRegisterForDeviceClassNotifications.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(char *Object)
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
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  if ( (unsigned int)ApiSetIsRemoteConnection() || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v3 = 0LL;
    v4 = Object + 128;
    v5 = Object + 312;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v3) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v5 - 11) )
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xAu, (__int64)&WPP_02da8cdce8e33f08dfa4ca0cc905ca9e_Traceguids);
        }
        else
        {
          if ( !*v5 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(&Object[8 * v3 + 224], v10, *v4, *((_QWORD *)Object + 15));
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
