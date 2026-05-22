/*
 * XREFs of ?ReadConfigValue@TwoFingerClickRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x18010DB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerClickRecognizer::ReadConfigValue(_WORD *a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 19:
      v4 = a1[31];
      goto LABEL_14;
    case 20:
      v4 = a1[32];
      goto LABEL_14;
    case 21:
      v4 = a1[33];
      goto LABEL_14;
    case 22:
      v4 = a1[35];
      goto LABEL_14;
    case 23:
      v4 = a1[34];
      goto LABEL_14;
    case 24:
      v4 = a1[30];
LABEL_14:
      *(_WORD *)(a3 + 4) = v4;
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
