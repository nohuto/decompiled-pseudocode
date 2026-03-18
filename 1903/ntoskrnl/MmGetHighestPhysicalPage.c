/*
 * XREFs of MmGetHighestPhysicalPage @ 0x140005ED8
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14059B168 (PopBuildMemoryImageHeader.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1405CF000 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14074AEA4 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * a1) + 7880LL);
}
