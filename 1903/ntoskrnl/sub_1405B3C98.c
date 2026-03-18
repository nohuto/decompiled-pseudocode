/*
 * XREFs of sub_1405B3C98 @ 0x1405B3C98
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B342C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405B3A78 @ 0x1405B3A78 (sub_1405B3A78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405B3C98(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
