/*
 * XREFs of sub_18002D330 @ 0x18002D330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EB9C @ 0x18009EB9C (sub_18009EB9C.c)
 */

__int64 __fastcall sub_18002D330(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009EB9C();
  return result;
}
