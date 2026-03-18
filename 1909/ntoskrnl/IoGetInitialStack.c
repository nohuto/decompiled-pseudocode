/*
 * XREFs of IoGetInitialStack @ 0x140855C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
