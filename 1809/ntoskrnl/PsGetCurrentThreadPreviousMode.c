/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x14011EE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
