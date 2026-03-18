/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140001F10
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14015466C (VfAvlInsertReservedTreeNode.c)
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14069F35C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406E9EA8 (PiDqQueryAddObjectToResultSet.c)
 *     PiUpdateDriverDBCache @ 0x14070A1A0 (PiUpdateDriverDBCache.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x14071E358 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140720128 (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140722ABC (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x140748570 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x140755C2C (PiDcInitUpdateProperties.c)
 *     PiDmObjectManagerPopulate @ 0x140756CE0 (PiDmObjectManagerPopulate.c)
 *     EtwpEnumerateAutologgerPath @ 0x14076D7A4 (EtwpEnumerateAutologgerPath.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408B8BB8 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
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
