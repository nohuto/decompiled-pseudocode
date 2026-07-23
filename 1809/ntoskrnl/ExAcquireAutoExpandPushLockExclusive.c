/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x140119050
 * Callers:
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiLockLoaderEntry @ 0x1400DBDE4 (MiLockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x1402B07AC (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiLockAwePagesExclusive @ 0x1402B1484 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1402B14CC (MiLockAweVadsExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14016765C (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  PRTL_BALANCED_NODE v2; // rdi
  __int64 result; // rax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  return result;
}
