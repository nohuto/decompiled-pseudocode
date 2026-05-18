/*
 * XREFs of sub_180090C3C @ 0x180090C3C
 * Callers:
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180090C3C(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 152);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 152) = v5;
  return result;
}
