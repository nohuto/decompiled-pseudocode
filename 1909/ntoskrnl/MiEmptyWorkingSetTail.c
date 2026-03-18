/*
 * XREFs of MiEmptyWorkingSetTail @ 0x140159AB0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1)
{
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) )
    MiFreeWsleList(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 160) + 8LL, 0);
  return 0LL;
}
