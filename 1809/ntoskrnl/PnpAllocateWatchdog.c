/*
 * XREFs of PnpAllocateWatchdog @ 0x140005D1C
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058BBC0 (PnpDeviceEventWorker.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1406E8090 (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE820 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID PnpAllocateWatchdog()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x57647050u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0xD8uLL);
  return v1;
}
