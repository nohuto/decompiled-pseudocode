/*
 * XREFs of CiThreadUpdatePriorities @ 0x1C000AB10
 * Callers:
 *     CiThreadSetRelativePriority @ 0x1C000A5B0 (CiThreadSetRelativePriority.c)
 *     CiThreadCreate @ 0x1C000A7F0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

char __fastcall CiThreadUpdatePriorities(_BYTE *a1, _BYTE *a2, unsigned __int8 a3)
{
  char result; // al
  unsigned __int8 v5; // dl
  char v6; // r8
  char v7; // dl
  int v8; // r11d
  int v9; // r11d

  if ( CiSystemResponsiveness == 100 )
  {
    v6 = a3 + 9;
    v7 = v6;
    result = v6;
    goto LABEL_14;
  }
  result = a3 + a2[1];
  if ( result )
  {
    if ( (unsigned __int8)result >= 8u )
      result = 7;
  }
  else
  {
    result = 1;
  }
  v5 = a2[2];
  if ( v5 >= 8u )
    v5 = a3;
  v6 = *a2 + a3;
  v7 = v5 + 8;
  v8 = ((unsigned __int8)a2[3] >> 4) & 7;
  if ( v8 != 2 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v6 = v7;
      goto LABEL_10;
    }
    if ( v9 != 2 )
      goto LABEL_10;
    if ( (unsigned __int8)v6 >= 0x17u )
    {
      if ( (unsigned __int8)v6 > 0x1Au )
        v6 = 26;
      goto LABEL_10;
    }
LABEL_17:
    v6 = 23;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v6 < 0x10u )
  {
    v6 = 16;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v6 >= 0x18u )
    goto LABEL_17;
LABEL_10:
  if ( (unsigned __int8)v7 >= 0x1Bu )
    v7 = 26;
  if ( (unsigned __int8)v6 >= 0x1Bu )
    v6 = 27;
LABEL_14:
  a1[106] = result;
  a1[105] = v7;
  a1[104] = v6;
  return result;
}
