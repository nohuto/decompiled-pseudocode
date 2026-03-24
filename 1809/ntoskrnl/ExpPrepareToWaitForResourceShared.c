/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x140137E00
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1400B1A10 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165930 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165B60 (ExAcquireFastResourceShared.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140165E80 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1401352D0 (RtlInsertHeadCircularList.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall ExpPrepareToWaitForResourceShared(__int64 a1, __int64 a2, __int64 a3)
{
  ++*(_DWORD *)(a1 + 72);
  memset((void *)a3, 0, 0x30uLL);
  *(_QWORD *)(a3 + 16) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  *(_WORD *)(a3 + 24) = 1;
  *(_BYTE *)(a3 + 26) = 6;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  return RtlInsertHeadCircularList((__int64 *)(a1 + 32), (_QWORD *)a3);
}
