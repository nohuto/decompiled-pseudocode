/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001720 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001C90 (NdisMSendNetBufferListsComplete.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C00036A0 (NdisReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0006450 (NdisMAllocateNetBufferSGList.c)
 *     ndisInterruptDpc @ 0x1C0006B20 (ndisInterruptDpc.c)
 *     ndisMiniportMessageIsr @ 0x1C0007D20 (ndisMiniportMessageIsr.c)
 *     ndisSendNBLToFilter @ 0x1C0010130 (ndisSendNBLToFilter.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0011FC0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     NdisBuildScatterGatherList @ 0x1C004BF40 (NdisBuildScatterGatherList.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0055494 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisMIsr @ 0x1C0066690 (ndisMIsr.c)
 *     ndisMiniportIsr @ 0x1C0066CF0 (ndisMiniportIsr.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1, int a2)
{
  unsigned int CurrentCpu; // eax

  CurrentCpu = a1->CurrentCpu;
  if ( CurrentCpu == -1 )
  {
    CurrentCpu = KeGetPcr()->Prcb.Number;
    a1->CurrentCpu = CurrentCpu;
  }
  *(_QWORD *)((char *)&a1->PcwBlock[1].DatapathEventReferences[2 * a2 + 12]
            + ndisPcwOffsetToPerCpuData
            + (unsigned __int64)(ndisPcwPerCpuDataStride * CurrentCpu)) = __rdtsc();
}
