/*
 * XREFs of LookupAceFlagsInTable @ 0x1408A75F8
 * Callers:
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 * Callees:
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAceFlagsInTable(wchar_t *Str1, int a2, int a3, char a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  unsigned int i; // esi
  unsigned int v11; // ecx

  v4 = 0LL;
  v5 = (char *)&unk_140402BA4;
  for ( i = 0; i < 9; ++i )
  {
    if ( (a3 & *((_DWORD *)v5 - 1)) == a3 )
    {
      if ( *(_DWORD *)v5 )
      {
        v11 = 0;
        while ( *(_BYTE *)(v11 + *(_QWORD *)(v5 + 4)) != a4 )
        {
          if ( ++v11 >= *(_DWORD *)v5 )
            goto LABEL_12;
        }
      }
      if ( Str1
         ? wcsnicmp(Str1, *(const wchar_t **)(v5 - 20), *((unsigned int *)v5 - 3)) == 0
         : a2 == *((_DWORD *)v5 - 2) )
      {
        break;
      }
    }
LABEL_12:
    v5 += 32;
  }
  if ( i < 9 )
    return &(&off_140402B90)[4 * i];
  return (wchar_t **)v4;
}
