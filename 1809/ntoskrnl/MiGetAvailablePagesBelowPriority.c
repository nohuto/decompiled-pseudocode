/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140030FC4
 * Callers:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiPrefetchNormally @ 0x140031280 (MiPrefetchNormally.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEDCC (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400EEF48 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x1400EEFD8 (MiComputeSystemTrimCriteria.c)
 *     MiComputeZeroClusterMaximum @ 0x14010FA84 (MiComputeZeroClusterMaximum.c)
 *     MiComputeAgingPercent @ 0x14011FEA8 (MiComputeAgingPercent.c)
 *     MmGetAvailablePagesBelowPriority @ 0x140137D84 (MmGetAvailablePagesBelowPriority.c)
 *     MiForcedTrim @ 0x14013F210 (MiForcedTrim.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1406D4668 (MiAllocateCrcList.c)
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
