/*
 * XREFs of AntiLog @ 0x1C0133528
 * Callers:
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C0133720 (FD6DivL.c)
 *     MantissaToFraction @ 0x1C0133764 (MantissaToFraction.c)
 */

__int64 __fastcall AntiLog(int a1)
{
  int v1; // r8d
  int v2; // ebx
  unsigned int v3; // r8d
  unsigned int v5; // edx
  unsigned int v6; // r9d
  int v7; // edx
  unsigned int i; // edi
  int v9; // ecx

  v1 = a1;
  if ( a1 < 0 )
  {
    if ( a1 <= -6000000 )
      return 1LL;
    v2 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v2 + a1;
  }
  else if ( a1 >= 1000000 )
  {
    if ( a1 >= 3331930 )
      return 0x7FFFFFFFLL;
    v2 = (a1 + 999999) / 1000000;
    v1 = 1000000 * v2 - a1;
  }
  else
  {
    v2 = 0;
  }
  if ( v1 )
  {
    v5 = v1 / 10000;
    if ( v1 / 10000 >= 0 && v5 <= 0x63 )
    {
      _mm_lfence();
      v6 = (unsigned __int16)MantSearchTable[v5];
      v7 = (unsigned __int16)MantSearchTable[v5 + 1] + 1;
      for ( i = (v7 + v6) >> 1; i != v6; i = (int)(v7 + v6) >> 1 )
      {
        v9 = MantissaTable[i];
        if ( v1 < v9 )
        {
          v7 = i;
        }
        else
        {
          if ( v1 <= v9 )
          {
            v1 = 0;
            break;
          }
          v6 = i;
        }
      }
      if ( v1 )
        v1 = MantissaToFraction((unsigned int)(v1 - MantissaTable[v6]), (unsigned int)MantissaCorrectData[v6]);
      v3 = 1000000 * (i + 100) + v1;
      v2 -= 2;
      goto LABEL_6;
    }
    return 0x7FFFFFFFLL;
  }
  v3 = 1000000;
LABEL_6:
  if ( v2 < 0 )
    return FD6DivL(v3, (unsigned int)Power10ExpNum[-v2]);
  if ( v2 > 0 )
    return v3 * Power10ExpNum[v2];
  return v3;
}
