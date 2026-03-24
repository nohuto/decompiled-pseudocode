/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1400A8918
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14056B820 (PopBuildMemoryImageHeader.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14062A520 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x140745F7C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407464CC (PopPreallocateHibernateMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8LL * a1) + 7112LL);
}
