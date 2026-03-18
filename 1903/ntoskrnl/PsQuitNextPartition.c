/*
 * XREFs of PsQuitNextPartition @ 0x14030992C
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140913B00 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
