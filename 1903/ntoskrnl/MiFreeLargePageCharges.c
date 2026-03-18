/*
 * XREFs of MiFreeLargePageCharges @ 0x1402DF718
 * Callers:
 *     MiFreeLargePages @ 0x1402DF914 (MiFreeLargePages.c)
 *     MiFreeLargePagesFinish @ 0x1402DFAC0 (MiFreeLargePagesFinish.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10

  v3 = a3;
  if ( a3 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(a3);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a3);
  }
  if ( a1 != *(_QWORD *)(qword_140466188
                       + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]) )
  {
    if ( v3 )
      MiReturnCommit(a1, v3);
    MiReturnCrossPartitionCharges(a1, 4LL, 1LL, a2);
    v3 = a2;
  }
  return a2 - v3;
}
