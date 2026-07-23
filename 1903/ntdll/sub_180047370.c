/*
 * XREFs of sub_180047370 @ 0x180047370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_18010B150 @ 0x18010B150 (sub_18010B150.c)
 */

__int64 __fastcall sub_180047370(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = a1;
  if ( (dword_18016273C & 1) != 0 )
    sub_18010B150(a1, a2);
  return sub_180047490(v2, 0, 0LL);
}
