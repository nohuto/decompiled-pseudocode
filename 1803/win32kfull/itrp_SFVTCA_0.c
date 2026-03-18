/*
 * XREFs of itrp_SFVTCA_0 @ 0x1C02CE380
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02C6698 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SFVTCA_0()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int16 v2; // r9

  word_1C03271A8 = HIWORD(dword_1C0327158);
  dword_1C032715C = 0x40000000;
  itrp_Check_PF_Proj();
  result = v0;
  dword_1C03271AC = 1;
  word_1C03271CC = v2;
  return result;
}
