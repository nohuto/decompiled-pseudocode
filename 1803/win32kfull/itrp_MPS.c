/*
 * XREFs of itrp_MPS @ 0x1C02CC3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_MPS(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0327180 + 424);
  if ( (qword_1C0327180 ^ v1 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v1 - qword_1C0327168) >> 2 )
  {
    *(_DWORD *)qword_1C0327168 = *(unsigned __int16 *)(qword_1C0327180 + 26);
    result = a1;
    qword_1C0327168 += 4LL;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4369;
  }
  return result;
}
