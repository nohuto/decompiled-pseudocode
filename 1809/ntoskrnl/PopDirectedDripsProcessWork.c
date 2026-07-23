/*
 * XREFs of PopDirectedDripsProcessWork @ 0x140869698
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x140869A50 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     PopDirectedDripsEngageDfx @ 0x140868D94 (PopDirectedDripsEngageDfx.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140868E58 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14086921C (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x14086981C (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140869880 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsStartDebounceInterval @ 0x14086997C (PopDirectedDripsStartDebounceInterval.c)
 *     PopDisengageDirectedDrips @ 0x140869AD4 (PopDisengageDirectedDrips.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408774B4 (PopTriggerMonitorPowerEvent.c)
 *     PdcNotificationClientAcknowledge @ 0x14089BA5C (PdcNotificationClientAcknowledge.c)
 */

void __fastcall PopDirectedDripsProcessWork(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( PopDirectedDripsEnableV2 )
  {
    if ( a2 != 256 )
    {
      if ( a2 == 512 )
      {
        PopDirectedDripsEngageDfx((_BYTE *)a1, 512LL, a3);
        return;
      }
      goto LABEL_10;
    }
LABEL_26:
    PopTriggerMonitorPowerEvent(0LL, 45LL);
    return;
  }
  switch ( a2 )
  {
    case 0x100LL:
      goto LABEL_26;
    case 0x20000LL:
      LOBYTE(a3) = *(_BYTE *)(a1 + 212);
      PopDirectedDripsNotifyDrivers((signed __int32 *)a1, a1 + 232, a3, 0LL);
      return;
    case 0x1000000000LL:
      PopDirectedDripsStartDebounceInterval();
      return;
  }
LABEL_10:
  switch ( a2 )
  {
    case 1LL:
      PopDeepSleepSetDisengageReason(8u);
      break;
    case 2LL:
      PopDirectedDripsRefreshDisengageState();
      break;
    case 0x400LL:
      PopDirectedDripsHandleResiliencyNotification(a1);
      break;
    case 0x800LL:
      PopDirectedDripsRefreshDeviceState();
      break;
    case 0x10000LL:
      PopDirectedDripsNotifyAppsAndServices((_DWORD *)a1, (int *)(a1 + 232), *(_BYTE *)(a1 + 212));
      break;
    case 0x1000000LL:
      PdcNotificationClientAcknowledge(*(_QWORD *)(a1 + 224));
      break;
    case 0x200000000LL:
      PopDisengageDirectedDrips(a1, 0x200000000LL, a3, a4);
      break;
    case 0x800000000LL:
      PopDeepSleepClearDisengageReason(8u);
      break;
  }
}
