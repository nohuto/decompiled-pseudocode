/*
 * XREFs of sub_180090EB8 @ 0x180090EB8
 * Callers:
 *     sub_1801119A0 @ 0x1801119A0 (sub_1801119A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180090EB8(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 160);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 160) = v5;
  return result;
}
