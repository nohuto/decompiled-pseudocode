/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1400DFA84
 * Callers:
 *     MiBuildMappedCluster @ 0x1400A2B5C (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x1400DFA48 (MiFreeModWriterEntry.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseWriteInProgressCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  if ( a3 )
  {
    MiReturnCommit(a1, a2);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
LABEL_3:
      MiReturnResidentAvailable(a2);
      return;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  }
  else
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      goto LABEL_3;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  }
}
