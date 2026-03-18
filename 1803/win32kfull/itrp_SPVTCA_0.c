/*
 * XREFs of itrp_SPVTCA_0 @ 0x1C02CF740
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Check_PF_Proj @ 0x1C02C6698 (itrp_Check_PF_Proj.c)
 */

__int64 itrp_SPVTCA_0()
{
  __int16 v0; // ax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // r10d
  __int16 v5; // r9

  dword_1C0327158 = 0x40000000;
  dword_1C03271B0 = 4;
  v0 = *(_WORD *)(qword_1C0327180 + 452);
  if ( (v0 & 1) == 0 || (v0 & 4) == 0 )
  {
    word_1C03271F4 = 0;
LABEL_7:
    v1 = 0LL;
    goto LABEL_8;
  }
  word_1C03271F4 = 1;
  if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0327180 + 333) )
    goto LABEL_7;
  v1 = 8LL;
LABEL_8:
  *(_DWORD *)(qword_1C0327180 + 128) = itrp_RoundFunctionId[v1 + *(unsigned __int16 *)(qword_1C0327180 + 132)];
  word_1C03271F8 = -1;
  word_1C03271F6 = -1;
  word_1C03271A8 = HIWORD(dword_1C032715C);
  itrp_Check_PF_Proj();
  dword_1C03271B4 = dword_1C03271B0;
  result = v2;
  dword_1C03271AC = v4;
  word_1C03271CC = v5;
  return result;
}
