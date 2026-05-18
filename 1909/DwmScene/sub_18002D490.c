/*
 * XREFs of sub_18002D490 @ 0x18002D490
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009ED20 @ 0x18009ED20 (sub_18009ED20.c)
 */

__int64 __fastcall sub_18002D490(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009ED20();
  return result;
}
