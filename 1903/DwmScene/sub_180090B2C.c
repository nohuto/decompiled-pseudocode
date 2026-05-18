/*
 * XREFs of sub_180090B2C @ 0x180090B2C
 * Callers:
 *     sub_180090A04 @ 0x180090A04 (sub_180090A04.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180090B2C(__int64 a1, char a2, char a3)
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
