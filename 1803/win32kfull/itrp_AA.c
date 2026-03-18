/*
 * XREFs of itrp_AA @ 0x1C02CCF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_AA(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    result = a1;
    qword_1C0327168 -= 4LL;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
