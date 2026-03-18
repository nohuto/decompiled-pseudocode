/*
 * XREFs of QueryInertiaStatus @ 0x1C01C2B20
 * Callers:
 *     <none>
 * Callees:
 *     QueryInertiaInfo @ 0x1C0226920 (QueryInertiaInfo.c)
 */

_BOOL8 __fastcall QueryInertiaStatus(__int64 a1)
{
  return QueryInertiaInfo(a1, gptCursorAsync, 0LL) != 0;
}
