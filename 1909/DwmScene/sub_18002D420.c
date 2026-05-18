/*
 * XREFs of sub_18002D420 @ 0x18002D420
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EC90 @ 0x18009EC90 (sub_18009EC90.c)
 */

__int64 __fastcall sub_18002D420(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009EC90();
  return result;
}
