/*
 * XREFs of GetSMSLookaside @ 0x1C0113DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall GetSMSLookaside(_QWORD *a1)
{
  void **result; // rax

  result = &SMSLookaside;
  *a1 = &SMSLookaside;
  return result;
}
