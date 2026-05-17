/*
 * XREFs of RtlGetFrame @ 0x1800CE3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
