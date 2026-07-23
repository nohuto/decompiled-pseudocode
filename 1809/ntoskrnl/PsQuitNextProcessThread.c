/*
 * XREFs of PsQuitNextProcessThread @ 0x1406D1F30
 * Callers:
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
