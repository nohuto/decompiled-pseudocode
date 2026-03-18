/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1400BADEC
 * Callers:
 *     MiComputeZeroClusterMaximum @ 0x14007DA20 (MiComputeZeroClusterMaximum.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiPrefetchNormally @ 0x1400BADA8 (MiPrefetchNormally.c)
 *     MiGetHardFaultPages @ 0x1400BD844 (MiGetHardFaultPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400DB7A8 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400DB934 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x1400DB9C4 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140123B84 (MiComputeAgingPercent.c)
 *     MmGetAvailablePagesBelowPriority @ 0x140139F40 (MmGetAvailablePagesBelowPriority.c)
 *     MiForcedTrim @ 0x140143398 (MiForcedTrim.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1406F8350 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r9
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1 + 296;
  result = a1[272] + a1[280];
  v4 = (unsigned __int64)&a1[5 * a2 + 296];
  while ( (unsigned __int64)v2 < v4 )
  {
    result += *v2;
    v2 += 5;
  }
  return result;
}
