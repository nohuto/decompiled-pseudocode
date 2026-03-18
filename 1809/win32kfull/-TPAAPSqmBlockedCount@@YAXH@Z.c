/*
 * XREFs of ?TPAAPSqmBlockedCount@@YAXH@Z @ 0x1C01C2384
 * Callers:
 *     ?TPAAPShouldAllowNow@@YAHKHH@Z @ 0x1C01C224C (-TPAAPShouldAllowNow@@YAHKHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TPAAPSqmBlockedCount(int a1)
{
  WinSqmIncrementDWORD(0LL, 11611LL, 1LL);
  if ( a1 )
    WinSqmIncrementDWORD(0LL, 11610LL, 1LL);
}
