/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x140860630
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402D0018 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1400E18C8 (MiReleaseNonPagedResources.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi

  v3 = MiRemovePhysicalMemory(a1, a2, 528);
  if ( v3 >= 0 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, a2);
    _InterlockedExchangeAdd64(&qword_14043B018, -(__int64)a2);
  }
  return (unsigned int)v3;
}
