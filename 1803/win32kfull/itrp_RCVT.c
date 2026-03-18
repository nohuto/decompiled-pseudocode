/*
 * XREFs of itrp_RCVT @ 0x1C02CD4F0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGetCVTEntry @ 0x1C02C524C (InvokeGetCVTEntry.c)
 */

__int64 __fastcall itrp_RCVT(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    qword_1C0327168 -= 4LL;
    v2 = *(unsigned __int16 *)(qword_1C0327180 + 360);
    v3 = *(_DWORD *)qword_1C0327168;
    if ( (*(_DWORD *)qword_1C0327168 < (int)v2 || v3 <= 255)
      && v3 >= 0
      && (qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ v2 ^ *(_QWORD *)(qword_1C0327180 + 16)) == *(_QWORD *)(qword_1C0327180 + 368) )
    {
      *(_DWORD *)qword_1C0327168 = InvokeGetCVTEntry(dword_1C03271BC, v3);
      result = a1;
      qword_1C0327168 += 4LL;
      return result;
    }
    dword_1C03271D0 = 4379;
  }
  else
  {
    dword_1C03271D0 = 4368;
  }
  return qword_1C03271D8;
}
