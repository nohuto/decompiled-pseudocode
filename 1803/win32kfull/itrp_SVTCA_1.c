/*
 * XREFs of itrp_SVTCA_1 @ 0x1C02CFFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_1(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx

  dword_1C03271AC = 2;
  dword_1C03271B0 = 3;
  dword_1C0327158 = 0x4000;
  dword_1C032715C = 0x4000;
  v1 = *(_WORD *)(qword_1C0327180 + 452);
  if ( (v1 & 1) == 0 || (v1 & 4) != 0 )
  {
    word_1C03271F4 = 0;
LABEL_7:
    v2 = 0LL;
    goto LABEL_8;
  }
  word_1C03271F4 = 1;
  if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0327180 + 333) )
    goto LABEL_7;
  v2 = 8LL;
LABEL_8:
  *(_DWORD *)(qword_1C0327180 + 128) = itrp_RoundFunctionId[v2 + *(unsigned __int16 *)(qword_1C0327180 + 132)];
  word_1C03271F8 = -1;
  word_1C03271F6 = -1;
  dword_1C03271B4 = 3;
  word_1C03271A8 = 0x4000;
  word_1C03271CC = word_1C03271CC != 0;
  return a1;
}
