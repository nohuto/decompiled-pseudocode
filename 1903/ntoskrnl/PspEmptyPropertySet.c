/*
 * XREFs of PspEmptyPropertySet @ 0x14060EEF4
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x140139298 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
