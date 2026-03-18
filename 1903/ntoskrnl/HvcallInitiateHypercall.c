/*
 * XREFs of HvcallInitiateHypercall @ 0x140344030
 * Callers:
 *     HvlpQueryHypervisorSchedulerType @ 0x1401BE010 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1408512F4 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvcallInitiateHypercall()
{
  return HvcallCodeVa();
}
