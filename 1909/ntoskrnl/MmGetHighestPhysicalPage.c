/*
 * XREFs of MmGetHighestPhysicalPage @ 0x140005F68
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14059B148 (PopBuildMemoryImageHeader.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1405CF500 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14075A1F0 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * a1) + 7880LL);
}
