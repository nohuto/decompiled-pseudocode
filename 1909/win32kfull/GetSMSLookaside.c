/*
 * XREFs of GetSMSLookaside @ 0x1C011C500
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
