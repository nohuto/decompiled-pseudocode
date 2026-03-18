/*
 * XREFs of ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C014FE10 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 */

__int64 __fastcall CHidInput::OnDelayZonePalmRejectionTimerNotification(CHidInput *this)
{
  DelayZonePalmRejection::PalmRejectTimerProcStatic();
  return 0LL;
}
