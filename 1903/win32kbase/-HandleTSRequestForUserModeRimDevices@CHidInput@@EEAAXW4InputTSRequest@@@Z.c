/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00A8C90
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00681B4 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C0068238 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00BAB20 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3);
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
