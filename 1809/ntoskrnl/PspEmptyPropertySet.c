/*
 * XREFs of PspEmptyPropertySet @ 0x1405F8DBC
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x14010F10C (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
