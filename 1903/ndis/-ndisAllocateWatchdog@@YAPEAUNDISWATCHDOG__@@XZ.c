/*
 * XREFs of ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FCBA4
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C002F2F8 (ndisMInitializeMiniportBlock.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A37F0 (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00FCBF4 (--0NdisWatchdogState@@QEAA@XZ.c)
 */

__int64 ndisAllocateWatchdog(void)
{
  __int64 result; // rax

  if ( ndisWatchdogDisable )
    return -1LL;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x7377444Eu);
  if ( result )
    result = (__int64)NdisWatchdogState::NdisWatchdogState((PVOID)result);
  if ( !result )
    return -1LL;
  return result;
}
