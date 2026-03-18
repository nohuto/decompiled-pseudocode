/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1400BF904
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x1400BF8C8 (MiFreeModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x1400C9B8C (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 */

ULONG_PTR *__fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *result; // rax

  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  }
  else
  {
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  }
  return result;
}
