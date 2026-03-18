/*
 * XREFs of itrp_SROUND @ 0x1C02CFC40
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C02D0218 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_SROUND(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    qword_1C0327168 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)qword_1C0327168, 1LL);
    v2 = qword_1C0327180;
    *(_WORD *)(qword_1C0327180 + 132) = 6;
    *(_DWORD *)(v2 + 128) = 7;
    word_1C03271CC = 0;
    return a1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
