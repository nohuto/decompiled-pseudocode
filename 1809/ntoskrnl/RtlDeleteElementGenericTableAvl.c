/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140006CA0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14016C378 (VfAvlDeleteTreeNode.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058883C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1405890BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestDeleteEntryById @ 0x140589A34 (PopPowerRequestDeleteEntryById.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiUpdateDriverDBCache @ 0x14067EC68 (PiUpdateDriverDBCache.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406CC0B0 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1406D8B4C (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x1406D8D54 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1406D9110 (PiSwCloseDevice.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DB738 (PopAvlFindOrMakeStatsForAudio.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1406EE26C (PnpCleanupDeviceRegistryValues.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406F9730 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectManagerPopulate @ 0x14072C8F0 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x140742A8C (EtwpFreeKeyNameList.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198B8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14081B01C (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x1408297A8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140006D50 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x140134810 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != GenericGreaterThan )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
