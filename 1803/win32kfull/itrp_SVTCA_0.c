/*
 * XREFs of itrp_SVTCA_0 @ 0x1C02CFEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_0(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx

  dword_1C0327158 = 0x40000000;
  dword_1C032715C = 0x40000000;
  dword_1C03271AC = 3;
  dword_1C03271B0 = 4;
  v1 = *(_WORD *)(qword_1C0327180 + 452);
  if ( (v1 & 1) != 0 && (v1 & 4) != 0 )
  {
    word_1C03271F4 = 1;
    if ( (*(_BYTE *)(qword_1C0327180 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327180 + 333) )
    {
      v2 = 8LL;
      goto LABEL_8;
    }
  }
  else
  {
    word_1C03271F4 = 0;
  }
  v2 = 0LL;
LABEL_8:
  *(_DWORD *)(qword_1C0327180 + 128) = itrp_RoundFunctionId[v2 + *(unsigned __int16 *)(qword_1C0327180 + 132)];
  word_1C03271F8 = -1;
  word_1C03271F6 = -1;
  dword_1C03271B4 = 4;
  word_1C03271A8 = 0x4000;
  if ( word_1C03271CC )
    word_1C03271CC = 2;
  return a1;
}
