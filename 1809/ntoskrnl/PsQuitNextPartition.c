/*
 * XREFs of PsQuitNextPartition @ 0x1402EBF9C
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x1408D74D0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
