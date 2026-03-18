/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x14013A180
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016AF00 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016B290 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14016BE30 (ExAcquireFastResourceShared.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x140135AF8 (RtlInsertHeadCircularList.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
