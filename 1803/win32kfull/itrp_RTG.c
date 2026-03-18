/*
 * XREFs of itrp_RTG @ 0x1C02CDA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RTG(__int64 a1)
{
  __int64 v1; // r9
  int v2; // edx

  v1 = qword_1C0327180;
  *(_WORD *)(qword_1C0327180 + 132) = 3;
  v2 = 4;
  if ( word_1C03271F4 && ((*(_BYTE *)(qword_1C0327180 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327180 + 333)) )
    v2 = 12;
  *(_DWORD *)(v1 + 128) = v2;
  return a1;
}
