/*
 * XREFs of RtlGetFrame @ 0x1800CE300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB_ACTIVE_FRAME *RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
