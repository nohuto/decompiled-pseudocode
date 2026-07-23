/*
 * XREFs of PoQueryStopWatchCollection @ 0x1402E9420
 * Callers:
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14087C2BC (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoQueryStopWatchCollection(_QWORD *a1, bool *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a1[2];
  if ( a2 )
    *a2 = v4 != 0;
  v5 = 0LL;
  result = 0LL;
  if ( !v4 )
  {
    v5 = a1[3];
    result = a1[5];
  }
  if ( a3 )
    *a3 = v5;
  if ( a4 )
    *a4 = result;
  return result;
}
