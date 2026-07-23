/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140006CA0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058983C (PopAvlDeleteStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140589F40 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14058A0BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestDeleteEntryById @ 0x14058AA34 (PopPowerRequestDeleteEntryById.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406CD350 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x1406D9FF4 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1406DA3B0 (PiSwCloseDevice.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DC9D8 (PopAvlFindOrMakeStatsForAudio.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1406EF50C (PnpCleanupDeviceRegistryValues.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectManagerPopulate @ 0x14072DAE0 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x140743C7C (EtwpFreeKeyNameList.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x14082A9A8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140006D50 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1401348E0 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
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
