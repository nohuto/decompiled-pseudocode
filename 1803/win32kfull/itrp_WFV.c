/*
 * XREFs of itrp_WFV @ 0x1C02D0C60
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02C66D0 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WFV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v0 = qword_1C0327168, (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) >= 2) )
  {
    qword_1C0327168 -= 4LL;
    HIWORD(dword_1C032715C) = *(_WORD *)(v0 - 4);
    qword_1C0327168 = v0 - 8;
    LOWORD(dword_1C032715C) = *(_WORD *)(v0 - 8);
    itrp_ComputeAndCheck_PF_Proj();
    dword_1C03271AC = 1;
    word_1C03271CC = 0;
    return v1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
