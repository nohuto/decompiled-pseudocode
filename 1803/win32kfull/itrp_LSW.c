/*
 * XREFs of itrp_LSW @ 0x1C02CA810
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_LSW(__int64 a1)
{
  __int64 v1; // rbx
  int *v3; // rdx
  int v4; // eax
  __int64 result; // rax

  v1 = qword_1C0327180;
  word_1C03271CC = 0;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    v3 = (int *)(qword_1C0327180 + 296);
    qword_1C0327168 -= 4LL;
    v4 = *(__int16 *)qword_1C0327168;
    *(_WORD *)(qword_1C0327180 + 154) = *(_WORD *)qword_1C0327168;
    *(_DWORD *)(v1 + 112) = InvokeGlobalGSScale(*(_DWORD *)(v1 + 192), v3, v4);
    return a1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
