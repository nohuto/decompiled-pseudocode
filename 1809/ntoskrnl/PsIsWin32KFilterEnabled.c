/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x140121150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return (KeGetCurrentThread()->ApcState.Process[2].UserTime & 0x4000) != 0;
}
