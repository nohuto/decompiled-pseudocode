/*
 * XREFs of itrp_NROUND @ 0x1C02CCC30
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundOff @ 0x1C02CDBF8 (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_NROUND(__int64 a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // r10
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    qword_1C0327168 -= 4LL;
    v3 = itrp_RoundOff(*(unsigned int *)qword_1C0327168, *(unsigned int *)(qword_1C0327180 + 4LL * (a2 - 108) + 32));
    *v4 = v3;
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
