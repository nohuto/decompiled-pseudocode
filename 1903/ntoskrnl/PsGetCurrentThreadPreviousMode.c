/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x14011EE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
