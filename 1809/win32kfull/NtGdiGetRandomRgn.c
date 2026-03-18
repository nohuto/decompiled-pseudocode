/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C0056BC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(HDC a1, __int64 a2, int a3)
{
  unsigned int RandomRgn; // edi

  if ( a3 == 5 )
    return 0LL;
  if ( a3 == 4 )
    UserEnterUserCritSecShared();
  RandomRgn = GreGetRandomRgn(a1);
  if ( a3 == 4 )
    UserLeaveUserCritSec();
  return RandomRgn;
}
