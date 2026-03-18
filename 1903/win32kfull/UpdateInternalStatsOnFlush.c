/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1C036C2EC
 * Callers:
 *     LookUpTableFlushComplete @ 0x1C036B820 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C036C0F4 (LookUpTableFlushPartial.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateInternalStatsOnFlush(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 296);
    if ( *(_DWORD *)(a1 + 312) > a2 || !v2 )
      *(_DWORD *)(a1 + 312) = a2;
    if ( *(_DWORD *)(a1 + 308) < a2 )
      *(_DWORD *)(a1 + 308) = a2;
    *(_QWORD *)(a1 + 296) = v2 + 1;
    *(_QWORD *)(a1 + 288) += a2;
  }
}
