/*
 * XREFs of PsIsSystemThread @ 0x1400A3960
 * Callers:
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
