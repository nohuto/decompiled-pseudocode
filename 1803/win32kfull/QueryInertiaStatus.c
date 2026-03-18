/*
 * XREFs of QueryInertiaStatus @ 0x1C01A1560
 * Callers:
 *     <none>
 * Callees:
 *     QueryInertiaInfo @ 0x1C01FDBFC (QueryInertiaInfo.c)
 */

_BOOL8 __fastcall QueryInertiaStatus(__int64 a1)
{
  return QueryInertiaInfo(a1, *(_QWORD *)gptCursorAsync, 0LL) != 0;
}
