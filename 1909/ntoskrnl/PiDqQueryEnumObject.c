/*
 * XREFs of PiDqQueryEnumObject @ 0x1405BB524
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1405BB500 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryActionQueueEntryCreate @ 0x1405B79F8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405B7A84 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1405BB3D8 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBF24 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406EB048 (PiDqQueryAddObjectToResultSet.c)
 */

__int64 __fastcall PiDqQueryEnumObject(_QWORD *a1, __int64 a2)
{
  int AddObjectToResultSet; // ebx
  char v4; // cl
  __int64 v6; // rax
  int v7; // eax
  char v8; // al
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  AddObjectToResultSet = 0;
  v4 = 1;
  LOBYTE(v10) = 1;
  v6 = a1[3];
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_12;
  if ( (unsigned int)(*(_DWORD *)(v6 + 16) - 1) <= 2 )
  {
    v7 = PiPnpRtlApplyMandatoryFilters(
           PiPnpRtlCtx,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 28),
           0,
           (unsigned __int8)a1 + 32,
           (__int64)&v10);
    v4 = (char)v10;
    AddObjectToResultSet = v7;
  }
  if ( AddObjectToResultSet == -1073741772 || AddObjectToResultSet == -1073741275 )
  {
    v4 = 0;
    LOBYTE(v10) = 0;
    AddObjectToResultSet = 0;
  }
  if ( AddObjectToResultSet >= 0 && v4 )
  {
LABEL_12:
    if ( !*(_QWORD *)(a1[3] + 88LL)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter(a1, *(void **)(a2 + 16), (bool *)&v10),
           AddObjectToResultSet == -1073741772)
        ? (v8 = 0, AddObjectToResultSet = 0)
        : (v8 = (char)v10),
          AddObjectToResultSet >= 0 && v8) )
    {
      if ( (*(_DWORD *)(a1[3] + 40LL) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1, a2, 0LL, &v10);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry((__int64)a1, v10);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
