/*
 * XREFs of LookupAceFlagsInTable @ 0x1405B3344
 * Callers:
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 * Callees:
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAceFlagsInTable(wchar_t *Str1, int a2, int a3, char a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  unsigned int i; // esi
  unsigned int v13; // ecx

  v4 = 0LL;
  v5 = (char *)&unk_1404255B4;
  for ( i = 0; i < 9; ++i )
  {
    if ( (a3 & *((_DWORD *)v5 - 1)) == a3 )
    {
      if ( *(_DWORD *)v5 )
      {
        v13 = 0;
        while ( *(_BYTE *)(v13 + *(_QWORD *)(v5 + 4)) != a4 )
        {
          if ( ++v13 >= *(_DWORD *)v5 )
            goto LABEL_7;
        }
      }
      if ( Str1
         ? wcsnicmp(Str1, *(const wchar_t **)(v5 - 20), *((unsigned int *)v5 - 3)) == 0
         : a2 == *((_DWORD *)v5 - 2) )
      {
        break;
      }
    }
LABEL_7:
    v5 += 32;
  }
  if ( i < 9 )
    return &(&off_1404255A0)[4 * i];
  return (wchar_t **)v4;
}
