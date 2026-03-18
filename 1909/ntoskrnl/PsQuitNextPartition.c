/*
 * XREFs of PsQuitNextPartition @ 0x1403093DC
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140913560 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
