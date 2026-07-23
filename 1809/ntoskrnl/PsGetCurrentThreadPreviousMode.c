/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x14011EEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
