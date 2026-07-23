/*
 * XREFs of PsIsSystemThread @ 0x1400A38A0
 * Callers:
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
