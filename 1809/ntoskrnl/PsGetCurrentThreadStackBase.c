/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1402E9A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
