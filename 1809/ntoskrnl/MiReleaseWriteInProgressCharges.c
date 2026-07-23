/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x140022CC4
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140022C88 (MiFreeModWriterEntry.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
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
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
  }
  else
  {
    result = &MiSystemPartition;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      return (ULONG_PTR *)MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
  }
  return result;
}
