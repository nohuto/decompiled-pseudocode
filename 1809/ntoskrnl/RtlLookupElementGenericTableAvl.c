/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x140006BF0
 * Callers:
 *     PopNotifySessionUserPowerRequestCreated @ 0x140588440 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1405890BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestFindEntryById @ 0x140589950 (PopPowerRequestFindEntryById.c)
 *     PopPowerRequestDeleteEntryById @ 0x140589A34 (PopPowerRequestDeleteEntryById.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140589D88 (PopHandleConvergedPowerRequestUpdate.c)
 *     PiDmLookupObject @ 0x140598A58 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059AC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiUpdateDriverDBCache @ 0x14067EC88 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14067F1E8 (PiLookupInDDBCache.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1406DB758 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiSwFindBusRelations @ 0x1406E8160 (PiSwFindBusRelations.c)
 *     PiDcHandleDeviceEvent @ 0x1406EBEC0 (PiDcHandleDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x1406ED36C (PiSwFindSwDevice.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7898 (PiDqQueryApplyObjectEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198D8 (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
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
