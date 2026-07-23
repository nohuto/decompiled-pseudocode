/*
 * XREFs of sub_140585490 @ 0x140585490
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140584C40 (WbAddWarbirdEncryptionSegment.c)
 *     sub_140585268 @ 0x140585268 (sub_140585268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140585490(volatile signed __int64 *a1)
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
