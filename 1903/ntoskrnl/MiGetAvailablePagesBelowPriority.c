/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1400DAF6C
 * Callers:
 *     MiComputeZeroClusterMaximum @ 0x14007D620 (MiComputeZeroClusterMaximum.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14009A034 (MmGetAvailablePagesBelowPriority.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiPrefetchNormally @ 0x1400DAF28 (MiPrefetchNormally.c)
 *     MiGetHardFaultPages @ 0x1400DD9C4 (MiGetHardFaultPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400F3268 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1400F33F4 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x1400F3484 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140122A74 (MiComputeAgingPercent.c)
 *     MiForcedTrim @ 0x140142E58 (MiForcedTrim.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1406F6590 (MiAllocateCrcList.c)
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
