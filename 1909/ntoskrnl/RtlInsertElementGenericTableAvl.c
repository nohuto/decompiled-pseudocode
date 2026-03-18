/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140001F10
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140154D0C (VfAvlInsertReservedTreeNode.c)
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406B409C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406EB048 (PiDqQueryAddObjectToResultSet.c)
 *     PiUpdateDriverDBCache @ 0x14070BF80 (PiUpdateDriverDBCache.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1407201E8 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140721FC8 (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14072495C (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x14074B0B4 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x1407566BC (PiDcInitUpdateProperties.c)
 *     PiDmObjectManagerPopulate @ 0x140757770 (PiDmObjectManagerPopulate.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407705F8 (EtwpEnumerateAutologgerPath.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408B8488 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140001F80 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x1400021D0 (FindNodeOrParent.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
