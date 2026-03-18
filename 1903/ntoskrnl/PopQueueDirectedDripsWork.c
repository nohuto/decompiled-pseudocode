/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1402F1840
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x140159350 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1401593AC (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408A4244 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408A4314 (PopDirectedDripsInitializeBroadcast.c)
 *     PopDirectedDripsPdcLpeNotification @ 0x1408A47B0 (PopDirectedDripsPdcLpeNotification.c)
 *     PopDripsWatchdogPs4Callback @ 0x1408AB120 (PopDripsWatchdogPs4Callback.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8DC8 (PopDirectedDripsUmMarkTestDevices.c)
 *     PopInitializeDirectedDrips @ 0x140A06DD0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(struct _KEVENT *a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&a1->Header.WaitListHead);
  v2 = _InterlockedOr64((volatile signed __int64 *)&a1->Header.WaitListHead, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(a1 + 1, 0, 0);
  return v2;
}
