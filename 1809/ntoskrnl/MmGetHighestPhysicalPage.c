/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1400A8858
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14056C820 (PopBuildMemoryImageHeader.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14062B540 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407476BC (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * a1) + 7112LL);
}
