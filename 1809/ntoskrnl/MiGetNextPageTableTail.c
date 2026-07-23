/*
 * XREFs of MiGetNextPageTableTail @ 0x14010F000
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rcx

  v4 = *(int **)(a1 + 16);
  if ( v4 )
    MiFlushTbList(v4, a2, a3, a4);
  return 0LL;
}
