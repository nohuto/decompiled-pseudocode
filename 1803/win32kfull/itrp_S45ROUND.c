/*
 * XREFs of itrp_S45ROUND @ 0x1C02CDC90
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C02D0218 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_S45ROUND(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v2 = qword_1C0327168, (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) )
  {
    qword_1C0327168 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)(v2 - 4), 0LL);
    v3 = qword_1C0327180;
    *(_WORD *)(qword_1C0327180 + 132) = 7;
    *(_DWORD *)(v3 + 128) = 8;
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
