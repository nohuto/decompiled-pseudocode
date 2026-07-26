/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C0128C44
 * Callers:
 *     SepSddlGetAclForString @ 0x1C0128740 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 v3; // r9
  int v5; // r10d
  unsigned int v6; // r11d
  unsigned __int16 *v7; // rdx
  int v8; // eax
  __int64 result; // rax

  v3 = *a1;
  *a3 = 0;
  *a2 = a1;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_10:
    v5 = 10;
    goto LABEL_5;
  }
  if ( ((a1[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_10;
  v3 = a1[2];
  a1 += 2;
LABEL_4:
  v5 = 16;
LABEL_5:
  v6 = 0;
  if ( !v3 )
    return 0LL;
  v7 = a1;
  do
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
    {
      if ( v5 != 16 )
        break;
      if ( (unsigned __int16)(v3 - 65) > 5u )
      {
        if ( (unsigned __int16)(v3 - 97) > 5u )
          break;
        v8 = v3 - 87;
      }
      else
      {
        v8 = v3 - 55;
      }
    }
    else
    {
      v8 = v3 - 48;
    }
    if ( v8 + v5 * v6 < v6 )
      return 0LL;
    ++v7;
    v6 = v8 + v5 * v6;
    v3 = *v7;
  }
  while ( *v7 );
  if ( v7 == a1 )
    return 0LL;
  *a2 = v7;
  result = 1LL;
  *a3 = v6;
  return result;
}
