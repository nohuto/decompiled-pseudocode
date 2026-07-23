/*
 * XREFs of AuthzBasepCompareUnicodeStringCaseSensitive @ 0x1403257B8
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v2; // r10d
  int v3; // r11d
  __int64 v4; // r9
  char *v5; // rax
  char *v6; // r9
  __int64 v7; // rcx
  unsigned __int16 v8; // r8

  v2 = *a1;
  v3 = *a2;
  v4 = *a1;
  v5 = (char *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)v2 >= (unsigned __int16)v3 )
    v4 = *a2;
  v6 = &v5[v4];
  if ( v5 >= v6 )
    return (unsigned int)(v2 - v3);
  v7 = *((_QWORD *)a2 + 1) - (_QWORD)v5;
  while ( 1 )
  {
    v8 = *(_WORD *)&v5[v7];
    if ( *(_WORD *)v5 != v8 )
      break;
    v5 += 2;
    if ( v5 >= v6 )
      return (unsigned int)(v2 - v3);
  }
  return *(unsigned __int16 *)v5 - (unsigned int)v8;
}
