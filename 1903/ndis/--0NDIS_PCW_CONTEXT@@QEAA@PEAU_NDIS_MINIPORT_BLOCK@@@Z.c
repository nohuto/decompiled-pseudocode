/*
 * XREFs of ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBBC
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     ndisOidPreRSSParameters @ 0x1C003B010 (ndisOidPreRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C003B9E4 (ndisPostSetMiniportRSSParameters.c)
 *     ndisSendNBLToFilter @ 0x1C0040A90 (ndisSendNBLToFilter.c)
 *     NdisBuildScatterGatherList @ 0x1C0078A60 (NdisBuildScatterGatherList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisMIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A0770 (-ndisMIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A08A0 (-ndisMiniportIsr@@YAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00A09BC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     NdisMQueueDpcEx @ 0x1C00A0D30 (NdisMQueueDpcEx.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AEFB8 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

NDIS_PCW_CONTEXT *__fastcall NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(
        NDIS_PCW_CONTEXT *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int PcwDatapathEventMask; // eax
  wchar_t *Buffer; // rax

  this->CurrentCpu = -1;
  this->PcwBlock = 0LL;
  *(_QWORD *)&this->DatapathEventsMask = 0LL;
  PcwDatapathEventMask = a2->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || a2->PcwDatapathCycleMask )
  {
    this->DatapathEventsMask = PcwDatapathEventMask;
    this->DatapathCyclesMask = a2->PcwDatapathCycleMask;
    Buffer = a2->Reserved4.Buffer;
    this->PcwBlock = (_NDIS_PCW_DATA_BLOCK *)Buffer;
    if ( !Buffer )
      this->PcwBlock = a2->PcwDataBlock;
  }
  return this;
}
