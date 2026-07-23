/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1402E9C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
