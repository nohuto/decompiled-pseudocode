/*
 * XREFs of PspRemoveIoAttribution @ 0x14068AD98
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x14068AA8C (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400EC72C (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(PRTL_BALANCED_NODE *Object)
{
  PRTL_BALANCED_NODE *v1; // rdi
  __int64 v4[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( *((_DWORD *)Object + 333) )
  {
    IoStopDiskIoAttributionForContext(Object[167]);
    IoDiskIoAttributionDereference((__int64)Object[167]);
    Object[167] = 0LL;
    v1 = Object;
  }
  v4[0] = 0LL;
  v4[2] = 0LL;
  v4[1] = (__int64)v1;
  return PspEnumJobsAndProcessesInJobHierarchy(
           Object,
           (int)PspSetJobIoAttributionJobPreCallback,
           0,
           (int)PspSetJobIoAttributionProcessCallback,
           (__int64)v4,
           5);
}
