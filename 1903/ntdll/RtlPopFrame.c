/*
 * XREFs of RtlPopFrame @ 0x1800686C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB_ACTIVE_FRAME *__fastcall RtlPopFrame(__int64 a1)
{
  struct _TEB_ACTIVE_FRAME *result; // rax

  result = *(struct _TEB_ACTIVE_FRAME **)(a1 + 8);
  NtCurrentTeb()->ActiveFrame = result;
  return result;
}
