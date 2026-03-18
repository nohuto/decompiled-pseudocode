/*
 * XREFs of itrp_DEPTH @ 0x1C02C68D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DEPTH(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0327180 + 424);
  if ( (qword_1C0327180 ^ v1 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v1 - qword_1C0327168) >> 2 )
  {
    *(_DWORD *)qword_1C0327168 = (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2;
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
