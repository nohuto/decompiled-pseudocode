/*
 * XREFs of PsQuitNextPartition @ 0x1402EBDAC
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x1408D6210 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140090CC0 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
