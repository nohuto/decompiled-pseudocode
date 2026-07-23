/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1402D6D58
 * Callers:
 *     PopDirectedDripsTimerCallbackRoutine @ 0x1402D6CE0 (PopDirectedDripsTimerCallbackRoutine.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140868D28 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140868F78 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsPdcLpeNotification @ 0x140869620 (PopDirectedDripsPdcLpeNotification.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140869918 (PopDirectedDripsSetDisengageReason.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(struct _KEVENT *a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&a1->Header.WaitListHead);
  v2 = _InterlockedOr64((volatile signed __int64 *)&a1->Header.WaitListHead, a2);
  if ( !v2 && a2 )
    LODWORD(v2) = KeSetEvent(a1 + 1, 0, 0);
  return v2;
}
