/*
 * XREFs of itrp_ABS @ 0x1C02C5940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ABS(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    v1 = *(_DWORD *)(qword_1C0327168 - 4);
    if ( v1 < 0 )
      *(_DWORD *)(qword_1C0327168 - 4) = -v1;
    return a1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
