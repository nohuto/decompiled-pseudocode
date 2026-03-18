/*
 * XREFs of itrp_MUL @ 0x1C02CC870
 * Callers:
 *     <none>
 * Callees:
 *     Mul26Dot6 @ 0x1C02B3178 (Mul26Dot6.c)
 */

__int64 __fastcall itrp_MUL(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) >= 2 )
  {
    qword_1C0327168 -= 4LL;
    *(_DWORD *)(qword_1C0327168 - 4) = Mul26Dot6(*(_DWORD *)(qword_1C0327168 - 4), *(_DWORD *)qword_1C0327168);
    return a1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
