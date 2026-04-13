/*
 * XREFs of _Stopfx @ 0x1800B568C
 * Callers:
 *     _Stofx @ 0x1800AE7C0 (_Stofx.c)
 *     _Stodx @ 0x1800AF2B8 (_Stodx.c)
 *     _Stoldx @ 0x1800AF8F0 (_Stoldx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Stopfx(unsigned __int8 **a1, _QWORD *a2)
{
  unsigned __int8 *v2; // rbx
  int v5; // edi
  char v6; // cl
  unsigned int v7; // edi
  _BYTE *v8; // rsi
  __int64 result; // rax

  v2 = *a1;
  v5 = 0;
  while ( isspace(*v2) )
    ++v2;
  v6 = *v2;
  if ( *v2 == 45 )
  {
    v5 = 8;
  }
  else if ( v6 != 43 )
  {
    goto LABEL_8;
  }
  v6 = *++v2;
LABEL_8:
  if ( ((v6 - 78) & 0xDF) != 0 )
  {
    if ( ((v6 - 73) & 0xDF) != 0 )
    {
      v7 = v5 | 1;
      goto LABEL_29;
    }
    if ( ((v2[1] - 78) & 0xDF) == 0 && ((v2[2] - 70) & 0xDF) == 0 )
    {
      v2 += 3;
      v7 = v5 | 3;
      if ( ((*v2 - 73) & 0xDF) == 0
        && ((v2[1] - 78) & 0xDF) == 0
        && ((v2[2] - 73) & 0xDF) == 0
        && ((v2[3] - 84) & 0xDF) == 0
        && ((v2[4] - 89) & 0xDF) == 0 )
      {
        v2 += 5;
      }
      goto LABEL_27;
    }
  }
  else if ( ((v2[1] - 65) & 0xDF) == 0 && ((v2[2] - 78) & 0xDF) == 0 )
  {
    v2 += 3;
    v7 = 4;
    v8 = v2;
    if ( *v2 == 40 )
    {
      do
      {
        do
          ++v8;
        while ( isalnum((unsigned __int8)*v8) );
      }
      while ( *v8 == 95 );
      if ( *v8 == 41 )
        v2 = v8 + 1;
    }
    goto LABEL_27;
  }
  v2 = *a1;
  v7 = 0;
LABEL_27:
  if ( a2 )
    *a2 = v2;
LABEL_29:
  result = v7;
  *a1 = v2;
  return result;
}
