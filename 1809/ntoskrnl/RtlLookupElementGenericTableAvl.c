/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x140006BF0
 * Callers:
 *     PopNotifySessionUserPowerRequestCreated @ 0x140589440 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14058A0BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestFindEntryById @ 0x14058A950 (PopPowerRequestFindEntryById.c)
 *     PopPowerRequestDeleteEntryById @ 0x14058AA34 (PopPowerRequestDeleteEntryById.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14058AD88 (PopHandleConvergedPowerRequestUpdate.c)
 *     PiDmLookupObject @ 0x140599A58 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140680388 (PiLookupInDDBCache.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DC9D8 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiSwFindBusRelations @ 0x1406E93E0 (PiSwFindBusRelations.c)
 *     PiDcHandleDeviceEvent @ 0x1406ED140 (PiDcHandleDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x1406EE5EC (PiSwFindSwDevice.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx
  _RTL_BALANCED_LINKS *v10; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 )
          break;
        if ( !i->LeftChild )
        {
          v7 = 2;
          goto LABEL_10;
        }
        i = i->LeftChild;
      }
      if ( v6 != GenericGreaterThan )
      {
        v7 = 1;
        goto LABEL_10;
      }
      if ( !i->RightChild )
        break;
    }
    v7 = 3;
  }
  else
  {
    i = v10;
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
