/*
 * XREFs of itrp_RTHG @ 0x1C02CDAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RTHG(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  __int64 result; // rax

  v1 = qword_1C0327180;
  *(_WORD *)(qword_1C0327180 + 132) = 4;
  if ( word_1C03271F4 && ((*(_BYTE *)(qword_1C0327180 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327180 + 333)) )
    v2 = 13;
  else
    v2 = 5;
  *(_DWORD *)(v1 + 128) = v2;
  result = a1;
  word_1C03271CC = 0;
  return result;
}
