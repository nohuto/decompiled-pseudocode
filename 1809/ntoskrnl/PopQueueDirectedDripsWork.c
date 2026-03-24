/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1402D6B68
 * Callers:
 *     PopDirectedDripsTimerCallbackRoutine @ 0x1402D6AF0 (PopDirectedDripsTimerCallbackRoutine.c)
 *     PopDirectedDripsNotify @ 0x14071E748 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140867AC8 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140867D18 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDirectedDripsPdcLpeNotification @ 0x1408683C0 (PopDirectedDripsPdcLpeNotification.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1408686B8 (PopDirectedDripsSetDisengageReason.c)
 *     PopDripsWatchdogTakeAction @ 0x140879788 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
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
