/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1801067BC
 * Callers:
 *     LookUpTableFlushComplete @ 0x180080A6C (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x180106630 (LookUpTableFlushPartial.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateInternalStatsOnFlush(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 280);
    if ( *(_DWORD *)(a1 + 296) > a2 || !v2 )
      *(_DWORD *)(a1 + 296) = a2;
    if ( *(_DWORD *)(a1 + 292) < a2 )
      *(_DWORD *)(a1 + 292) = a2;
    *(_QWORD *)(a1 + 280) = v2 + 1;
    *(_QWORD *)(a1 + 272) += a2;
  }
}
