/*
 * XREFs of PiDqQueryFreeActiveData @ 0x140590124
 * Callers:
 *     PiDqQueryRelease @ 0x1405900AC (PiDqQueryRelease.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405917B8 (PiDqQueryAppendActionEntry.c)
 *     PiDqIrpQueryGetResult @ 0x1406BE1FC (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F7500 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F7898 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1400067C0 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405913C4 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1405915B4 (PiDqActionDataFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406CC0D0 (PiDqQueryDeleteObjectFromResultSet.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  struct _RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (struct _RTL_AVL_TABLE *)(a1 + 72); ; i = (struct _RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  }
  v4 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    result = PiDqQueryActionQueueEntryFree(v5);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v6 = *(void **)(a1 + 184);
  if ( v6 )
  {
    result = PiDqActionDataFree(v6);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return result;
}
