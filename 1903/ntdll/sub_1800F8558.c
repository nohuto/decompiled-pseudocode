/*
 * XREFs of sub_1800F8558 @ 0x1800F8558
 * Callers:
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 *     sub_1800F8464 @ 0x1800F8464 (sub_1800F8464.c)
 * Callees:
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwWaitForMultipleObjects @ 0x18009D230 (ZwWaitForMultipleObjects.c)
 */

char sub_1800F8558()
{
  int v0; // eax

  if ( !qword_180166A10 || (ZwSetEvent(), v0 = ZwWaitForMultipleObjects(), v0 != 1) )
  {
    byte_180166A30 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
