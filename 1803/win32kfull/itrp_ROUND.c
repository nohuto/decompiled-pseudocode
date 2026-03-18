/*
 * XREFs of itrp_ROUND @ 0x1C02CD7A0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_ROUND(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    qword_1C0327168 -= 4LL;
    *(_DWORD *)qword_1C0327168 = InvokeRoundValue(
                                   *(_DWORD *)(qword_1C0327180 + 128),
                                   *(_DWORD *)qword_1C0327168,
                                   *(_DWORD *)(qword_1C0327180 + 4LL * (a2 - 104) + 32));
    result = a1;
    qword_1C0327168 += 4LL;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
