/*
 * XREFs of PopPepShouldActivityWait @ 0x1400FFD24
 * Callers:
 *     PopPepAttemptAcitivityPromotion @ 0x1400FFB8C (PopPepAttemptAcitivityPromotion.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPepShouldActivityWait(__int64 a1, int a2, int a3, int a4, char a5)
{
  char *v6; // r9
  char *v7; // r9
  char v8; // dl
  _DWORD **v9; // r10
  char *i; // r9

  v6 = (char *)&unk_140350D88;
  if ( !a5 )
    v6 = (char *)&unk_140350D70;
  v7 = &v6[136 * a2];
  if ( a3 > a4 )
    return 0;
  v8 = 1;
  v9 = (_DWORD **)(a1 + 8LL * a3);
  for ( i = &v7[4 * a3]; !*(_DWORD *)i || (*(_DWORD *)i & **v9) == 0; i += 4 )
  {
    ++a3;
    ++v9;
    if ( a3 > a4 )
      return 0;
  }
  return v8;
}
