/*
 * XREFs of _TlgWriteAgg @ 0x140012A30
 * Callers:
 *     CmpThreadInfoLogStack @ 0x1401B3194 (CmpThreadInfoLogStack.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B3694 (EtwpWriteAppStateChangeSummary.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmpOKToFollowLink @ 0x1406421F0 (CmpOKToFollowLink.c)
 *     PnpTraceSetDevNodeProblem @ 0x14070EC94 (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x14070F05C (PnpTraceClearDevNodeProblem.c)
 *     HvpIsReadErrorTransient @ 0x140807FAC (HvpIsReadErrorTransient.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x140012E5C (ExtractAggregateFieldTypes.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
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

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&TraceLoggingMetadata) | (*a2 << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  result = -1073741811;
  UserData[1].Reserved = 1;
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
