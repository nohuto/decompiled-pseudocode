/*
 * XREFs of NdisCancelTimer @ 0x1C001CB50
 * Callers:
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00FF774 (ndisCancelInitModeTimeoutTimer.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
