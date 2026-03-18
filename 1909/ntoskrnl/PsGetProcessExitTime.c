/*
 * XREFs of PsGetProcessExitTime @ 0x1406E5070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PsGetProcessExitTime(void)
{
  return (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
}
