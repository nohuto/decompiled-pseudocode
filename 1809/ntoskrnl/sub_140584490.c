/*
 * XREFs of sub_140584490 @ 0x140584490
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140583C40 (WbAddWarbirdEncryptionSegment.c)
 *     sub_140584268 @ 0x140584268 (sub_140584268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140584490(volatile signed __int64 *a1)
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
