/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x140123B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return (*(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7] & 0x4000) != 0;
}
