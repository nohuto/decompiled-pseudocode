/*
 * XREFs of SmSanitizeString @ 0x140306920
 * Callers:
 *     SmKmVolumeQueryUniqueId @ 0x1408AF8C4 (SmKmVolumeQueryUniqueId.c)
 * Callees:
 *     isprint @ 0x1401960B0 (isprint.c)
 */

void __fastcall SmSanitizeString(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int16 *v2; // rdi
  unsigned __int64 v3; // r14
  unsigned __int16 *v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int16 v6; // bx
  __int16 v7; // bx

  v2 = a1;
  v3 = 0LL;
  v4 = &a1[((unsigned __int64)a2 >> 1) - 1];
  v5 = (unsigned __int64)((char *)v4 - (char *)a1 + 1) >> 1;
  if ( a1 > v4 )
    v5 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( *v2 )
        break;
      v6 = 126;
LABEL_13:
      *v2 = v6;
      ++v3;
      ++v2;
      if ( v3 >= v5 )
        goto LABEL_14;
    }
    if ( v6 > 0xFFu )
    {
      v7 = v6 % 0x57u;
    }
    else
    {
      if ( isprint(v6) )
        goto LABEL_11;
      v7 = v6 % 0x57u;
    }
    v6 = v7 + 36;
LABEL_11:
    if ( v6 == 92 )
      v6 = 95;
    goto LABEL_13;
  }
LABEL_14:
  *v2 = 0;
}
