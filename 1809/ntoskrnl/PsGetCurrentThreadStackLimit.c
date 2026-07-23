/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1402E9C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
