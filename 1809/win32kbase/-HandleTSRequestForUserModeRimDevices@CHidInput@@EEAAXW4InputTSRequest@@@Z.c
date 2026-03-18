/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0094CD0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00524D4 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C0052538 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00A61B0 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredMsgKM("Invalid TS request!");
      }
      else
      {
        return RIMDirectStartUserModeRimDeviceClassNotifications();
      }
    }
    else
    {
      return RIMDirectPnpRemoveUserModeRimDevices();
    }
  }
  return result;
}
