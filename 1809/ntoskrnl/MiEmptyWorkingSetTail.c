/*
 * XREFs of MiEmptyWorkingSetTail @ 0x140141A50
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1)
{
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 168) + 20LL) )
    MiFreeWsleList(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 168) + 8LL, 0);
  return 0LL;
}
