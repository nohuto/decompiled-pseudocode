/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1402D6A68
 * Callers:
 *     PopDirectedDripsTimerCallbackRoutine @ 0x1402D69F0 (PopDirectedDripsTimerCallbackRoutine.c)
 *     PopDirectedDripsNotify @ 0x14071E768 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140867AE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140867D38 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsPdcLpeNotification @ 0x1408683E0 (PopDirectedDripsPdcLpeNotification.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1408686D8 (PopDirectedDripsSetDisengageReason.c)
 *     PopDripsWatchdogTakeAction @ 0x1408797A8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
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
