/*
 * XREFs of ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C000AD70 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C000BB30 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000D590 (NdisReturnNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C000EC70 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMiniportMessageIsr@@YAEPEAU_KINTERRUPT@@PEAXK@Z @ 0x1C000F980 (-ndisMiniportMessageIsr@@YAEPEAU_KINTERRUPT@@PEAXK@Z.c)
 *     ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30 (-ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038710 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisSendNBLToFilter @ 0x1C0040A90 (ndisSendNBLToFilter.c)
 *     NdisBuildScatterGatherList @ 0x1C0078A60 (NdisBuildScatterGatherList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisMIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A0770 (-ndisMIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A08A0 (-ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC480 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD2D4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE460 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AEFB8 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwEndCycleCounter(struct NDIS_PCW_CONTEXT *a1, int a2, __int64 a3)
{
  unsigned int CurrentCpu; // eax
  char *v4; // r9
  unsigned __int64 v5; // rax

  CurrentCpu = a1->CurrentCpu;
  if ( CurrentCpu == -1 )
  {
    CurrentCpu = KeGetPcr()->Prcb.Number;
    a1->CurrentCpu = CurrentCpu;
  }
  v4 = (char *)a1->PcwBlock + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * CurrentCpu);
  v5 = __rdtsc();
  *(_QWORD *)&v4[8 * a3] += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v4[8 * a2 + 304];
  *(_QWORD *)&v4[8 * a2 + 304] = 0LL;
}
