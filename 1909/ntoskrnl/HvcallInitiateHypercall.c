/*
 * XREFs of HvcallInitiateHypercall @ 0x140343A90
 * Callers:
 *     HvlpQueryHypervisorSchedulerType @ 0x1401BE9C0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408509F4 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
