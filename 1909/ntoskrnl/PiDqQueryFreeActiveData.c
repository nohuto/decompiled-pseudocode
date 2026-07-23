/*
 * XREFs of PiDqQueryFreeActiveData @ 0x1405B63E8
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x1405B5CD4 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryRelease @ 0x1405B6370 (PiDqQueryRelease.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x1405B6DD8 (PiDqIrpQueryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405B7A84 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryMakeInconsistent @ 0x1408650E8 (PiDqQueryMakeInconsistent.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140001C90 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405B5CA4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405B74A4 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1405B768C (PiDqActionDataFree.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); ; i = (_RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(*(_QWORD *)(a1 + 88) + 32LL));
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
