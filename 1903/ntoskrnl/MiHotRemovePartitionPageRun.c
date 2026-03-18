/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x14089CB38
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi

  v3 = MiRemovePhysicalMemory(a1, a2, 0x210u);
  if ( v3 >= 0 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, a2);
    _InterlockedExchangeAdd64(&qword_140466A38, -(__int64)a2);
  }
  return (unsigned int)v3;
}
