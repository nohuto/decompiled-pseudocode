/*
 * XREFs of _TlgWriteAgg @ 0x14008A7EC
 * Callers:
 *     CmpBounceContextStart @ 0x1405FE880 (CmpBounceContextStart.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     PnpTraceSetDevNodeProblem @ 0x14072C8F8 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x14072CA64 (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceInterruptConnection @ 0x1407419B0 (PnpTraceInterruptConnection.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140746BFC (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14077BC0C (PnpTraceDmaGuardDevicePolicy.c)
 *     HvpIsReadErrorTransient @ 0x1408401E0 (HvpIsReadErrorTransient.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x14008A8AC (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x14008AD30 (ExtractAggregateFieldTypes.c)
 */

NTSTATUS __fastcall TlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( *(ETWENABLECALLBACK **)(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, UserData);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v11) = a5;
      return InsertEventEntryInLookUpTable(
               a1,
               (unsigned int)&EventDescriptor,
               v11,
               (_DWORD)UserData,
               AggregateFieldTypes);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, a5, UserData);
    }
  }
  return result;
}
