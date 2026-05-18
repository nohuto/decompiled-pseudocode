/*
 * XREFs of sub_18002D380 @ 0x18002D380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 */

__int64 __fastcall sub_18002D380(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009EC10();
  return result;
}
