/*
 * XREFs of ?TPAAPSqmBlockedCount@@YAXH@Z @ 0x1C0202C04
 * Callers:
 *     ?TPAAPShouldAllowNow@@YAHKHH@Z @ 0x1C0202ACC (-TPAAPShouldAllowNow@@YAHKHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TPAAPSqmBlockedCount(int a1)
{
  WinSqmIncrementDWORD(0LL, 11611LL, 1LL);
  if ( a1 )
    WinSqmIncrementDWORD(0LL, 11610LL, 1LL);
}
