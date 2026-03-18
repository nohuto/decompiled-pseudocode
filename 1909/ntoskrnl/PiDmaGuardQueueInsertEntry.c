/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x14087BB84
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407329F8 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PipDgqInsertEntry @ 0x14087BC24 (PipDgqInsertEntry.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64706E50u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    PoolWithTag[2] = Object;
    PipDgqInsertEntry(PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
