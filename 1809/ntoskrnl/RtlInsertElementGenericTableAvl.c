/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140006F00
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1400F56B8 (VfAvlInsertReservedTreeNode.c)
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1405890BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiUpdateDriverDBCache @ 0x14067EC88 (PiUpdateDriverDBCache.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406C993C (PiDqQueryAddObjectToResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1406D7D90 (PiSwBusRelationAdd.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DB758 (PopAvlFindOrMakeStatsForAudio.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407014DC (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x14072389C (EtwpEnumerateKeyProviders.c)
 *     PiDmObjectManagerPopulate @ 0x14072C910 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x14073AEA4 (PiDcInitUpdateProperties.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C48 (EtwpEnumerateAutologgerPath.c)
 *     IopSetFileObjectIosbRange @ 0x14081B03C (IopSetFileObjectIosbRange.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140006F70 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x1400071B0 (FindNodeOrParent.c)
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
