/*
 * XREFs of RtlPushFrame @ 0x180073E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *__fastcall RtlPushFrame(_TEB_ACTIVE_FRAME *a1)
{
  struct _TEB *v1; // rdx
  _TEB_ACTIVE_FRAME *result; // rax

  v1 = NtCurrentTeb();
  result = v1->ActiveFrame;
  a1->Previous = result;
  v1->ActiveFrame = a1;
  return result;
}
