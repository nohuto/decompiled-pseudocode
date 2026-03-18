/*
 * XREFs of IoGetInitialStack @ 0x14081C490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
