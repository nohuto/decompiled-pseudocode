/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x14011FC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
