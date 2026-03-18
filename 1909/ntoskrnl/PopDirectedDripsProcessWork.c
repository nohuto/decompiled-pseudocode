/*
 * XREFs of PopDirectedDripsProcessWork @ 0x1408A4030
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1408A4640 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopDirectedDripsInitializeStartedDevices @ 0x1405B1B00 (PopDirectedDripsInitializeStartedDevices.c)
 *     PopDirectedDripsEngageDfx @ 0x1408A38C0 (PopDirectedDripsEngageDfx.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408A3974 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A3E50 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsRefreshActions @ 0x1408A4150 (PopDirectedDripsRefreshActions.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x1408A42D0 (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x1408A4300 (PopDirectedDripsRefreshDisengageState.c)
 *     PopPowerAggregatorHandleIntent @ 0x1408B24CC (PopPowerAggregatorHandleIntent.c)
 *     PdcNotificationClientAcknowledge @ 0x1408D8C98 (PdcNotificationClientAcknowledge.c)
 */

__int64 __fastcall PopDirectedDripsProcessWork(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  result = 1024LL;
  if ( a2 > 0x400 )
  {
    switch ( a2 )
    {
      case 0x800uLL:
        return PopDirectedDripsRefreshDeviceState();
      case 0x10000uLL:
        return PopDirectedDripsNotifyAppsAndServices((_DWORD *)a1, (_DWORD *)(a1 + 80), *(_BYTE *)(a1 + 56));
      case 0x1000000uLL:
        return PdcNotificationClientAcknowledge(*(_QWORD *)(a1 + 72));
      default:
        result = 0x800000000LL;
        if ( a2 == 0x800000000LL )
          return PopDeepSleepClearDisengageReason(8u);
        break;
    }
  }
  else if ( a2 == 1024 )
  {
    return PopDirectedDripsHandleResiliencyNotification(a1);
  }
  else
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 252;
          if ( v6 )
          {
            if ( v6 == 256 )
              return PopDirectedDripsEngageDfx((_BYTE *)a1);
          }
          else
          {
            PopAcquirePolicyLock();
            PopPowerAggregatorHandleIntent(4LL, 0LL, 42LL);
            return PopReleasePolicyLock();
          }
        }
        else
        {
          return PopDirectedDripsInitializeStartedDevices();
        }
      }
      else
      {
        return PopDirectedDripsRefreshDisengageState();
      }
    }
    else
    {
      return PopDirectedDripsRefreshActions();
    }
  }
  return result;
}
