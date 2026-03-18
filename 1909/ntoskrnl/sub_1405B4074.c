/*
 * XREFs of sub_1405B4074 @ 0x1405B4074
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405B3E54 @ 0x1405B3E54 (sub_1405B3E54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405B4074(volatile signed __int64 *a1)
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
