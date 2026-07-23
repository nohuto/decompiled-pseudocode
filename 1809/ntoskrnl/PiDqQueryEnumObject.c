/*
 * XREFs of PiDqQueryEnumObject @ 0x140596674
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x140596650 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryActionQueueEntryCreate @ 0x14059272C (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405927B8 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x14059652C (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140596FCC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406CABBC (PiDqQueryAddObjectToResultSet.c)
 */

__int64 __fastcall PiDqQueryEnumObject(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int AddObjectToResultSet; // ebx
  char v6; // al
  char v7; // al
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[3];
  AddObjectToResultSet = 0;
  LOBYTE(v9) = 1;
  if ( *(_DWORD *)(v2 + 20) )
    goto LABEL_12;
  if ( (unsigned int)(*(_DWORD *)(v2 + 16) - 1) > 2 )
  {
    v6 = 1;
    LOBYTE(v9) = 1;
  }
  else
  {
    AddObjectToResultSet = PiPnpRtlApplyMandatoryFilters(
                             PiPnpRtlCtx,
                             *(_QWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 28),
                             0,
                             (unsigned __int8)a1 + 32,
                             (__int64)&v9);
    v6 = (char)v9;
  }
  if ( AddObjectToResultSet == -1073741772 || AddObjectToResultSet == -1073741275 )
  {
    v6 = 0;
    LOBYTE(v9) = 0;
    AddObjectToResultSet = 0;
  }
  if ( AddObjectToResultSet >= 0 && v6 )
  {
LABEL_12:
    if ( !*(_QWORD *)(a1[3] + 88LL)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter(a1, *(void **)(a2 + 16), (bool *)&v9),
           AddObjectToResultSet == -1073741772)
        ? (v7 = 0, AddObjectToResultSet = 0)
        : (v7 = (char)v9),
          AddObjectToResultSet >= 0 && v7) )
    {
      if ( (*(_DWORD *)(a1[3] + 40LL) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1, a2, 0LL, &v9);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry((__int64)a1, v9);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
